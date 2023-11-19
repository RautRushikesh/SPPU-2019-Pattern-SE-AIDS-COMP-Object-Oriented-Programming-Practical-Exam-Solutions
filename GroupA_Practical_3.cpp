// Imagine a publishing company which does marketing for book and audio cassette versions. Create a class publication that stores the title (a string) and price (type float) of publications. From this class derive two classes: book which adds a page count (type int) and tape which adds a playing time in minutes (type float).
// Write a program that instantiates the book and tape class, allows user to enter data and displays
// the data members. If an exception is caught, replace all the data member values with zero values.


#include<iostream>
#include<string.h>
using namespace std;

// Base class representing a publication
class publication
{
	private:
		string title;
		float price;
	public:
		// Function to add publication information
		void add()
		{
			cout<<"\n Enter publication Information: ";
			cout<<"\n Enter the Title of the Publication: ";
			cin>>title;	
			cout<<"\n Enter the price of Publication: ";
			cin>>price;
		}

		// Function to display publication information
		void display()
		{
			cout<<"\n Title of the Publication: "<<title;
			cout<<"\n Price of Publication: "<<price;
		}
};

// Derived class representing a book, inheriting from the publication class
class book : public publication
{
	private:
		int page_count;
	public:
		// Function to add book information
		void add_book()
		{
			try
			{
				// Call the base class function to add common information
				add();
				cout<<"\n Enter Page count of Book: ";
				cin>>page_count;
				if(page_count<=0)
					throw page_count; // Throw exception for invalid page count
			}
			catch(...)
			{
				cout<<"\n Invalid page count...";
				page_count=0; // Set page count to zero in case of exception
			}
		}

		// Function to display book information
		void display_book()
		{
			// Call the base class function to display common information
			display();
			cout<<"\n Page count: "<<page_count;
		}
};

// Derived class representing a tape, inheriting from the publication class
class tape : public publication
{
	private:
		float play_time;
	public:
		// Function to add tape information
		void add_tape()
		{
			try
			{
				// Call the base class function to add common information
				add();
				cout<<"\n Enter the Play time of the tape: ";
				cin>>play_time;
				if(play_time<=0)
					throw play_time; // Throw exception for invalid play time
			}
			catch(...)
			{
				cout<<"\n Invalid play time...";
				play_time=0; // Set play time to zero in case of exception
			}	
		}

		// Function to display tape information
		void display_tape()
		{
			// Call the base class function to display common information
			display();
			cout<<"\n Play time: "<<play_time<<"min";
		}
};

int main()
{
	book b1[10];
	tape t1[10];
	int ch=0, b_count=0, t_count=0;
	
	// Menu-driven program
	do
	{
		cout<<"\n----Publication Information System----";
		cout<<"\n-------------MENU-------------";
		cout<<"\n 1. Add information to Books";
		cout<<"\n 2. Add information to tape";
		cout<<"\n 3. Display information of Books";
		cout<<"\n 4. Display information of Tapes";
		cout<<"\n 5. Exit";
		cout<<"\n Enter your choice: ";
		cin>>ch;

		switch (ch)
		{
		case 1:
			b1[b_count].add_book();
			b_count++;
			break;
		case 2:
			t1[t_count].add_tape();
			t_count++;
			break;
		case 3:
			cout<<"\n ---Publication Information System (BOOKS)---";
			for(int j=0;j<b_count;j++)
			{
				b1[j].display_book();
			}
			break;
		case 4:
			cout<<"\n ---Publication Information System (TAPES)---";
			for(int j=0;j<t_count;j++)
			{
				t1[j].display_tape();
			}
			break;
		case 5:
			cout<<"\n THANK YOU !!!";
			exit(0); // Exit the program
		}
	} while (ch!=5);

	return 0;    
}
