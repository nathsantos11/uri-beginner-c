#include <stdio.h>
#include <math.h>
  
int main() {
  
    float p1, x1, y1, p2, x2, y2, distancia;
 
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
     
    p1 = x2-x1;
    p2= y2-y1;
 
    distancia = sqrt((p1*p1)+(p2*p2));
    printf("%.4f\n", distancia);
  
    return 0;
}