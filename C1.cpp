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
    char str[leng+1];
    str[leng]='\0';
    for (int i=0;i<leng;i++)
        str[i]=a[leng-i-1];
    for (int i=0;i<leng;i++)
        a[i]=str[i];
}

void delete_char(char a[], char c)
{
    int i=0,leng=strlen(a),k=0;
    while (i != leng)
    {
        while (a[i] == c)
        {
            k++;
            for (int j=i;j<leng;j++)
            {
                a[j]=a[j+1];
            }
            a[leng-k]='\0';
        }
         i++;
    }
}

void pad_right(char a[], int n)
{
    int leng=strlen(a);
    if (leng < n)
    {
        a[n]='\0';
        for (int i=leng;i<n;i++)
            a[i] = '1';
    }
}

void pad_left(char a[], int n)
{
    int leng=strlen(a);
    char s[leng];
    s[leng]='\0';
    for (int i=0;i<leng;i++)
        s[i]=a[i];
    if (leng < n)
    {
        a[n]='\0';
        int j=0;
        for (int i=0;i<(n-leng);i++)
        {
            a[i] = '1';
        }
        for (int i=n-leng;i<n;i++)
        {
            a[i]=s[j];
            j++;
        }
    }
}

void truncate(char a[], int n)
{
    int leng=strlen(a);
    if (leng > n) a[n]='\0';
}

bool is_palindrome(char a[])
{
    int leng=strlen(a);
    for (int i=0;i<leng/2;i++)
        if (a[i] == a[leng-i-1]) return false;
    return true;
}

void trim_left(char a[])
{
    int i=0;
    while (a[i] == ' ') delete_char(a,' ');
}

void trim_right(char a[])
{
    int i=strlen(a);
    while (a[i] == ' ') delete_char(a,' ');
}

int main()
{
    char str[]="accbbbbb";
    Reverse(str);
    delete_char(str, 'c');
    pad_left(str,5);
    truncate(str,3);
}
