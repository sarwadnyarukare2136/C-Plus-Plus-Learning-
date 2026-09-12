//While Loop

#include <iostream>
using namespace std;

int main()
{
    int num;
    int count = 1 ;


    cout << "Enter your number : ";
    cin >> num;

    while (count <= num)
    {
        cout << count << endl;
        count++;    
      
    }

    return 0;
    
}