#include <iostream>
using namespace std;

int DeQuy(int n){
	if (n<10) 
		return 1;
	return DeQuy(n / 10);
}
int dem(int n){
    if(n/2==0)
        return n/2;
    return dem(n%2);
}
long tong(int n){
    if(n<=0)
        return 0;
    return tong(n-2)+ DeQuy(n/10)+dem(n%2);
}
int main(){
    int  n;
    cout<<"nhap n: ";
    cin>>n;
    float s= tong(n);
    cout<<s;
    return 0;
}