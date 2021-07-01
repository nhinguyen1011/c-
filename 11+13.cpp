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
int tong(int a[], int n)
	if(n == 0)
	    return 0;
    return a[n];
        if ( a[n] % 2 != 0)
            return tong(a, n-1);
        return tong(a, n-1) + a[n];
		}		
}
int demsoam( int x)
{
    if (x < 0)
        return demsoam(-x);
    if (x < 10)
        return 1;
    else
        return demsoam(x / 10) + 1;
}

int main()
{
    int a[], n,x;
    Nhap(a,n);
    Xuat(a,n);
    long s=tong(a,n);
    int b=demsoam(x)
    cout<<s;
    cout<<b;
    return 0;
}