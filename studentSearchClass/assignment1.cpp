#include <iostream>
#include <fstream>

using namespace std;

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

    Student s;

	ifs.open("students.bin");

	if ( !ifs.fail() )
	{
		cout << " Could not open the file \n";
		exit(0);
	}
	
	//for ( 10 times)
			ifs.read( (char *)&s, sizeof(s));

			cout << " ID " << s.id << "\t";
			cout << " name " << s.sname << "\t";
			cout << " average " << s.avg << "\n";



	// Search the student information by the Student ID

	// 10004

	// print  10004 	Elaine	90 	90

}
