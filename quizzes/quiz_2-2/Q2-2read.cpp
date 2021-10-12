#include <iostream>
#include <fstream>

using namespace std;

const int LEN_NAME = 20;
const int NUM_SCORES = 3;

struct Student {
  int id;
  char sname[LEN_NAME];
  double score[NUM_SCORES];
  double sum;
  double avg;
};

void fillSeats (Student *ptr);
void display (Student *ptr);

int main()
{

    Student *clas[10];

	//sets up the program to initialze the class of students
    
    fillSeats(*clas);
    display(*clas);

	cout << "Set up project complete" << endl;
}

void display (Student *ptr)
{
    for (int rep = 0; rep < 10; rep++) 
    {
        if (ptr[rep].avg > 85)
        {
            cout << " ID : " << ptr[rep].id << endl;
            cout << " Name : " << ptr[rep].sname << endl;
            cout << " Score 1 : " << ptr[rep].score[0] << endl;
            cout << " Score 2 : " << ptr[rep].score[1] << endl;
            cout << " Score 2 : " << ptr[rep].score[2] << endl;
            cout << endl;
        }
    }

}


void fillSeats (Student *ptr) 
{
    ifstream inBinary;
    ifstream inText;

    inBinary.open("students.bin", ios::binary | ios::in);
    inText.open("students.txt");

	cout << "Files opened" << endl;

    long size;
    char* chunk = new char[size];
    inBinary.read(chunk, size);

//cout << chunk << endl;

    for (int rep = 0; rep < 10; rep++) 
	{
        //ptr[rep] = new Student();
        ptr[rep].sum = 0;
        ptr[rep].avg = 0;
		inText >> ptr[rep].id ;
		inText >> ptr[rep].sname ;
        for (int rep1 = 0; rep1 < 3; rep1++) 
        {
            		inText >> ptr[rep].score[rep1] ;
                    ptr[rep].sum = ptr[rep].score[rep1] + ptr[rep].sum;
        }
        ptr[rep].avg = ptr[rep].sum/3;
	}

    inBinary.close();
    inText.close();
}
