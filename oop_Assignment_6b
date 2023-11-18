#include <iostream>     // Standard input/output stream header file.
#include <algorithm>    // Header file for various algorithms, including sort.
#include <vector>       // Header file for the vector container.

using namespace std;    // Using the standard namespace.

class InventoryItem   // Definition of the InventoryItem class.
{
public:
    char itemName[100];   // Data member to store the name of the item.
    int itemQuantity;    // Data member to store the quantity of the item.
    int itemCost;        // Data member to store the cost of the item.
    int itemCode;        // Data member to store the code of the item.

    bool operator==(const InventoryItem &otherItem)  // Overloaded equality operator for comparing two items.
    {
        return (itemCode == otherItem.itemCode);
    }

    bool operator<(const InventoryItem &otherItem)   // Overloaded less than operator for sorting items by code.
    {
        return (itemCode < otherItem.itemCode);
    }
};

vector<InventoryItem> inventory;   // Vector to store instances of InventoryItem.

void printItem(InventoryItem &item);  // Function prototype for printing an item.
void displayInventory();              // Function prototype for displaying all items in the inventory.
void insertItem();                    // Function prototype for inserting a new item.
void searchItem();                    // Function prototype for searching an item by code.
void deleteItem();                    // Function prototype for deleting an item.

bool compareItems(const InventoryItem &item1, const InventoryItem &item2)  // Function prototype for comparing items based on cost.
{
    return (item1.itemCost < item2.itemCost);
}

int main()
{
    int choice;     // Variable to store the user's choice.
    do
    {
        cout << "\n***** Inventory Menu *****";
        cout << "\n1. Insert Item";
        cout << "\n2. Display Inventory";
        cout << "\n3. Search Item";
        cout << "\n4. Sort Inventory";
        cout << "\n5. Delete Item";
        cout << "\n6. Exit";
        cout << "\nEnter your choice:";
        cin >> choice;  // Reading the user's choice.

        switch (choice)
        {
        case 1:
            insertItem();  // Calling the function to insert a new item.
            break;

        case 2:
            displayInventory();  // Calling the function to display all items in the inventory.
            break;

        case 3:
            searchItem();  // Calling the function to search for an item by code.
            break;

        case 4:
            sort(inventory.begin(), inventory.end(), compareItems);  // Sorting items by cost.
            cout << "\n\n Inventory Sorted by Cost";
            displayInventory();  // Displaying the sorted inventory.
            break;

        case 5:
            deleteItem();  // Calling the function to delete an item.
            break;

        case 6:
            exit(0);  // Exiting the program.
        }

    } while (choice != 6);

    return 0;  // Program completion.
}

void insertItem()
{
    InventoryItem newItem;  // Creating a new InventoryItem object.
    cout << "\nEnter Item Name:";
    cin >> newItem.itemName;  // Reading and storing the name of the item.
    cout << "Enter Item Quantity:";
    cin >> newItem.itemQuantity;  // Reading and storing the quantity of the item.
    cout << "Enter Item Cost:";
    cin >> newItem.itemCost;  // Reading and storing the cost of the item.
    cout << "Enter Item Code:";
    cin >> newItem.itemCode;  // Reading and storing the code of the item.
    inventory.push_back(newItem);  // Adding the new item to the vector.
}

void displayInventory()
{
    for_each(inventory.begin(), inventory.end(), printItem);  // Using for_each to display all items in the inventory.
}

void printItem(InventoryItem &item)
{
    cout << "\n";
    cout << "\nItem Name: " << item.itemName;  // Displaying the name of the item.
    cout << "\nItem Quantity: " << item.itemQuantity;  // Displaying the quantity of the item.
    cout << "\nItem Cost: " << item.itemCost;  // Displaying the cost of the item.
    cout << "\nItem Code: " << item.itemCode;  // Displaying the code of the item.
}

void searchItem()
{
    vector<InventoryItem>::iterator iter;  // Iterator for searching an item.
    InventoryItem searchItem;  // Creating an InventoryItem object for searching.
    cout << "\nEnter Item Code to search:";
    cin >> searchItem.itemCode;  // Reading the code for searching.
    iter = find(inventory.begin(), inventory.end(), searchItem);  // Using find to search for the item.
    if (iter == inventory.end())
    {
        cout << "\nItem Not found.";  // Displaying a message if the item is not found.
    }
    else
    {
        cout << "\nItem Found.";  // Displaying a message if the item is found.
    }
}

void deleteItem()
{
    vector<InventoryItem>::iterator iter;  // Iterator for deleting an item.
    InventoryItem deleteItem;  // Creating an InventoryItem object for deletion.
    cout << "\nEnter Item Code to delete:";
    cin >> deleteItem.itemCode;  // Reading the code for deletion.
    iter = find(inventory.begin(), inventory.end(), deleteItem);  // Using find to locate the item for deletion.
    if (iter == inventory.end())
    {
        cout << "\nItem Not found.";  // Displaying a message if the item is not found.
    }
    else
    {
        inventory.erase(iter);  // Erasing the item from the vector.
        cout << "\nItem Deleted.";  // Displaying a message if the item is deleted.
    }
}
