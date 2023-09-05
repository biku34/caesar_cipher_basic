#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char ch[50],nch[50];
    int gap;
    cout<<"Enter the text : ";
    cin>>ch;
    int p=strlen(ch);
    cout <<"Enter the shift : ";
    cin>>gap;

    for(int i=0;i<p;i++)
    {
        if(isupper(ch[i]))
        {
            nch[i]=char(int(ch[i] + gap - 65) % 26 + 65);
        }
        else
        {
            nch[i]=char(int(ch[i] + gap - 97) % 26 + 97);
        }
    }
    for(int i=0;i<p;i++)
    {
        cout<<nch[i];
    }
    return 0;
}