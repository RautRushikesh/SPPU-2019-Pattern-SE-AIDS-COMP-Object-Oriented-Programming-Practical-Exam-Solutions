// Implement a class Complex which represents the Complex Number data type. Implement the
// following
// 1. Constructor (including a default constructor which creates the complex number 0+0i).
// 2. Overload operator+ to add two complex numbers.
// 3. Overload operator* to multiply two complex numbers.
// 4. Overload operators << and >> to print and read Complex Number

#include <iostream>
using namespace std;

// Define a class called 'complex' to represent complex numbers
class complex
{
private:
    float x;
    float y;

public:
    // Constructor with default values, initializes the complex number to 0+0i
    complex()
    {
        x = 0;
        y = 0;
    }
    complex operator+(complex); // Overload the + operator to add two complex numbers

    complex operator*(complex); // Overload the * operator to multiply two complex numbers

    // Overload the >> operator to read a complex number from input
    friend istream &operator>>(istream &input, complex &t)
    {
        cout << "Enter the real part: ";
        cin >> t.x;
        cout << "Enter the imaginary part: ";
        cin >> t.y;
    }

    // Overload the << operator to print a complex number to output
    friend ostream &operator<<(ostream &output, complex &t)
    {
        cout << t.x << "+" << t.y << "i\n";
    }
};

// Implementation of the + operator overload
complex complex::operator+(complex c)
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp);
}

// Implementation of the * operator overload
complex complex::operator*(complex c)
{
    complex temp2;
    temp2.x = (x * c.x) - (y * c.y);
    temp2.y = (y * c.x) + (x * c.y);
    return (temp2);
}

int main()
{
    complex c0, c1, c2, c3, c4;

    // Display the default constructor value
    cout << "Default constructor value: ";
    cout << c0;

    cout << "\nFOR 1ST COMPLEX NO-\n";
    cin >> c1; // Read the first complex number from user input
    cout << "\nThe 1st complex no is: " << c1;

    cout << "\nFOR 2ND COMPLEX NO-\n";
    cin >> c2; // Read the second complex number from user input
    cout << "\nThe 2nd complex no is: " << c2;

    // Perform addition and multiplication of complex numbers
    c3 = c1 + c2;
    c4 = c1 * c2;
    int ch;
    do
    {
        cout << "\n-------MENU-------" << endl;
        cout << "\n 1.Default constructor value";
        cout << "\n 2.Addition";
        cout << "\n 3.Multiplication";
        cout << "\n 4.Exit";
        cout << "\n Enter the choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            // Display the default constructor value
            cout << "\nDefault value is: ";
            cout << c0;
            break;
        case 2:
            // Display the result of addition
            cout << "\nThe Addition is: ";
            cout << c3;
            break;
        case 3:
            // Display the result of multiplication
            cout << "\nThe Multiplication is: ";
            cout << c4;
            break;
        case 4:
            cout << "\nThank You!!!";
            break;
        }
    } while (ch != 4);
}
