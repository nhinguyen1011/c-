
#include "linklist.cpp"
int main(){
    LIST l;
    creative(l);
    int n;
    cout<<"the number node to add: ";
    cin>>n;
    for (int i = 0;i<=n;i++)
    {
        int x,pos;
        cout<<"input x: ";
        cin>>x;
        NODE* p=creative(x);
        addthefirst(l,p);
        addthelast(l,p);
        input(l,p);
        bmi(l,p);
        reversetime(prev,current);
    }
    cout<<"danh sach lien ket: ";
    output(l);
    system("pause");
    return 0;
}
