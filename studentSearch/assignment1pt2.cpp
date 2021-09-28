#include <iostream>
#include <fstream>

using namespace std;

void display (int choice);

struct Student {
  int id;
  char sname[20];
  double score[2];
  double sum;
  double avg;
};

int main()
{
    ifstream ifs;
    ofstream ofs;
    Student clas[10];

	bool running = true;
	int choice = 0, studentID = 0;

	//sets up the program to initialze the class of students
    ifs.open("students.txt");
    ofs.open("students.bin");

	cout << "Files opened" << endl;

/*	if ( !ifs.fail() )
	{
		cout << " Could not open the file \n";
		exit(0);
	}*/

	// for ( 10 times)
	for (int rep = 0; rep < 10; rep++) 
	{
		ifs >> clas[rep].id ;
		ifs >> clas[rep].sname ;
		ifs >> clas[rep].score[0] ;
		ifs >> clas[rep].score[1] ;
		clas[rep].sum = clas[rep].score[0] + clas[rep].score[1];
		clas[rep].avg = clas[rep].sum / 2.0;

		ofs.write( (char *)&clas[rep], sizeof(clas[rep]) );
	}

	cout << "Set up project complete" << endl;

	choice = 0;

	while (running) {
		cout << "loop started\n\n" << endl;

		display(choice);
		cin >> choice;

		if (choice == 1) {
			cout << "what is the student ID you want to search up?" << endl;
			cin >> studentID;

			for (int rep = 0; rep < 10; rep++) 
			{
				if (studentID == clas[rep].id) 
				{
					cout << " ID : " << clas[rep].id << endl;
					cout << " Name : " << clas[rep].sname << endl;
					cout << " Score 1 : " << clas[rep].score[0] << endl;
					cout << " Score 2 : " << clas[rep].score[1] << endl;
					cout << " Sum  : " << clas[rep].sum << endl;
					cout << " Avg  : " << clas[rep].avg << endl;	
					cout << endl;
				}
			}
			
			cout << "would you like to recall another student?" << endl;
			cout << "1. yes" << endl;
			cout << "2. no" << endl;
			cin >> choice;
			if (choice == 2) {
				choice = 0;
			}
		}
		else if (choice == 2) {
			for (int rep = 0; rep < 10; rep++) 
			{
				cout << " ID : " << clas[rep].id << endl;
				cout << " Name : " << clas[rep].sname << endl;
				cout << " Score 1 : " << clas[rep].score[0] << endl;
				cout << " Score 2 : " << clas[rep].score[1] << endl;
				cout << " Sum  : " << clas[rep].sum << endl;
				cout << " Avg  : " << clas[rep].avg << endl;	
				cout << endl;
			}
		}
		else {
			running = false;
		}
}
}

void display (int choice) 
{
	if (choice == 0) {
		cout << "Hi and welcome to student search!" << endl;
		cout << "   Select what you want to do.   " << endl;
		cout << "\n";
		cout << "1. look up a student ID" << endl;
		cout << "2. Print all student info" << endl;
		cout << "3. Exit program" << endl;
	}
}

/*

cout << " ID : " << clas[rep].id << endl;
cout << " Name : " << clas[rep].sname << endl;
cout << " Score 1 : " << clas[rep].score[0] << endl;
cout << " Score 2 : " << clas[rep].score[1] << endl;
cout << " Sum  : " << clas[rep].sum << endl;
cout << " Avg  : " << clas[rep].avg << endl;	
cout << endl;


*/