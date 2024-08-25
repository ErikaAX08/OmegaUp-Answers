#include <stdio.h>

int main() {
    int p[3];
    int r = 0;
    
    scanf("%d %d %d", &p[0], &p[1], &p[2]);
    
    for (int i = 0; i < 3; i++)
        r += p[i];
    
    printf("%d", r);
    
    return 0;
}