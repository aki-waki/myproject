#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <sstream>
using namespace std;


void task1();
void task2();
void task3();
void task4();

int main() {
    int choice;
    do {
        cout << "MENU:\n";
        cout << "1. Task 1\n";
        cout << "2. Task 2\n";
        cout << "3. Task 3\n";
        cout << "4. Task 4\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                break;
            case 4:
                task4();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);
    
    return 0;
}

void task1() {
    int N;
    cout << "Input N: ";
    cin >> N;
    
    int *M1 = new int[N];
    cout << "Input array items:\n";
    for (int i = 0; i < N; ++i) {
        cin >> M1[i];
    }
    
   int* M2 = (int*)malloc(N * sizeof(int));
    int duplicateCount = 0;

    // Traverse the array to find duplicates
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (*(M1 + i) == *(M1 + j)) {
                // Check if the duplicate is not already added to duplicates array
                int isDuplicate = 0;
                for (int k = 0; k < duplicateCount; k++) {
                    if (*(M1 + i) == *(M2 + k)) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    *(M2 + duplicateCount) = *(M1 + i);
                    duplicateCount++;
                }
                break;
            }
        }
    }

    printf("The M2 items:\n");
    for (int i = 0; i < duplicateCount; i++) {
        printf("%d\t", *(M2 + i));
    }
    printf("\n");
    
    cout << endl;
    
    delete[] M1;
    delete[] M2;
   
}

void task2() {
    srand(time(0));
    int N;
    cout << "Input N: ";
    cin >> N;
    
    int **arr = new int*[N];
    for (int i = 0; i < N; ++i) {
        *(arr + i) = new int[N];
    }
    
    cout << "Generated array items:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            *(*(arr+j)+i) = rand() % 21 - 10;
            cout <<  *(*(arr+j)+i) << " ";
        }
        cout << endl;
    }
    
    int min_diag = arr[0][0];
    for (int i = 0; i < N; ++i) {
        if ( *(*(arr+i)+i)< min_diag) {
            min_diag =  *(*(arr+i)+i);
        }
    }
    
    cout << "The minimum value of the main diagonal is: " << min_diag << endl;
    
    for (int i = 0; i < N; ++i) {
        delete[]  *(arr+i);
    }
    delete[] arr;
}

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void insert(Node*& head, int val) {
    if (!head) {
        head = new Node(val);
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = new Node(val);
}

void traverse(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << "\tcur address-> " << temp << "\t\t\tnext-> ";
        if (temp->next) {
            cout << temp->next << endl;
        } else {
            cout << "NULL" << endl;
        }
        temp = temp->next;
    }
}

Node* bubbleSort(Node* head) {
    if (!head || !head->next)
        return head;
    bool swapped;
    do {
        swapped = false;
        Node **ptr = &head;
        while ((*ptr)->next) {
            if ((*ptr)->data > (*ptr)->next->data) {
                swap((*ptr)->data, (*ptr)->next->data);
                swapped = true;
            }
            ptr = &(*ptr)->next;
        }
    } while (swapped);
    return head;
}

void task3() {
    int value;
    string input = "";
    Node* head = nullptr;

    cout << "Enter the list elements: ";
    
    cin >> ws; 
    getline(cin, input);
    stringstream ss(input);
    while (ss >> value) {
        insert(head, value);
    }


   


    
    cout << "Original list: \n";
    traverse(head);
    
    head = bubbleSort(head);
    
    cout << "Sorted list: \n";
    traverse(head);
    
    // Clean up
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

struct DNode {
    int data;
    DNode* prev;
    DNode* next;
};

void printListForward(DNode* head) {
    while (head != nullptr) {
        cout << head->data << "\tprev address-> " << head->prev  << "\t\tcur address-> " << head << "\t\tnext-> " << head->next <<endl;
        head = head->next;
    }
    cout << endl;
}

void printListBackward(DNode* tail) {
    while (tail != nullptr) {
        cout << tail->data << "\tprev address-> " << tail->prev  << "\t\tcur address-> " << tail << "\t\tnext-> " << tail->next <<endl;
        tail = tail->prev;
    }
    cout << endl;
}

bool findNodes(DNode* head, int target, DNode*& tail) {
    cout << "Positions of the target value " << target << ": "; 
    int index = 1;
    bool result = false;
    DNode* current = head;
    while (current != nullptr) {
        if (current->data == target) {
            cout << index << "\t";
            result = true;
        }
        current = current->next;
        index++;
    }
    cout << "\n";
    return result;
}



void task4() {
    int  value, target;
    string input = "";
    
    DNode* head = nullptr;
    DNode* tail = nullptr;
    cout << "Enter the list elements: ";
    
    cin >> ws; 
    getline(cin, input);
    stringstream ss(input);
    while (ss >> value) {
        DNode* newNode = new DNode{value, NULL, NULL};
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }


    cout << "List forward traversal: \n";
    printListForward(head);
    
    cout << "List backward traversal: \n";
    printListBackward(tail);
    
    cout << "Enter the target value: ";
    cin >> target;
    
    DNode* targetListTail = NULL;
    
    
    
    if (!findNodes(head, target, targetListTail)) {
        cout << "No target value found\n";
    }
    
    // Clean up the original list
    while (head) {
        DNode* temp = head;
        head = head->next;
        delete temp;
    }
}