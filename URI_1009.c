#include <stdio.h>
  
int main() {
  
    char nome;
    float s, v;
 
    scanf("%s %f %f", &nome, &s, &v);
 
    printf("TOTAL = R$ %.2f\n", (s+v*0.15));
  
    return 0;
}