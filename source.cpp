
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
        cout<<"input the position: ";
        cin>>pos;
        NODE* p=creative(x);
        addthefirst(l,p);
        addthelast(l,p);
        addRandom(l,p,pos,n);
        delfirst(l);
        dellast(l);
        delNoderandom(l, x);
    }
    cout<<"danh sach lien ket: ";
    output(l);
    system("pause");
    return 0;
}
