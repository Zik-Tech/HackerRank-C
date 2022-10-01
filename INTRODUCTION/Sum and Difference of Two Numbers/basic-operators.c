#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int int01, int02;
    float float01, float02;
    
    
    scanf("%d %d\n", &int01, &int02);
    scanf("%f %f\n", &float01, &float02);
    
    printf("%d %d\n", int02 + int01, int01 - int02);
    printf("%.1f %.1f\n", float01 + float02, float01 - float02);
    
    return 0;
}
