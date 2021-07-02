#include <iostream>
using namespace std;
void Nhap(int *a, int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<a<<"["<<i<<"]";
    }
}
void Xuat(int *a, int n)
{
    for (int i=0;i<n;i++){
         cout<<a[i];
        }
    }
int kiemtra(int *a, int n){
    if(a[i]<0)
        return a[i];
    return kiemtra(a[i+1],n);
}
int main (){
    int *a, int n;
    a =  new int[n]; 
    Nhap(a,n);
    Xuat(a,n);
    int x=kiemtra(a,n);
    cout<<s;
}
