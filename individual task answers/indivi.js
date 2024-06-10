// let numbers = [];

// function showResult() {
//     const arrayItems = document.getElementById('arrayItems').value;
//     const numberToFind = document.getElementById('numberToFind').value;
//     const itemToRemove = document.getElementById('itemToRemove').value;

//     if (arrayItems) {
//         numbers = arrayItems.split(',').map(Number);
//     } else {
//         alert("Please enter array items.");
//         return;
//     }

//     const num2 = numbers.slice(0, 3);
//     document.getElementById('p1').innerText = `Modified array (first 3 items): ${num2.join(', ')}`;

//     if (numberToFind) {
//         const found = numbers.includes(Number(numberToFind));
//         alert(found ? `Number ${numberToFind} is in the array.` : `Number ${numberToFind} is not in the array.`);
//     } else {
//         alert("Please enter a number to find.");
//     }

//     if (itemToRemove) {
//         const index = numbers.indexOf(Number(itemToRemove));
//         if (index !== -1) {
//             numbers.splice(index, 1);
//             alert(`Item ${itemToRemove} removed. New array: ${numbers.join(', ')}`);
//         } else {
//             alert(`Item ${itemToRemove} not found in the array.`);
//         }
//     } else {
//         alert("Please enter an item to remove.");
//     }
// }

// function showDetails() {
//     if (numbers.length === 0) {
//         alert("Array is empty. Please input array items first.");
//     } else {
//         alert(`Reversed array: ${numbers.reverse().join(', ')}`);
//     }
// }
