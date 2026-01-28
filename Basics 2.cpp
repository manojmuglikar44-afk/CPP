// 1)Print Numbers from 1 to 10 (for loop)
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
    return 0;
}
Output:
1
2
3
4
5
6
7
8
9
10

//2) Print Even Numbers between 1 and 20 (for loop)
#include <iostream>
using namespace std;
int main() {
    for (int i = 2; i <= 20; i += 2) {
        cout << i << endl;
    }
    return 0;
}
Output : 
2
4
6
8
10
12
14
16
18
20

//3) Sum of First N Natural Numbers (while loop)
#include <iostream>
using namespace std;
int main() {
    int n, i = 1, total = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n) {
        total += i;
        i++;
    }
    cout << "Sum of first " << n << " natural numbers is: " << total << endl;
    return 0;
}
Output :
Enter a number: 5
Sum of first 5 natural numbers is: 15

//4) Multiplication able of a Number (for loop)
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}
Output : 
Enter a number: 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50

//5) Factorial of a Number (for loop)
#include <iostream>
using namespace std;

int main() {
    int num;
    long long fact = 1;  

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    cout << "Factorial of " << num << " is: " << fact << endl;
    return 0;
}
Output : 
Enter a number: 5
Factorial of 5 is: 120

//6) Reverse a Number (while loop)
#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        int digit = num % 10;  
        rev = rev * 10 + digit;    
        num /= 10;                  
    }

    cout << "Reversed number is: " << rev << endl;
    return 0;
}
Output :
Enter a number: 4568
Reversed number is: 8654
