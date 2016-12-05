#include <stdio.h>

int main()
{
   int A=20, B=10, c, d, e, f, g;
   float h, i;
   c=A+B;
   d=A-B;
   e=A*B;
   f=A/B;
   g=A%B;
   
   h=25./10;
   
   printf("valor de c: %i \n", c);
   printf("valor de d: %i \n", d);
   printf("valor de e: %i \n", e);
   printf("valor de f: %i \n", f);
   printf("valor de g: %i \n", g);
   printf("valor de h: %.2f \n", h);
   printf("valor de a e h: %i %.2f", A, h);
   printf("valor de c e d: \n%i \n%i \n", c, d);
   
   return 0;
}
