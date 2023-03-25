#include<iostream>

using namespace std;
int main( )
{
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
      /*
      0x61fe14 : a
      0x61fe15 : b
      0x61fe16 : c
      */
   }
   int b[3] = {1, 2, 3};
   for (int *p = &b[0]; p <= &b[2]; p++) {
      cout << (void*) p << " : " << (*p) << endl;
   }
   /* 0x61fe00 : 1
      0x61fe04 : 2
      0x61fe08 : 3
    */

    double c[3] = {0.1, 0.2, 0.3};
    for (double *p = &c[0]; p <= &c[2]; p++) {
      cout << (void*) p << " : " << (*p) << endl;
   }

   /* 0x61fde0 : 0.1
      0x61fde8 : 0.2
      0x61fdf0 : 0.3
   */
    for (double *p = &c[0]; p <= &c[2]; p+= 2) {
      cout << (void*) p << " : " << (*p) << endl;
    }
    // 0x61fdd0 : 0.1
     //  0x61fde0 : 0.3
   return 0;
}


