// #include <iostream>
// #include <conio.h>
// using namespace std;

// struct Double {
//     int data;
//     Double *next, *prev;
// };


// void make(int n, Double **head, Double *prev);
// void print(Double *head);

// int main() {
//     return 0;
// }

// void make(int n, Double **head, Double *prev) {
//     if (n > 0) {
//         (*head) = new Double;
//         cout << "Input node: ";
//         cin >> (*head)->data;
//         (*head)->prev = prev;
//         (*head)->next = NULL;
//         make(n - 1, &((*head)->next), (*head));
//     } else {
//         (*head) = NULL;
//     }
// }

// void print(Double *head) {
//     if (head != NULL) {
//         cout << head << "\tCurrent address: " << head << "\tNext address: " << head->next << "\tPrev address: " << head->prev << endl;
//         print(head->next);
//     }
// }






// #include <iostream> 
// #include <conio.h>
// using namespace std;

// struct list //singly linked list
// {
// 	int data; //data field
// 	list* next; //reference field
// };

// list* createList(int n);
// void printList(list* head);
// list* Insert_Item_List(list* Head, int Number, int DataItem);
// void deleteNode(list*& head, int delVal);
// void Linear_search(list* Head, int DataItem);

// int main()
// {
// 	int n;
// 	list* head = NULL;

// 	int choice;
// 	do {
// 		cout << "Menu:" << endl;
// 		cout << "1. Create a list" << endl;
// 		cout << "2. Display the list" << endl;
// 		cout << "3. Add an element to the specified position" << endl;
// 		cout << "4. Delete a node" << endl;
// 		cout << "5. Linear searching algorithm" << endl;
// 		cout << "0. Exit" << endl;
// 		cin >> choice;

// 		switch (choice)
// 		{
// 		case 1:
// 		{
// 			if (!head)
// 			{
// 				cout << "Enter the number of elements in the list: ";
// 				cin >> n;
// 				head = createList(n);
// 			}
// 			else cout << "List is already exist! " << endl;
// 			break;
// 		}
// 		case 2:
// 		{
// 			printList(head);
// 			break;
// 		}
// 		case 3:
// 		{
// 			int value, position;
// 			cout << "Enter value: ";
// 			cin >> value;
// 			cout << "Enter position for inserting: ";
// 			cin >> position;
// 			head = Insert_Item_List(head, position, value);
// 			break;
// 		}
// 		/*case 4:
// 		{
// 			int value;
// 			cout << "Enter value to be deleted: ";
// 			cin >> value;
// 			deleteNode(head, value);
// 			break;
// 		}
// 		case 5:
// 		{
// 			int target;
// 			cout << "input the target value for searching";
// 			cin >> target;
// 			Linear_search(head, target);
// 			break;
			
// 		}*/
		
// 		case 0:
// 			break;
// 		default:
// 			cout << "Invalid choice. Please try again.\n";
// 		}
// 	} while (choice != 0);
// 	return 0;
// }
// list* createList(int n) // n- is an initial size of the list
// {
//     list*head=nullptr, * temp = nullptr;
//     cout<< "Input the elements of the list"<< endl;
//     for (int i=0; i<n; i++)
//     {
        
//         int value;
//         cout<< " Input node value"<< i + 1;
//         cin>> value;
        
//         list* newList = new list;
//         newList ->data= value;
//         newList->next = nullptr;
//         if (!head) // if the node is not
//         {
//             head = newList; //address of thew first node
//             temp = head;
//         }
//         else // if list is not empte
//         {
//             temp->next = newList;
//             temp = temp->next;
//         }
//     }
//     return head;
// }
// void printList(list* head)
// {
//     cout<< "List: "<< endl;
//     while(head)
//     {
//         cout<< "Node" << head -> data<< "\t"<<"Current address"<< head << "\t" << "Next node address"<< head->next << endl;
//         head=head->next;
//     }
// }
// list* Insert_Item_List(list* Head, int Number, int DataItem)
// {
//     Number--; // Adjust the position to zero-based index
//     list* NewItem = new list;
//     NewItem->data = DataItem;
//     NewItem->next = NULL;
    
//     if(Head == NULL) // if the list is empty
//     {
//         Head = NewItem;
//     }
//     else // list is not empty
//     {
//         list* current = Head;
//         for(int i = 1; i < Number && current->next != NULL; i++)
//         {
//             current = current->next; // move to the end
//         }
//         if(Number == 0) // insertion at the beginning
//         {
//             NewItem->next = Head;
//             Head = NewItem;
            
//         }
//         else
//         {
//             if(current->next != NULL)
//                 NewItem->next = current->next;
//             current->next = NewItem;
//         }
//     }
//     return Head;
// }