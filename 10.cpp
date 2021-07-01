#include <iostream>
using namespace std;
/*int DeQuy(int n){
	if (n<10) 
		return 1;
	return DeQuy(n/10);
}*/
int kiemtra(int n){
    if(n/2==0)
        return 0;
    return 1;
}
/*long tong(int n){
    if(n<=0)
        return 0;
    return 1;
}*/
int main(){
    int  n;
    cout<<"nhap n: ";
    cin>>n;
    int a=kiemtra(n);
     cout<<a;
    return 0;
}