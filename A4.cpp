#include <iostream>
using namespace std;
int main()
{
   char **s;
   char *str;
   char foo[] = "Hello World";
   str = foo;
   s = &str;
   cout << "s la " << *s << endl;
   cout << "s[0] la " << *str;
   return(0);
}

