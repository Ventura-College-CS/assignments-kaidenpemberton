#include <iostream>
#include <fstream>

using namespace std;

const int LEN_NAME = 20;
const int NUM_SCORES = 3;

struct Student {
  int id;
  char sname[LEN_NAME];
  double score[NUM_SCORES];
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
        for (int rep1 = 0; rep1 < 3; rep1++) 
        {
            		ifs >> clas[rep].score[rep1] ;
        }

		ofs.write( (char *)&clas[rep], sizeof(clas[rep]) );
	}


	cout << "Set up project complete" << endl;


}


/*

for (int rep = 0; rep < 10; rep++) 
			{
				cout << " ID : " << clas[rep].id << endl;
				cout << " Name : " << clas[rep].sname << endl;
				cout << " Score 1 : " << clas[rep].score[0] << endl;
				cout << " Score 2 : " << clas[rep].score[1] << endl;
				cout << " Score 2 : " << clas[rep].score[2] << endl;
				cout << endl;
			}

            		clas[rep].sum = clas[rep].score[0] + clas[rep].score[1];
		clas[rep].avg = clas[rep].sum / 2.0;

        */