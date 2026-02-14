#include<iostream>
using namespace std;

class Rectangle{
    private:
        float l;
        float w;

    public:
        void data(){

            cout<<"Enter Length: ";
            cin>>l;
            cout<<"Enter Width: ";
            cin>>w;
}

void area(){
cout<<"Area of Rectangle: "<<l*w;
}
};

int main()
{
    Rectangle R1;
    R1.data();
    R1.area();
    return 0;
}
Output ===>
Enter Length: 5
Enter Width: 5
Area of Rectangle: 25

===================================================================================================================================================

#include <iostream>
using namespace std;

class Employee {
private:
    int Emp_ID;
    string Emp_name;
    int Salary;

public:
    void getInput() 
    {
        cout << "Enter The Name Of Employee: ";
        cin >> Emp_name;
        cout << "Enter The Employee Id: ";
        cin >> Emp_ID;
        cout << "Enter Employee Salary: ";
        cin >> Salary;
    }

    void Display() 
    {
        cout << "Name : " << Emp_name << endl;
        cout << "Employee ID : " << Emp_ID << endl;
        cout << "Salary : " << Salary << endl;
    }
};

int main() 
{
    int n;
    cout << "Enter Number of Employee's : ";
    cin >> n;

    Employee emp[30];
    for (int i = 0; i < n; i++) 
    {
        emp[i].getInput();
    }
    for (int i = 0; i < n; i++) 
    {
        emp[i].Display();
    }
    return 0;
}
Output ===>
Enter Number of Employee's : 2
Enter The Name Of Employee: A
Enter The Employee Id: 111
Enter Employee Salary: 1000
Enter The Name Of Employee: B
Enter The Employee Id: 112
Enter Employee Salary: 2000
Name : A
Employee ID : 111
Salary : 1000
Name : B
Employee ID : 112
Salary : 2000

==================================================================================================================================================

#include <iostream>
#include <string>

using namespace std;

class Class {
private:
    int Std_ID;
    string Std_name;
    int Roll_no;

public:
    void getInput() {
        cout << "Enter The Name Of Student: ";
        cin >> Std_name;
        cout << "Enter The Student Id: ";
        cin >> Std_ID;
        cout << "Enter Student Roll no.: ";
        cin >> Roll_no;
    }

    void Display() {
        cout << "Name : " << Std_name << endl;
        cout << "Student ID : " << Std_ID << endl;
        cout << "Roll No. : " << Roll_no << endl;
    }
};

int main() {
    int n;
    cout << "Enter Number of Student's : ";
    cin >> n;

    Class S[30];
    for (int i = 0; i < n; i++) {
        S[i].getInput();
    }
    for (int i = 0; i < n; i++) {
        S[i].Display();
    }
    return 0;
}
Output ===>
Enter Number of Student's : 3
Enter The Name Of Student: Manoj
Enter Student Roll no.: 24
Enter The Marks: 99
Enter The Name Of Student: Prashant
Enter Student Roll no.: 37
Enter The Marks: 98
Enter The Name Of Student: Vivek
Enter Student Roll no.: 61
Enter The Marks: 97

Name : Manoj
Student ID : 99
Roll No. : 24
Name : Prashant
Student ID : 98
Roll No. : 37
Name : Vivek
Student ID : 97
Roll No. : 61
