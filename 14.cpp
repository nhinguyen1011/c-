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
int KiemTraToanam (int a[], int n){
	for (int i = 0;i<n ; i++){
		if( a[i] < 0)
			return true;
		else
			return false;
		}
}

int main (){
    int a[], n;
    cout<<"nhap n : ";
    cin>>n;
    Nhap(a,n);
    Xuat(a,n);
   int s= KiemTraToanam(a, n);
   cout<<s;
    return 0;
}
