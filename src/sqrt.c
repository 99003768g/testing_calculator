#include "sqrt.h"
double square_Root (double n)
{
  
double k, precision = 0.001;
for(k = 1; k*k <=n; ++k);
for (--k; k*k < n; k += precision); 
return k;
  
}
