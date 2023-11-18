// Develop a program in C++ to create a database of student’s information system containing the following information: Name, Roll number, Class, Division, Date of Birth, Blood group, Contact address, Telephone number, Driving license no. and other. Construct the database with suitable member functions. Make use of constructor, default constructor, copy constructor,
// destructor, static member functions, friend class, this pointer, inline code and dynamic memory allocation operators-new and delete as well as exception handling.



#include <iostream>
#include <cstring>

using namespace std;

class person {
private:
    char *name, *blood, *address;
    int dob;
    long int insurance, tel, license;
    float height, weight;
    static int count; // Static variable to count instances

public:
    // Default constructor
    person() {
        count++;
        cout << "-----------------default information------------";
        // Initialize default values
        name = new char[13];
        strcpy(name, "default name");
        blood = new char[3];
        strcpy(blood, "O+");
        address = new char[20];
        strcpy(address, "Nasik");
        insurance = 542451;
        tel = +45876112;
        license = 19122013;
        height = 5.5;
        weight = 100;
        dob = 1998;
        display(); // Display default information
    }

    // Parameterized constructor
    person(char n[], char b[], int yy, char add[], float w,
           long int in, long int tn, long int ln, float h) {
        count++;
        int len;
        // Allocate memory and set values based on parameters
        len = strlen(n);
        name = new char[len + 1];
        strcpy(name, n);

        len = strlen(b);
        blood = new char[len + 1];
        strcpy(blood, b);

        len = strlen(add);
        address = new char[len + 1];
        strcpy(address, add);
        // Set other member variables
        dob = yy;
        insurance = in;
        tel = tn;
        license = ln;
        height = h;
        weight = w;
    }

    // Display function declaration
    void display();

    // Static member function to display the count of instances
    static int displaycount() {
        cout << "\n NUMBER OF ENTRIES ARE:" << count << endl;
    }

    // Public member functions to delete dynamic memory
    void deleteName() { delete[] name; }
    void deleteBlood() { delete[] blood; }
    void deleteAddress() { delete[] address; }

    // Destructor
    ~person() {
        cout << "\n destructor called...";
    }
};

// Initialize static variable count
int person::count = 0;

// Definition of display function
void person::display() {
    cout << "\n PERSON NAME: " << name;
    cout << "\n BLOOD GROUP: " << blood;
    cout << "\n DATE OF BIRTH: " << dob;
    cout << "\n CONTACT ADDRESS: " << address;
    cout << "\n INSURANCE NUMBER: " << insurance;
    cout << "\n TELEPHONE NUMBER: " << tel;
    cout << "\n LICENSE NUMBER: " << license;
    cout << "\n HEIGHT: " << height;
    cout << "\n WEIGHT: " << weight << endl;
}

// Main function
int main() {
    int ch;
    person *p[20];
    char pname[100], pblood[100], paddress[100];
    long int pinsurance, ptel, plicense;
    float pheight, pweight;
    int count = 0, dd;

    do {
        // Display menu options
        cout << "\n --------MENU--------" << endl;
        cout << "\n 1. DEFAULT CONSTRUCTOR";
        cout << "\n 2. PARAMETERIZED CONSTRUCTOR";
        cout << "\n 3. NUMBER OF ENTRIES";
        cout << "\n 4. DISPLAY";
        cout << "\n 5. EXIT";
        cout << "\n ENTER THE CHOICE:";
        cin >> ch;

        switch (ch) {
        case 1:
            // Create an instance using the default constructor
            p[count] = new person();
            count++;
            break;
        case 2:
            // Create an instance using the parameterized constructor
            cout << "\n ENTER THE PERSON NAME:";
            cin >> pname;
            cout << "\n ENTER THE PERSON BLOOD GROUP:";
            cin >> pblood;
            cout << "\n ENTER DATE OF BIRTH:";
            cin >> dd;
            cout << "\n ENTER THE PERSON CONTACT ADDRESS:";
            cin >> paddress;
            cout << "\n ENTER THE PERSON INSURANCE NUMBER:";
            cin >> pinsurance;
            cout << "\n ENTER THE PERSON TELEPHONE NUMBER:";
            cin >> ptel;
            cout << "\n ENTER THE PERSON LICENSE NUMBER:";
            cin >> plicense;
            cout << "\n ENTER THE PERSON HEIGHT:";
            cin >> pheight;
            cout << "\n ENTER THE PERSON WEIGHT:";
            cin >> pweight;

            // Create an instance with user-provided values
            p[count] = new person(pname, pblood, dd, paddress, pinsurance, ptel, plicense, pheight, pweight);
            count++;
            break;
        case 3:
            // Display the count of entries
            person::displaycount();
            break;
        case 4:
            // Display information for all instances
            for (int i = 0; i < count; i++) {
                p[i]->display();
            }
            break;
        case 5:
            // Delete dynamic memory and exit
            for (int i = 0; i < count; i++) {
                p[i]->deleteName();
                p[i]->deleteBlood();
                p[i]->deleteAddress();
                delete p[i];
            }
            return 0;
        }
    } while (ch != 5);

    return 0;
}
