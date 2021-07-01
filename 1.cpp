#include <iostream>
using namespace std;
float tong(int n){2
    if(n<=1)
        return 1;
    return  1.0/n+tong(n-1);
}
int main(){
    int n;
    cout<<"nhap n: ";
    cin>>n;
    float s= tong(n) ;
    cout<<s;
    return 0;
}
