#include <iostream>
using namespace std;
long luythua(int x,int n){
    if(n==0)
        return 1;
     return luythua(x,n-1)*x;
}
float giaithua(int n){

    if(n<=1)
        return 1 ;
    return n*giaithua(n-1);
}
float tong(int x,int n){
    if(n==1)
     return x;
    return tong (x,n-1)+(luythua(x,n-1)*x)/(n*giaithua(n-1));
}
int main(){
    int x, n;
    cout<<"nhap x: ";
    cin>>x;
    cout<<"nhap n: ";
    cin>>n;
    float s= tong(x,n);
    cout<<s;
    return 0;
}