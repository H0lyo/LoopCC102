#include <stdio.h>

int main() {
    int num, i;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    for (int i= 1; i <= num; i=i+2) {
    printf("%d\n", i);}
    
    return 0;
}
