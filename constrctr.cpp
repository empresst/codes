#include<bits/stdc++.h>
using namespace std;

class student
{
//public:
private:
    int id;
    double gpa;
    public:
void display()
{
    cout<<id<<" "<<gpa<<endl;
}
student(int x,double y)
{
   id=x;
   gpa=y;
   cout<<id<<" "<<gpa<<endl;
}

};

int main()
{
    student toor(54,3.89);
   // toor.setValue(54,3.89);
   // toor.display();

}

