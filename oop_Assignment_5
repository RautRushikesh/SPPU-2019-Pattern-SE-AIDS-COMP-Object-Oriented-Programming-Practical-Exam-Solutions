// Write a function template for selection sort that inputs, sorts and outputs an integer array and a
// float array.



#include <iostream>
using namespace std;

int n;          // Global variable to store the size of the array.
#define size 10 // Define the maximum size of the array using a macro.

template <class T>
void selection_sort(T A[size]) // Template function for performing selection sort on an array of type T.
{
    int i, j, min;
    T temp;

    // Selection sort algorithm
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
                min = j;
        }
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }

    // Display the sorted array using a while loop
    cout << "\nSorted array: [";
    int k = 0;
    while (k < n - 1)
    {
        cout << A[k] << ", ";
        k++;
    }
    if (n > 0)
    {
        cout << A[n - 1] << "]"; // Avoiding a trailing comma for the last element
    }
}

int main()
{
    int choice;
    int A[size];   // Array to store integer elements.
    float B[size]; // Array to store float elements.

    int i;

    cout << "------MENU------";
    do
    {
        cout << "\n 1. Integer : ";
        cout << "\n 2. Float : ";
        cout << "\n 3. Exit : " << endl;
        cout << "\n Enter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "\n Enter Total Number Of Integer Elements: ";
            cin >> n;
            cout << "\n Enter Integer Elements:\n";
            for (i = 0; i < n; i++)
            {
                cin >> A[i];
            }
            selection_sort(A); // Call the template function with integer array.

            break;
        }
        case 2:
        {
            cout << "\nEnter Total Number Of Float Elements:";
            cin >> n;
            cout << "\n Enter Float Elements:\n";
            for (i = 0; i < n; i++)
            {
                cin >> B[i];
            }
            selection_sort(B); // Call the template function with float array.

            break;
        }
        case 3:
        {
            cout << "\n ------Thank you for using this------" << endl;
            exit(0); // Exit the program.
        }

        default:
        {
            cout << "\n Invalid";
        }
        }
    } while (choice != 3); // Continue the loop until the user chooses to exit.

    return 0;
}
