#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int strlen(char a[])
{
    int i=0;
    while(a[i] != '\0') i++;
    return i;
}
void Reverse(char a[])
{
    int leng=strlen(a);
    char RV[leng];
    for (int i=0;i<leng;i++)
    {
            RV[i] = a[leng-i-1];
    }
    cout << RV << endl;
}
void delete_char(char a[], char c)
{
    int i=0,leng=strlen(a);
    while (i != leng)
    {
        while (a[i] == c)
        {
            for (int j=i;j<leng;j++)
            {
                a[j]=a[j+i];
            }
        }
         i++;
    }
    cout << a << endl;
}
int main()
{
    char str[]="accb";
    Reverse(str);
    delete_char(str, 'c');
}
