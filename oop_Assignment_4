// Write a C++ program that creates an output file, writes information to it, closes the file, open it
// again as an input file and read the information from the file.


#include<iostream>     // Including the necessary header files for input/output operations.
#include<fstream>      // Including the necessary header files for file handling.
using namespace std;   // Using the standard namespace.

class student          // Definition of the student class.
{
    private:
        string name;    // Private data member to store the name of the student.
        int roll_no;    // Private data member to store the roll number of the student.

    public:
        void add_info() // Member function to add information about a student.
        {
            fstream fs; // Filestream object for file handling.
            fs.open("C:\\Users\\Rushikesh\\Desktop\\one.txt",ios::app); // Opening the file in append mode.

            if(!fs)
                cout<<"\n File creation failed...."; // Displaying an error message if file creation fails.
            else
            {
                cout<<"\n New file created....";
                cout<<"\n Enter Name: ";
                cin>>name;          // Reading and storing the name.
                cout<<"\n Enter the Roll NO: ";
                cin>>roll_no;       // Reading and storing the roll number.
                fs<<name<<" ";      // Writing name to the file.
                fs<<roll_no<<"\n";  // Writing roll number to the file.
            }
        }

        void display_info() // Member function to display information about all students.
        {
            fstream fs; // Filestream object for file handling.
            fs.open("C:\\Users\\Rushikesh\\Desktop\\one.txt",ios::in); // Opening the file in input mode.

            if(!fs)
                cout<<"\n No such file..."; // Displaying an error message if the file does not exist.
            else
            {
                while (!fs.eof()) // Looping until the end of the file is reached.
		        {
                    fs >> name;   // Reading name from the file.
		            fs >> roll_no; // Reading roll number from the file.
		            if(!fs.eof())  // Checking if the end of file is not reached.
                    {
                        cout << name << " ";    // Displaying the name.
		            	cout << roll_no;         // Displaying the roll number.
		            	cout <<  "\n";           // Displaying a new line.
                    }  
		            	   
                }
            }
        }
};

int main()
{
    int ch;            // Variable to store the user's choice.
    student s;         // Creating an object of the student class.
    fstream fs;        // Filestream object for file handling.

    do
    {
        cout<<"\n -Student Info System-";
        cout<<"\n ------MENU------";
        cout<<"\n 1. Add Information";
        cout<<"\n 2. Display Information";
        cout<<"\n 3. Exit";
        cout<<"\n Enter your choice: ";
        cin>>ch;          // Reading the user's choice.

        switch (ch)
        {
            case 1:
                s.add_info(); // Calling the add_info() function for adding information.
                break;
            case 2:
                s.display_info(); // Calling the display_info() function for displaying information.
                break;
            case 3:
                cout<<"\n Program Finished"; // Displaying a message and exiting the program.
                exit(0);
        }
    } while (ch!=3); // Looping until the user chooses to exit.

    return 0;    
}
