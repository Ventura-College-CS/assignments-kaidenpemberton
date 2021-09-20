//this is for the game functions

#include <iostream>
#include <string>
#include <curses.h>
#include <ncurses.h>
#include <fstream>
#include <sstream>
//#include <stdlib.h>
//#include <cstring>
//#include <ctime>
//#include <algorithm>
//#include <iomanip>
//#include <cstdlib> 
//#include <stdio.h>
//#include <unistd.h>
//#include <vector>

#include "searchEngine.h"

#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))
const int NUM_STUDENTS = 5;


using namespace std;

searchEngine :: searchEngine()
{
    
}
searchEngine :: ~searchEngine()
{}

//sets up each level as it reads the text from the document
void searchEngine :: load(int choice)
{  
   char name[10];
   int num = 0, x = 0;
   int score[2] = {0 , 0};
   student *students[NUM_STUDENTS];

   if (choice == 1) 
   {


    //this is to open the file
        fstream infile;
        string myFile = "/Users/kaiden/Documents/GitHub/Ventura Assignments/students.txt";
        //opens file
        infile.open(myFile.c_str());

    //while the file is inputing words into temp
        while (infile != NULL)
        {
            infile >> num;
            for (int temp = 0; temp < 10; temp++) 
            {
                if (infile >> name[temp] != ' ') {
                    infile >> name[temp];
                }
                else {
                    break;
                }
            }
            infile >> score[0];
            infile >> score[1];
            students[x] = new student(num, &name, score[0]. score[1]);
            x++;
        }
        infile.close();


        for (int i = 0; i < NUM_STUDENTS; i++)
        {
            cout << students[i].getDetails() << endl;
        }
   }

}

void student :: getDetails () 
{
 for (int i = 0; i < 4; i++)
    {
        cout << this->id << endl;
        for (int i = 0; i < name.size; i++) 
        {
            cout << this->name[i];
        }
        cout <<  endl;
        cout << this->score[0] << endl;
        cout << this->score[1] << endl;
    }
}