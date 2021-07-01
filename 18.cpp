#include <iostream>
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
int Dem(int a[], int n){
    int b[n];
    int x=1;
    b[0]=a[0];
    for(int i=1;i<n;i++){
        int dem=0;
        for(int j=0;j<x;j++){
            if(a[i]==b[j])
                dem++;
        }
        if(dem==0){
            b[x]=a[i];
            x++;
        }
    }
    return x;
}
    int a[], n;
    cout<<"nhap n : ";
    cin>>n;
    Nhap(a,n);
    Xuat(a,n);
   int s=Dem(a[],n){;
   cout<<s;
    return 0;
}
