#include <stdio.h>
  
int main() {
  
    int cod1, n1, cod2, n2;
    float v1, v2, t;
 
    scanf("%d %d %f\n", &cod1, &n1, &v1);
    scanf("%d %d %f", &cod2, &n2, &v2);
 
    t= (n1*v1)+(n2*v2);
 
    printf("VALOR A PAGAR: R$ %.2f\n", t);
  
    return 0;
}