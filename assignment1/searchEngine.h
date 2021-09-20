#pragma once

#include <iostream>
//#include "main.cpp"
using namespace std;

//this is what each word object is made of
struct student {
    student(int id, char &name[], int score1, int score2)
    {
        this->id = id;
        this->name = name;
        this->score[0] = score1;
        this->score[1] = score2;
    };
    ~student();
    int id;
    char name[10];
    int score[2];
    int total;
    double average;
    void getDetails () 
    {
    }
};

class searchEngine {
    private:
        //int len, wrong, guesses;
       /// void displayBack();
        //void index(struct student);

    public:
        searchEngine();
         ~searchEngine();
        void load(int choice);
        //void search(int &cho, int &level, bool &isRunning, halfCor values[]);
};
