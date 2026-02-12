//Title - Jack is always excited about sunday. It is favourite day, when he gets to play all day. And goes to
//cycling with his friends. So every time when the months starts he counts the number of sundays he will get to enjoy.
//Considering the month can start with any day, be it Sunday, Monday…. Or so on.

//Count the number of Sunday jack will get within n number of days.

//Example 1:

//Input

//mon-> input String denoting the start of the month.

//13 -> input integer denoting the number of days from the start of the month.

//Output :
//2 -> number of days within 13 days. 

//Use OOP Concepts while writing the program.

//Before performing this Practical perform the following program 
//1) Write the program to enter string like Sun  ,Mon  , Tue  , Wed  , Thur ,Fri  ,Sat  and program should return values 0 , 1 ,2 ,3 ,4 ,5 ,6 
//Input : Mon ( Day Of Week)
//Output : 1     ( Value assigned to that Day)

===============================================================================================================================================================================================

    // 1) Write the program to enter string like Sun  ,Mon  , Tue  , Wed  , Thur ,Fri  ,Sat  and program should return values 0 , 1 ,2 ,3 ,4 ,5 ,6 
    
#include <iostream>
#include <string>
using namespace std;

class  Day_to_no{
public:
    int getDayValue(string day) {
        for(int i = 0; i < day.length(); i++) {
        }

        if(day == "sun")
            return 0;
        else if(day == "mon")
            return 1;
        else if(day == "tue")
            return 2;
        else if(day == "wed")
            return 3;
        else if(day == "thur")
            return 4;
        else if(day == "fri")
            return 5;
        else if(day == "sat")
            return 6;
        else
            return -1;
    }
};

int main() {

    string getDay;
    cout << "Enter Day: ";
    cin >> getDay;

    Day_to_no obj;
    int result = obj.getDayValue(getDay);

    if(result != -1)
        cout << "Output: " << result;
    else
        cout << "Invalid Day Entered";

    return 0;
}
Output ===>
Enter Day: mon
Output: 1
Enter Day: jan
Invalid Day Entered

    // Main Code 
