#include <iostream>
using namespace std;
int main(){
char sounds; 
cin>>sounds; 
switch (sounds)
{
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
    cout<<"Vowel"<<endl;
    break;
    
    case 'b':
    case 'c':
    case 'd':
    case 'f':
    case 'g':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'p':  
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'v':
    case 'w':
    case 'x':
    case 'z':
    cout<<"Consonant";        

}






    return 0;
}
