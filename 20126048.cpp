#include <iostream>
using namespace std;
#define size sizeof(int) * 4

    

   
void bu1(char arr[]){
    for(int i=0; i < 16; i++){
        if (arr[i] == '1'){
            arr[i] = '0';
    }else 
            arr[i]='1';
    }
    }
    

void bu2(char arr[],int i){
    if(i >= 0){
        if (arr[i] == '1'){
            arr[i]='0';
            bu2(arr,i-1);
        }else 
            arr[i]='1';
    }
}
void output(char arr[])
{
	 for(int i=0; i < size; i++)
    {
       cout<<arr[i];
      
    }
}
int main()
{
    short dec, k;
    char bin[size];
    int index = size - 1;
   
    cout<<"Enter decimal number: ";
    cin>>dec;

    while(index >= 0)
    {
    	if((dec & 1) == 1)
        	bin[index] = '1';
        else
        	bin[index] = '0';
        index--;
        dec >>= 1;
    }

    cout<<" binary a: ";
   	output(bin);
    bu1(bin);
    bu2(bin,15);
    cout << "\nbinary b: ";
    output(bin);
     
    return 0;
}
