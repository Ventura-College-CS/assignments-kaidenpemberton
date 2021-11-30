#include <iostream>
#include "Stack.cpp"
#include "Student.hpp"
#include "Student.cpp"
#include <vector>

using namespace std;

int main()
{
    double sco[3] = {100, 90, 80};
    Stack<Student> students;
    students.push(Student(1, "John", sco));
    students.push(Student(2, "Emma", sco));
    students.push(Student(3, "Kaiden", sco));
    students.push(Student(4, "Bruno", sco));
    students.push(Student(5, "Andy", sco));
	
    int size = students.size();
    cout << size << endl;

    for (int rep = 0; rep < size; rep++)
    { 
        students.peek().print();
    }
}
