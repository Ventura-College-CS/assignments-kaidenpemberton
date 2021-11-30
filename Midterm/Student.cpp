#include "Student.hpp"
#include <iostream>

using namespace std;

Student :: Student (int i, string name, double *sc) 
{
    this.SID = i;
    this.SName = name;
    this.scores = sc;
}

int getID() { return this.SID;};
string getName() { return this.SName};
double getScores() {return *this.scores};

