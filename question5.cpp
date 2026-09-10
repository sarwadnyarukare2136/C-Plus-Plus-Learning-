//check if a character is uppercase or lowercase

#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter  a character in upper or lower case : ";
    cin >> ch;

    if(isupper(ch)){
        cout << "The character is uppercase .";
    } else {
        cout << "The character is lowercase .";
    }

    return 0;
}