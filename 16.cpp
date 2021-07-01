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
int DemPTu(int a[], int n, int x)
{
	int dem=0;
	for( int i=0;i<n;i++)
		if(a[i]==x)
			dem++;
	return dem;
}
int main (){
    int a[],x, n;
    cout<<"nhap n : ";
    cin>>n;
    cout<<"nhap x : ";
    cin>>x;
    Nhap(a,n);
    Xuat(a,n);
   int s= DemPTu( a[], n,  x);
   cout<<s;
    return 0;
}