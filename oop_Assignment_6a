// Write C++ program using STL for sorting and searching user defined records such as personal records (Name, DOB, Telephone number etc) using vector container.



#include <iostream>     // Standard input/output stream header file.
#include <algorithm>    // Header file for various algorithms, including sort.
#include <vector>       // Header file for the vector container.

using namespace std;    // Using the standard namespace.

class PersonalRecord   // Definition of the PersonalRecord class.
{
public:
    string name;        // Data member to store the name.
    string dob;         // Data member to store the date of birth.
    string phoneNumber; // Data member to store the telephone number.

    bool operator==(const PersonalRecord &otherRecord) // Overloaded equality operator for comparing two records.
    {
        return (name == otherRecord.name);
    }

    bool operator<(const PersonalRecord &otherRecord)  // Overloaded less than operator for sorting records by name.
    {
        return (name < otherRecord.name);
    }
};

vector<PersonalRecord> personalRecords; // Vector to store instances of PersonalRecord.

void printRecord(const PersonalRecord &record);  // Function prototype for printing a record.
void displayRecords();                          // Function prototype for displaying all records.
void insertRecord();                            // Function prototype for inserting a new record.
void searchRecord();                            // Function prototype for searching a record by name.
void sortRecords();                             // Function prototype for sorting records by name.

int main()
{
    int choice;     // Variable to store the user's choice.
    do
    {
        cout << "\n***** Personal Records Menu *****";
        cout << "\n1. Insert Record";
        cout << "\n2. Display Records";
        cout << "\n3. Search Record";
        cout << "\n4. Sort Records";
        cout << "\n5. Exit";
        cout << "\nEnter your choice:";
        cin >> choice;  // Reading the user's choice.

        switch (choice)
        {
        case 1:
            insertRecord();  // Calling the function to insert a new record.
            break;

        case 2:
            displayRecords();  // Calling the function to display all records.
            break;

        case 3:
            searchRecord();  // Calling the function to search for a record by name.
            break;

        case 4:
            sortRecords();  // Calling the function to sort records by name.
            break;

        case 5:
            exit(0);  // Exiting the program.
        }

    } while (choice != 5);

    return 0;  // Program completion.
}

void insertRecord()
{
    PersonalRecord newRecord;  // Creating a new PersonalRecord object.
    cout << "\nEnter Name: ";
    cin >> newRecord.name;  // Reading and storing the name.
    cout << "Enter Date of Birth (DOB): ";
    cin >> newRecord.dob;  // Reading and storing the date of birth.
    cout << "Enter Telephone Number: ";
    cin >> newRecord.phoneNumber;  // Reading and storing the telephone number.
    personalRecords.push_back(newRecord);  // Adding the new record to the vector.
}

void displayRecords()
{
    for_each(personalRecords.begin(), personalRecords.end(), printRecord);  // Using for_each to display all records.
}

void printRecord(const PersonalRecord &record)
{
    cout << "\n";
    cout << "\nName: " << record.name;  // Displaying the name of the record.
    cout << "\nDOB: " << record.dob;  // Displaying the date of birth of the record.
    cout << "\nTelephone Number: " << record.phoneNumber;  // Displaying the telephone number of the record.
}

void searchRecord()
{
    vector<PersonalRecord>::iterator iter;  // Iterator for searching a record.
    PersonalRecord searchRecord;  // Creating a PersonalRecord object for searching.
    cout << "\nEnter Name to search: ";
    cin >> searchRecord.name;  // Reading the name for searching.
    iter = find(personalRecords.begin(), personalRecords.end(), searchRecord);  // Using find to search for the record.
    if (iter == personalRecords.end())
    {
        cout << "\nRecord Not found.";  // Displaying a message if the record is not found.
    }
    else
    {
        cout << "\nRecord Found.";  // Displaying a message if the record is found.
    }
}

void sortRecords()
{
    sort(personalRecords.begin(), personalRecords.end());  // Sorting records by name.
    cout << "\nRecords Sorted by Name";
    displayRecords();  // Displaying the sorted records.
}
