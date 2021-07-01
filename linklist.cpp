  
#include <iostream>
using namespace std;
struct thongtin{
    int ngay;
    int thang;
    int nam;
    float h;
    float nang;
    float luongnuoc;
};
struct NODE{
    thongtin data;
    NODE *pNext;
    NODE *prev;
    NODE *current;
};

struct LIST{
    NODE *pHead;
    NODE *pTail;
};

void init(LIST &l)
{
        l.pHead=l.pTail=NULL;
}
NODE* creative(thongtin x){
    NODE *p=new NODE;
    if(p==NULL){
        return NULL;
    }
    p->data=x;
    p->pNext=NULL;
    return p;
}
NODE* addthefirst(LIST &l,NODE *p){
    if (l.pHead==NULL)
        l.pHead=p;
    else
        p->pNext=l.pHead;
        l.pHead=p;
    return p;
}
NODE* addthelast(LIST &l,NODE *p){
    if (l.pTail==NULL)
    {
        p=l.pTail;
    }
    l.pTail->pNext=l.pTail;
    l.pTail=p;
    return p;
}
void input(LIST &l,NODE *p)
{
    thongtin x;
    init(l);
    cout<<"nhap nam: ";
       cin>>nam;
    cout<<"nhap thang: ";
    if
        (thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12||){
            cout<<"nhap ngay: ";
            if (ngay<0||ngay >31){
                cout<<"nhap lai";
            }
        cout<< ngay<<thang<< nam; 
        }
    if(thang==4||thang==6||thang==9||thang==11){
        gets(x.thang);
        cout<<"nhap ngay: ";
        if (ngay<0||ngay >30){
            cout<<"nhap lai";
        }
        cout<< ngay<<thang<< nam; 
    }
    if(thang==2){
        gets(x.thang);
        cout<<"nhap ngay: ";
        if (ngay<0||ngay >28){
            cout<<"nhap lai";
        }
        cout<< ngay<<thang<< nam; 
    }     
    else {
        cout<<"nhap lai";
    }

    cout<<"nhap chieu cao: ";
    cin>>h;
    cout<<"nhap can nang: ";
    cin>>nang;  
    cout<<"luong nuoc co the: "   ;
    cin>>luongnuoc;   
     }

void bmi(LIST &l,NODE *p){
    float n=(x.nang/(x.h*x.h));
    if (n<18.5)
        cout<<"duoi chuan";
    if (n>25&&n<29.9)
        cout<<"thua can";   
    if (n>30)
        cout<<"beo phi";    
    }
void reversetime(NODE *prev,NODE *current){
    current=l.pHead;
    prev=NULL;
    while(current!=NULL){
        pNext=current->pNext;
        current->pNext=prev;
        prev=current;
        current=pNext;
    }
    l.pHead=prev;
    return l.pHead;
}

void output(LIST l)
{
        for(node*p=l.pHead;p;p=p->pNext)
        {
                cout<<"ngay "<<p->data.ngay);
                cout<<"thang "<<p->data.thang);
                cout<<"cao "<<p->data.h);
                cout<<"nang "<<p->data.nang);
        }
}