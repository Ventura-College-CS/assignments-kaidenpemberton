#include "Student.hpp"
#include <iostream>

using namespace std;

Student :: Student (int i, string name, double *sc) 
{
    SID = i;
    SName = name;
    *scores = *sc;
}

int Student :: getID() { return SID;}
string Student :: getName() { return SName;}
double Student :: getScores() { return *scores;}

void Student :: print() 
{
    cout << "Student ID #" << SID << endl;
    cout << "Name : " << endl;
    cout << "Scores :";
    for (int rep = 0; rep < 0; rep++)
    {
        cout << " " << scores[rep];
    }
}
