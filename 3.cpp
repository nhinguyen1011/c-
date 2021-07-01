 #include <iostream>
using namespace std;
int main()
{
    int dec, i;
    int bin[16];
    int index =15;

    /* Input number from user */
    cout<<"Enter any number: ";
    cin>>dec;

    

    while(index >= 0)
    {
        bin[index] = dec & 1;
        index--;
        dec >>= 1;
    }

    
    cout<<"Converted binary: ";
    for(i=0; i<16; i++)
    {
        cout<< bin[i];
    }

    return 0;
}