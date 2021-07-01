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
int Max(int a[], int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return a[0];
	else
	{
		if (a[n - 1] > Max(a, n - 1))
			return a[n - 1];
		else
			return Max(A, n - 1);
	}
}
int main (){
    int a[], n;
    cout<<"nhap n : ";
    cin>>n;
    Nhap(a,n);
    Xuat(a,n);
   int s= Max(a, n);
   cout<<s;
    return 0;
}
