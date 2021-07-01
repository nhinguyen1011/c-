#include <iostream>
using namespace std;
#define size sizeof(int) * 4

    
   
   
void bu1(char arrb[],int i){
    for(int i=0; i < 16; i++){
        if (arrb[i] == '1'){
            arrb[i] = '0';
    }else 
            arrb[i]='1';
    }
    }
    

void bu2(char arrb[],int i){
    if(i == 0){
        if (arrb[i] == '1'){
            arrb[i]='0';
            bu2(arrb,i-1);
        }else 
            arrb[i]='1';
    }
}

int main()
{
    short dec;
    char bin[size];
    int index = size - 1;
   
    cout<<"Enter decimal number: ";
    cin>>dec;

    for(int index = size - 1; index > 0; index--)
    {
        bin[index] = dec >> index;
         if (bin[index] & 1)
            cout<<"1";
         else
            cout<<"0";
    }

    cout<<"converted binary: ";
    for(int i=0; i < size; i++)
    {
       cout<<bin[i];
      
    }
    /*for(int i=0; i < size; i++)
    {
       bu1(bin[i],size);
       bu2(bin[i],size);
    }*/
    return 0;
}