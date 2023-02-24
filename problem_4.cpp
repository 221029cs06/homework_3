#include <iostream>
using namespace std;
int main() {
   char a;
    cin >> a;
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
    {
        
        if (a == 'a' || a == 'A' ||
            a == 'e' || a == 'E' || 
            a == 'u' || a == 'U' ||
            a == 'O' || a == 'o' || 
            a == 'I' || a == 'i')
            cout  << "Vowel " << endl; 
        else   cout << "Consonant" ; 
    }
 
    return 0;
}
