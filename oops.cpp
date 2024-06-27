#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
     double salary;
public:
    string name;
    string dept;
    string subject;
   

    
    void changeDept(string newDept) {
        dept = newDept;
    }

    void setSalary(int s) {
        salary = s;
    }

    double getSalary() {
        return salary;
    }

};

int main()
{
    Teacher t1;
   t1.name = "Anita";
   t1.dept = "computer science";
   t1.subject = "data structure";
   t1.setSalary(25000);
   
   cout <<t1.name <<endl;
   cout <<t1.getSalary() <<endl;
   return 0;

}