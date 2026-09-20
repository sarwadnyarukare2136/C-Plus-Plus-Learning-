//Same as pattern 12 but with characters
/*--------------------------------------------------
  AAAA
   BBB
    CC
     D
-------------------------------------------------------
*/
//Print this---------------------------------


#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number : ";
    cin >> n;

    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<i ; j++) {
            cout << " ";
        }
        
        char ch = 'A' + i;
        for(int j=0 ; j<n-i ; j++) {
            cout << ch;
        }
        cout << endl;
    }
    return 0 ;  
}