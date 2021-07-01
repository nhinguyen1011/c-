#include <iostream>
using namespace std;
float giaithua(int x){

    if(x<=1)
        return 1 ;
    return x*giaithua(x-1);
}
int main(){
   int x;
    cout<<"nhap x: ";
    cin>>x;
    float s=giaithua(x);
    cout<<s;
    return 0;
}