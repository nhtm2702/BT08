#include <iostream>

using namespace std;
void swap_pointers(char** &ss1, char** &ss2)
{
   char **tmp;
   tmp = ss1;
   ss1 = ss2;
   ss2 = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   char **ss1 = &s1;
   char **ss2 = &s2;
   swap_pointers(ss1,ss2);
   cout << "s1 is " << *ss1 << endl;
   cout << "s2 is " << *ss2 << endl;
   return 0;
}
