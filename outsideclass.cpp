// Avtar singh
// 24070123027

#include<iostream>
using namespace std;

class Student
{
    public:
    void myMethod();
};

void Student::myMethod()
{
    cout<<"I am Avtar";
}

int main()
{
    Student s1;
    s1.myMethod();
}

// OUTPUT
// I am Avtar 
