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
