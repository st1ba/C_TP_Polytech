#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI       3.14159265358979323846

 void affichage(double a);
 double ma_fonction(double x);
 double ma_fonction2(int x);
 int main(int argc, char *argv[])
{

  double a,b;
  int i=3;

  a = M_PI / 2.0;

  b=a;

  b = ma_fonction(i);

  affichage(ma_fonction(a));

  affichage(a);
  affichage(b);
  system("PAUSE");

  return 0;

}

 

void affichage(double a)

{

  printf("%lf\n", a);

}

 

double ma_fonction(double x)

{

        double y;

        y = sin(x);

       y = y*y;
       
       return y;

}

 

double ma_fonction2(int x)

{

  double y;

  y = sin(x) + cos(x);

  return y;

}

