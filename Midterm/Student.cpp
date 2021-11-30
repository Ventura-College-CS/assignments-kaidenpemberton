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

