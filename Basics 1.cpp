// 1) Print your name and age
#include <iostream>
using namespace std;

int main() {
    string name = "Manoj";
    int age = 19;
    cout << "My name is " <<name<<endl;
    cout << "My age is " <<age<< endl;  
    return 0;
}

Output : 
My name is Manoj
My age is 19


// 2) Addition of two numbers ( Accept Numbers from User ) 
#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int sum;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    sum = a + b;
    cout << "The Addition of two numbers is " << sum << endl;
    return 0;
}

Output :
Enter first number: 5
Enter second number: 6
The Addition of two numbers is 11

Enter first number: 54
Enter second number: 46
The Addition of two numbers is 100

// 3) Check  whether accepted number from user is even or odd
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "Entered number is EVEN" << endl;
    else
        cout << "Entered number is ODD" << endl;

    return 0;
}

Output :
Enter a number: 24
Entered number is EVEN

Enter a number: 25
Entered number is ODD

// 4) Find Lagest Of Two Numbers 
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter any two number: ";
    cin >>a >> b;

    if (a > b)
        cout << a << " is larger" << endl;
    else if (b > a)
        cout << b << " is larger" << endl;
    else
        cout << "Both numbers are equal" << endl;

    return 0;
}

Output :
Enter any two number: 54 68
68 is larger

Enter any two number: 9 5
68 is larger

//  5) Design Simple calculator using Switch Statement
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result = " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
    return 0;
}

Output : 
Enter first number: 5
Enter second number: 8
Enter operator (+, -, *, /): +
Result = 13

Enter first number: 4
Enter second number: 6
Enter operator (+, -, *, /): *
Result = 24

Enter first number: 9
Enter second number: 3
Enter operator (+, -, *, /): /
Result = 3

Enter first number: 5
Enter second number: 0
Enter operator (+, -, *, /): /
ERROR!
Error: Division by zero!
