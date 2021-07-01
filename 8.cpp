#include <iostream>
using namespace std;

long tong(int n){
    if(n<=0)
     return 0;
    return n%10+tong(n/10);
}
int main(){
    int  n;
    cout<<"nhap n: ";
    cin>>n;
    float s= tong(n);
    cout<<s;
    return 0;
}