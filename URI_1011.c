#include <stdio.h>
  
int main() {
  
     double raio,v;
 
    scanf("%lf", &raio);
 
    v = 4/3.0*3.14159*raio*raio*raio;
 
    printf("VOLUME = %.3lf\n",v);
  
    return 0;
}