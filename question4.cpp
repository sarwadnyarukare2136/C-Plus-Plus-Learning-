//check multiple statments using else if and tell the grades of a student

#include<iostream>
using namespace std;

int main()
{
    int a ;

    cout << "Enter your marks btween 1 to 100 : ";
    cin >> a;

    if(a >= 90){
        cout << "Grade : A+";
    } else if(a > 80 && a < 90){
        cout << "Grade : B";
    } else {
        cout << "Grade : C";
    }

    return 0;
}