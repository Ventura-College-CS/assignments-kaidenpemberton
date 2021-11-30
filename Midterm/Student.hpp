#pragma once

#include <iostream>

using namespace std;

class Student 
{
    private:
        int SID;
        string SName;
        double scores[3];
    public:
        Student();
        Student (int i, string name, double *sc);
        int getID();
        string getName();
        double getScores();

};