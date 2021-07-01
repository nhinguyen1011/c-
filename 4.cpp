#include <iostream>
using namespace std;
long luythua(int x,int n){
    if(n<=1)
        return x;
     return luythua(x,n-2)*x;
}
long tong(int x,int n){
    if(n==1)
     return x;
     return tong(x,n-2)+luythua(x,n-2)*x;
}
int main(){
    int x, n;
    cout<<"nhap x: ";
    cin>>x;
    cout<<"nhap n: ";
    cin>>n;
    long s= tong(x,n);
    cout<<s;
    return 0;
}