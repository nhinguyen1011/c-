#include <iostream>
#include <math.h>
using namespace std;
void Nhap(int a[], int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<a<<"["<<i<<"]";
    }
}
void Xuat(int a[], int n)
{
    for (int i=0;i<n;i++){
         cout<<a[i];
        }
}
int kiemtra(int a[], int n){
       if((n<=1)) 
            return 1;
       for(int i = 2; i <= sqrt(n); i ++){
              if(n % i == 0)
                    return 0;
       }
       return 1;
}
void  in(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (kiemtra(a[i]))
        {
            cout<< a[i]);
        }
    }
}
int nguyento(int a[], int n) {
    int tich = 1;
	for(int i=0; i<n; i++)
		if(kiemtra(a[i])==0)
			return nguyento(n-1)
		return x * nguyento(n-1);
	return -1;
}

   
    

int main (){
    int a[], x,n;
    cout<<"nhap n : ";
    cin>>n;
    Nhap(a,n);
    Xuat(a,n);
    int s=nguyento(x);
    cout<<s;
    return 0;
}