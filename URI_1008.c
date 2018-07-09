#include <stdio.h>
  
int main() {
  
    int n, h;
    float s;
 
    scanf("%d %d", &n, &h);
    scanf("%f", &s);
 
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", (h*s));
  
    return 0;
}