#include <stdio.h>
  
int main() {
  
    double A, B, C, tri, circ, tra, quad, ret;
 
    scanf("%lf %lf %lf", &A, &B, &C);
 
    tri = A*C/2;
    circ = 3.14159*C*C;
    tra = (A+B)*C/2;
    quad = B*B;
    ret = A*B;
 
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", tri, circ, tra, quad, ret);
  
    return 0;
}