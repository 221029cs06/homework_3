#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    if(a>0 && a%2==0){
        cout<<"Even"<<endl;
    }else if(a>=0 && a%2 == 1){
     ++a;
     cout<<a;
    }
    return 0;
}
