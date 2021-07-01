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
int DemPTuduong(int a[], int n)
{
	int dem=0;
	for( int i=0;i<n;i++)
		if(a[i]>0)
			dem++;
	return dem;
}
int main (){
    int a[], n;
    cout<<"nhap n : ";
    cin>>n;
    Nhap(a,n);
    Xuat(a,n);
   int s= DemPTuduong( a[], n,  x);
   cout<<s;
    return 0;
}