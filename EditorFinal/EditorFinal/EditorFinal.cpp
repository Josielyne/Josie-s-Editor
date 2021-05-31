#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <conio.h>
using namespace std;
void menu();//function protoypes
void typeAndDelete(ofstream&);

class Node//creates doubly linked list
{
public:
	char c;//declares data and pointers in doubly linked list
	Node *next;
	Node* prev;
	Node()
	{
		c = '\0';//initializes data and pointers in doubly linked list
		next = prev = nullptr;
	}

};

void gotoxy(int x, int y)//allows program to move to specific spot on screen
{
	COORD pos = { x, y };

	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleCursorPosition(output, pos);


}
void title()//title screen picture using special characters
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 156);//changes color
	cout << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << endl;
	cout << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << endl;
	cout << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(219) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << endl;
	cout << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(177) << char(219) << char(219) << char(219) << char(219) << endl;
	cout << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(177) << char(177) << char(219) << char(219) << char(219) << char(177) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(219) << char(177) << char(219) << char(219) << char(219) << char(219) << char(219) << char(177) << char(219) << char(177) << char(177) << char(219) << char(177) << char(219) << char(219) << char(177) << char(219) << endl;
	cout << char(177) << char(177) << char(219) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(219) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(219) << char(219) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(219) << char(177) << char(219) << char(177) << char(177) << char(177) << endl;
	cout << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(219) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(219) << char(177) << char(177) << char(177) << char(219) << char(219) << char(219) << char(219) << char(177) << char(219) << char(177) << char(177) << char(177) << endl;
	cout << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << endl;
	cout << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << char(177) << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
}
void Exit(char ans)//function that allows user to exit application
{

	if (ans == 'Y' || ans == 'y')//checks user answer
	{
		//if yes then thanks the user
		cout << "Thank you for using Josie's Editor ^.^!!!" << endl;
	}
	if (ans == 'N' || ans == 'n')//if no then it clears the screen and goes back to title screen
	{
		system("cls");
		title();
		menu();

	}
}
string nameFile = " ";//initializes global variables for file path of new file
string cUserFolder = " ";
string cPath = "c:/Users/";
void createFile()//function that allows the user to create a new txt file
{
	ofstream newFile_;//creates new file to write to
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);//changes color 
	cout << "To save and exit, press the esc button" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "What would you like to name your file?" << endl;//asks the user for file information
	cin >> nameFile;
	nameFile += ".txt";
	cout << "Enter the name of your user folder" << endl;
	cin >> cUserFolder;
	cPath += cUserFolder + "/" + "Desktop" + "/" + nameFile;//saves file to Desktop
	cout << "-----------------------------------" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);//changes color
	cout << "You are currently editing " << nameFile << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);

	
	Node* arrRow[10];//creates array that will point to linked lists in each row
	int x = 0;//initiate cordinates
	int y = 0;
	Node *curr = nullptr;//initiate linked list pointers
	Node *head = nullptr;
	char letter = ' ';//initiate user input

	for (int i = 0; i < 10; i++)//initiate array
	{
		arrRow[i] = nullptr;
	}

	while (letter != 27)//if user doesn't press escape, the program does the following actions
	{
		gotoxy(x, y);//moves to cordinate (0,0)
		letter = _getch();//gets keyboard input

		if (letter == -32)//checks if keyboard input is a special character
		{
			letter = _getch();
			if (letter == 75)//if user presses the left arrow key ,the cursor moves left in line
			{
				if (curr != head)//moves left only if current isn't pointing to the first node in the list
				{
					x--;//updates coordinates
					curr = curr->prev;
				}
				else if (x != 0)//moves cursor
				{

					x -= 1;//updates coordinates

				}
			}
			else if (letter == 72)//if user presses the up arrow key ,the cursor moves up 
			{
				
				if (curr->next != nullptr || curr != head || curr->prev != nullptr)
				{
					
					y--;//updates coordinates
					head = arrRow[y];
					curr = arrRow[y];

				}
				else if (y != 0)
				{
					y--;//updates coordinates

				}

			}
			else if (letter == 80)//if user presses the down arrow key ,the cursor moves down 
			{
				if (y = 0 || curr->next != nullptr || curr != head)
				{
					
					y++;//updates coordinates
					head = arrRow[y];
					curr = arrRow[y];
					

				}

			}

			else if (letter == 77)//if user presses the right arrow key ,the cursor moves right in line
			{

				if (curr->next != nullptr)//moves right only if the next pointer in current isn't pointing to the last node in the list
				{
					x++;//updates coordinates

					curr = curr->next;

				}

				else
				{
				//do nothing

				}
			}

		}
		else if (letter == 13)//if user presses the enter key, a new row is started with a new linked list
		{

			x = 0;//updates coordinates and moves cursor
			y++;

			head = nullptr;//pointers point to nothing in order to start new linked list
			curr = nullptr;


		}

		else if (letter == 8)//if user presses backspace on the keyboard, the following actions are performed
		{
			if (head != curr && curr->next == nullptr)//deletes letters at end of list only if current pointer is the last node and not the first
			{
				x--;//updates coordinates and moves cursor
				curr = curr->prev;//current now points to the second to last node
				delete(curr->next);//deletes the last node
				curr->next = nullptr;//the second to last node now becomes the last node. There is no next node so the next pointer points to nothing

			}
			else if (curr == head)//delete the last letter of list
			{

				curr = nullptr;//current pointer points to nothing
				head = curr;//the head becomes the current pointer and points to nothing

				if (x != 0)//updates coordinates and moves cursor if the cursor is not at x = 0
				{
					x -= 1;
				}
				arrRow[y]->c = '\0';//changes the first character of the list to an empty space to make sure everything is deleted

			}
			else if (curr->next != nullptr)//delete letters in middle
			{



				Node*x = new Node;//temporary node is created
				x->next = nullptr;//temporary node is initialized
				x->prev = nullptr;
				x = curr->next;//temporary node links to the next node from current
				curr->prev->next = x;//previous node from current links to temporary node
				x->prev = curr->prev;//temporary previous pointer links to previous from current
									 //links of current are broken
				delete(curr);//delete current
				curr = x;//makes temporary node current



			}
			else
			{
				//do nothing
			}
		}
		else//insert characters to list
		{

			cout << letter;//prints user input
			x++;//updates coordinates

			if (head == nullptr)//creates doubly linked list
			{
				Node *x = new Node();//creates node that will be start of list
				x->c = letter;//initializes with user input
				head = x;//new node is head
				curr = head;//current is at the beginning
				arrRow[y] = head;//array points to newly created linked list
			}
			else
			{
				if (curr->next == nullptr)//insert characters at end
				{
					Node *x = new Node();//creates node to insert at end of list
					x->c = letter;//initializes with user input
					curr->next = x;//the last node points to the new node as the next node
					x->prev = curr;//the new node points to the last node as the previous node
					curr = curr->next;//moves current to the new node, which is now the last node
					x++;//updates coordinates and moves cursor
				}
				else if (x == 0)//insert characters at beginning
				{

					Node *x = new Node();//creates node to insert at beginning of list
					x->c = letter;//initializes with user input

					x->next = head;//new node points to head as the next node
					head->prev = x;//head points to new node as the previous node
					x->prev = nullptr;//since x is the new node inserted at the beginning, there is nothing before it so previous doesn't point to anything
					head = x;//head is now the new node
					curr = head;//current is at the beginning 

					x++;//updates coordinated and moves cursor


				}
				else  //insert characters in middle of list
				{
					Node *x = new Node();//creates node to insert in middle of list
					x->c = letter;//initializes with user input
					x->next = curr->next;//new node points to next node of current as next node
					curr->next->prev = x;//next node of current points to new node as previous node
					curr->next = x;//current points to new node as next pointer
					x->prev = curr;//new node points to current as previous node
					curr = x;//current is now the new node
					x++;//updates coordinated and moves cursor
				}


			}
		}
		system("cls");//clears the screen


		for (int i = 0; i < 10; i++)//goes through array and prints the linked lists it points to in each index
		{
			if (arrRow[i] != nullptr)//if array has data, it prints
			{
				Node *p;
				p = arrRow[i];
				while (p != nullptr)//print linked list
				{
					cout << p->c;
					p = p->next;//moves to next node in list
				}
				cout << endl;//new row
			}
		}
		gotoxy(x, y);//move to updated coordinates

	}
	char answer = ' ';//initializes user answer
	if (letter == 27)//if escape is pressed, the following actions are performed
	{
		cout << endl << "Would you like to save your changes?(Y/N)" << endl;//program asks user if they would like to save their work
		cin >> answer;

		if (answer == 'Y' || answer == 'y')//accepts lowercase or uppercase user answer
		{
			//if user says yes, new file is opened with established path
			newFile_.open(cPath);

			for (int i = 0; i < 10; i++)//the data that was typed into linked list and stored in array is written into the newly created file
			{
				if (arrRow[i] != nullptr)//checks if array has data
				{
					Node *r;
					r = arrRow[i];
					while (r != nullptr)
					{
						newFile_ << r->c;//writes to file

						r = r->next;//moves to next node in list
					}
					newFile_ << endl;//new row
				}
			}

			newFile_.close();//closes newly created file

			char answer2;
			cout << "Do you want to return to menu?(Y/N)" << endl;
			cin >> answer2;
			
			if (answer2 == 'Y' || answer2 == 'y')
			{
				system("cls");
				title();
				menu();
			}
			
			if (answer2 == 'N' || 'n')
			{
				return;
			}

		}
		if (answer == 'N' || 'n')
		{

			//if user says no, data isn't written into the newly created file and program ends
			cout << "All done!" << endl;
			char answer2;
			cout << "Do you want to return to menu?(Y/N)" << endl;
			cin >> answer2;

			if (answer2 == 'Y' || answer2 == 'y')
			{
				system("cls");
				title();
				menu();
			}

			if (answer2 == 'N' || 'n')
			{
				return;
			}
		}

	}


}
string fileName = " ";//initializes global variables for reading exisitng file path
string folderFile = " ";
string readPath = "c:/Users/";
void readFile()
{

	ifstream readFile_;//creates file program reads from
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);//changes color 
	cout << "To save and exit, press the esc button" << endl;
	cout << "For easier access, please make sure your file is on Desktop" << endl;//tells user to have file on Desktop
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);//changes color 
	cout << "Enter the name of the file you would like to read" << endl;//asks user for file information
	cin >> fileName;
	fileName += ".txt";

	cout << "Enter the name of your user folder" << endl;
	cin >> folderFile;
	readPath += folderFile + "/" + "Desktop" + "/" + fileName;//creates file path 

	readFile_.open(readPath);//opens desired file

	while (!readFile_)//if file doesn't exist, the program has the user try again
	{
		cout << "This file does not exist. Please try again." << endl;
		cout << "Enter the name of the file you would like to read" << endl;
		cin >> fileName;
		fileName += ".txt";
		cout << "Enter the name of your user folder" << endl;
		cin >> folderFile;
		readPath = "c:/Users/";
		readPath += folderFile + "/" + "Desktop" + "/" + fileName;
		readFile_.open(readPath);

	}


	string readLine = " ";//initialize variable to read from file
	cout << endl;
	cout << "========================================================================================================================" << endl;
	while (getline(readFile_, readLine))//as long as there's information to read, it is printed on screen
	{
		cout << readLine << endl;
	}


	readFile_.close();//closes file
	gotoxy(0, 28);
	cout << "========================================================================================================================" << endl;


	char answer4;
	cout << "Do you want to return to menu?(Y/N)" << endl;
	cin >> answer4;

	if (answer4 == 'Y' || answer4 == 'y')
	{
		system("cls");
		title();
		menu();
	}

	if (answer4 == 'N' || 'n')
	{
		return;
	}


}
string existingName;//initializes global variables for file path of existing file
string UserFolder;
string path = "c:/Users/";
void editExistingFile()//edit file function
{
	ifstream existingFileOp_;//creates file to read from
	ofstream existFileWr_;//creates file to write to
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);//changes color 
	cout << "For easier access, please make sure your file is on Desktop" << endl;//tells user to have file on Desktop
	cout << "To save and exit, press the esc button" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "Enter the name of the file you would like to edit" << endl;//asks user for file information
	cin >> existingName;
	existingName += ".txt";
	cout << "Enter the name of your user folder" << endl;
	cin >> UserFolder;
	path += UserFolder + "/" + "Desktop" + "/" + existingName;//creates file path 
	existingFileOp_.open(path);//open file to check if it exists

	while (!existingFileOp_)//checks if desired file exists. If not, it has the user try again
	{
		cout << "This file does not exist. Please try again." << endl;
		cout << "Enter the name of the file you would like to edit" << endl;
		cin >> existingName;
		existingName += ".txt";
		cout << "Enter the name of your user folder" << endl;
		cin >> UserFolder;
		path = "c:/Users/";
		path += UserFolder + "/" + "Desktop" + "/" + existingName;
		existingFileOp_.open(path);//tries to open after user retries

	}
	existingFileOp_.close();//closes file
	cout << "-----------------------------------" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "You are currently editing " << existingName << endl;//lets user know what file they're editing
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	typeAndDelete(existFileWr_);//calls type and delete function and passes desired file

	char answer3;
	cout << "Do you want to return to menu?(Y/N)" << endl;
	cin >> answer3;

	if (answer3 == 'Y' || answer3 == 'y')
	{
		system("cls");
		title();
		menu();
	}

	if (answer3 == 'N' || 'n')
	{
		return;
	}



}

void typeAndDelete(ofstream& existFileWr_)
{
	
	Node* arrRow[10];//creates array that will point to linked lists in each row
	int x = 0;//initiate cordinates
	int y = 0;
	Node *curr = nullptr;//initiate linked list pointers
	Node *head = nullptr;
	char letter = ' ';//initiate user input

	for (int i = 0; i < 10; i++)//initiate array
	{
		arrRow[i] = nullptr;
	}

	while (letter != 27)//if user doesn't press escape, the program does the following actions
	{
		gotoxy(x, y);//moves to cordinate (0,0)
		letter = _getch();//gets keyboard input

		if (letter == -32)//checks if keyboard input is a special character
		{
			letter = _getch();
			if (letter == 75)//if user presses the left arrow key ,the cursor moves left in line
			{
				if (curr != head)//moves left only if current isn't pointing to the first node in the list
				{
					x--;//updates coordinates
					curr = curr->prev;
				}
				else if (x != 0)//moves cursor
				{

				x -= 1;//updates coordinates

				}
			}
			else if (letter == 72)//if user presses the up arrow key ,the cursor moves up 
			{

				if (curr->next != nullptr || curr != head || curr->prev!=nullptr)
				{
					
					y--;//updates coordinates
					head = arrRow[y];
					curr = arrRow[y];

				}
				else if(y!=0)
				{
					y--;//updates coordinates
					
				}

			}
			else if (letter == 80)//if user presses the down arrow key ,the cursor moves down 
			{
				if (y!=0 || curr->next != nullptr || curr != head)
				{

					y++;//updates coordinates
					head = arrRow[y];
					curr = arrRow[y];


				}
				

			}

			else if (letter == 77)//if user presses the right arrow key ,the cursor moves right in line
			{

				if (curr->next != nullptr)//moves right only if the next pointer in current isn't pointing to the last node in the list
				{
					x++;//updates coordinates

					curr = curr->next;

				}

				/*else
				{
				nothing

				}*/
			}

		}
		else if (letter == 13)//if user presses the enter key, a new row is started with a new linked list
		{

			x = 0;//updates coordinates and moves cursor
			y++;

			head = nullptr;//pointers point to nothing in order to start new linked list
			curr = nullptr;


		}

	

		else if (letter == 8)//if user presses backspace on the keyboard, the following actions are performed
		{
			if (head != curr && curr->next == nullptr)//deletes letters at end of list only if current pointer is the last node and not the first
			{
				x--;//updates coordinates and moves cursor
				curr = curr->prev;//current now points to the second to last node
				delete(curr->next);//deletes the last node
				curr->next = nullptr;//the second to last node now becomes the last node. There is no next node so the next pointer points to nothing

			}
			else if (curr == head)//delete the last letter of list
			{

				curr = nullptr;//current pointer points to nothing
				head = curr;//the head becomes the current pointer and points to nothing

				if (x != 0)//updates coordinates and moves cursor if the cursor is not at x = 0
				{
					x -= 1;
				}
				arrRow[y]->c = '\0';//changes the first character of the list to an empty space to make sure everything is deleted

			}
			else if (curr->next != nullptr)//delete letters in middle
			{



				Node*x = new Node;//temporary node is created
				x->next = nullptr;//temporary node is initialized
				x->prev = nullptr;
				x = curr->next;//temporary node links to the next node from current
				curr->prev->next = x;//previous node from current links to temporary node
				x->prev = curr->prev;//temporary previous pointer links to previous from current
				//links of current are broken
				delete(curr);//delete current
				curr = x;//makes temporary node current



			}
			else
			{
				//do nothing
			}
		}
		else//insert characters to list
		{

			cout << letter;//prints user input
			x++;//updates coordinates

			if (head == nullptr)//creates doubly linked list
			{
				Node *x = new Node();//creates node that will be start of list
				x->c = letter;//initializes with user input
				head = x;//new node is head
				curr = head;//current is at the beginning
				arrRow[y] = head;//array points to newly created linked list
			}
			else
			{
				if (curr->next == nullptr)//insert characters at end
				{
					Node *x = new Node();//creates node to insert at end of list
					x->c = letter;//initializes with user input
					curr->next = x;//the last node points to the new node as the next node
					x->prev = curr;//the new node points to the last node as the previous node
					curr = curr->next;//moves current to the new node, which is now the last node
					x++;//updates coordinates and moves cursor
				}
				else if (x == 0)//insert characters at beginning
				{

					Node *x = new Node();//creates node to insert at beginning of list
					x->c = letter;//initializes with user input

					x->next = head;//new node points to head as the next node
					head->prev = x;//head points to new node as the previous node
					x->prev = nullptr;//since x is the new node inserted at the beginning, there is nothing before it so previous doesn't point to anything
					head = x;//head is now the new node
					curr = head;//current is at the beginning 

					x++;//updates coordinated and moves cursor


				}
				else  //insert characters in middle of list
				{
					Node *x = new Node();//creates node to insert in middle of list
					x->c = letter;//initializes with user input
					x->next = curr->next;//new node points to next node of current as next node
					curr->next->prev = x;//next node of current points to new node as previous node
					curr->next = x;//current points to new node as next pointer
					x->prev = curr;//new node points to current as previous node
					curr = x;//current is now the new node
					x++;//updates coordinated and moves cursor
				}


			}
		}
		system("cls");//clears the screen
		
		for (int i = 0; i < 10; i++)//goes through array and prints the linked lists it points to in each index
		{
			if (arrRow[i] != nullptr)//if array has data, it prints
			{
				Node *p;
				p = arrRow[i];
				while (p != nullptr)//print linked list
				{
					cout << p->c;
					p = p->next;//moves to next node in list
				}
				cout << endl;//new row
			}
		}
		gotoxy(x, y);//move to updated coordinates

	}

	

	char answer = ' '; //initializes user answer
	if (letter == 27)//if escape is pressed, the following actions are performed
	{
		cout << endl << "Would you like to save your changes?(Y/N)" << endl;//program asks user if they would like to save their work
		cin >> answer;

		if (answer == 'Y' || answer == 'y')//accepts lowercase or uppercase user answer
		{
			//if user says yes, existing file is opened with established path and allows program to write to the end of it using append
			existFileWr_.open(path, ios::app);

				for (int i = 0; i < 10; i++)//the data that was typed into linked list and stored in array is written into the exisiting file
				{
					if (arrRow[i] != nullptr)//checks if array has data
					{
						Node *r;
						r = arrRow[i];
						while (r != nullptr)//print linked list
						{
							existFileWr_ << r->c;//writes to file
							
							r = r->next;//moves to next node in list
						}
						existFileWr_ << endl;//new row
					}
				}

			existFileWr_.close();//closes existing file
		}
		if (answer == 'N' || 'n')
		{
			//if user says no, data isn't written into the newly created file and program ends

			cout << "All done!" << endl;
			char answer3;
			cout << "Do you want to return to menu?(Y/N)" << endl;
			cin >> answer3;

			if (answer3 == 'Y' || answer3 == 'y')
			{
				system("cls");
				title();
				menu();
			}

			if (answer3 == 'N' || 'n')
			{
				return;
			}
		}

	}

}

void menu()//displays and sets up menu
{

	cout << endl << "Welcome to Josie's Editor! What would you like to do?" << endl;//asks user what they want to do
	cout << "-----------------------------------------------------" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);//displays options in color
	gotoxy(0, 13);//coordinates set for each option
	cout << "Create New File";
	gotoxy(19, 13);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "<=";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	gotoxy(0, 14);
	cout << "Read Existing File";
	gotoxy(25, 13);
	cout << "Edit Existing File";
	gotoxy(25, 14);
	cout << "Exit";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << endl << "-----------------------------------------------------" << endl;

	int c = 0;//initiate variables
	int y = 13;//initialize coordinates
	int x = 19;
	int a = 0;
	do//do while loop to traverse menu until user picks an option
	{

		a = 1;
		switch ((c = _getch()))//switch statement to maneuver menu options
		{
		case 72://if the up arrow key is pressed and the arrow on screen is currently on the bottom left, it moves up
			if (x == 19 && y == 14)
			{
				gotoxy(19, y);
				cout << "   ";
				y--;//coordinates updated
				gotoxy(19, y);
				cout << " <=";

			}
			if (x == 43 && y == 14)//if the up arrow key is pressed and the arrow on screen is currently on the bottom right, it moves up
			{
				gotoxy(43, y);
				cout << "   ";
				y--;//coordinates updated
				gotoxy(43, y);
				cout << " <=";
			}
			break;
		case 80:
			if (x == 19 && y == 13)//if the down arrow key is pressed and the arrow on screen is currently on the top left, it moves down
			{
				gotoxy(19, y);
				cout << "   ";
				y++;//coordinates updated
				gotoxy(19, y);
				cout << " <=";
			}
			if (x == 43 && y == 13)//if the down arrow key is pressed and the arrow on screen is currently on the top right, it moves down
			{
				gotoxy(43, y);
				cout << "   ";
				y++;//coordinates updated
				gotoxy(43, y);
				cout << " <=";
			}

			break;
		case 75:
			if (x == 43 && y == 13)//if the left arrow key is pressed and the arrow on screen is currently on the top right, it moves left
			{
				gotoxy(x, 13);
				cout << "   ";
				x = x - 24;//coordinates updated
				gotoxy(x, 13);
				cout << " <=";
			}
			if (x == 43 && y == 14)//if the left arrow key is pressed and the arrow on screen is currently on the bottom right, it moves left
			{
				gotoxy(x, 14);
				cout << "   ";
				x = x - 24;//coordinates updated
				gotoxy(x, 14);
				cout << " <=";
			}
			break;
		case 77:
			if (x == 19 && y == 13)//if the right arrow key is pressed and the arrow on screen is currently on the top left, it moves right
			{
				gotoxy(x, 13);
				cout << "   ";
				x = x + 24;//coordinates updated
				gotoxy(x, 13);
				cout << " <=";
			}
			if (x == 19 && y == 14)//if the right arrow key is pressed and the arrow on screen is currently on the bottom left, it moves right
			{
				gotoxy(x, 14);
				cout << "   ";
				x = x + 24;//coordinates updated
				gotoxy(x, 14);
				cout << " <=";
			}

			break;
		case 13://if user presses enter on an option

			if (x == 19 && y == 13)//top left option
			{

				system("CLS");//clears screen
				createFile(); //calls function to create new file

			}
			if (x == 19 && y == 14)//bottom left option
			{
				system("CLS");//clears screen
				readFile();//calls function to read an existing file

			}
			if (x == 43 && y == 13)//top right option
			{
				system("CLS");//clears screen
				editExistingFile();//calls function to write to an existing file

			}
			if (x == 43 && y == 14)//bottom right option
			{
				gotoxy(0, 17);//move cursor to coordinates
				char ans;
				cout << "Are you sure you want to exit the application? (Y/N)" << endl;//asks user to confirm leaving the application
				cin >> ans;
				Exit(ans);//calls function to exit the application


			}
			a = 2;//sets a to 2 in order to break out of the loop
			break;
		}
	} while (a != 2);//if a = 2, break out of loop
}
int main()
{

	title();//calls title function
	menu();//calls menu function

	return 0;

}