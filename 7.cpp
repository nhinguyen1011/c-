#include <iostream>
using namespace std;

int DeQuy(int n){
	if (n< 10) 
		return 1;
	return 1 + DeQuy(n / 10);
}
long tong(int n){
    if(n<0)
     return 0;
    return tong(n-1)+1+ DeQuy(n / 10);
}
int main(){
    int  n;
    cout<<"nhap n: ";
    cin>>n;
    float s= DeQuy( n);
    cout<<s;
    return 0;
}