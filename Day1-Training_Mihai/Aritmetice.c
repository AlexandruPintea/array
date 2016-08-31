
#include "Aritmetice.h"
 double sum(double a, double b)
 {
     static double p1=0,p2=0;
     static double s=0;s=p1+p2;
     if((p1!=a)||(p2!=b))
     {
         p1=a;p2=b;
         s=p1+p2;
     }
}
