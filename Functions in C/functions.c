#include <stdio.h>
int max_of_four(int z, int y, int x, int w)
{
    if (z > y && z > x && z > w){
        return(z);
    }

    if (y > z && y > x && y > w)
    {
        return(y);
    }

    if (x > y && x > z && x > w)
    {
         return(x);
    }

    if (w > y && w > x && w > z)
    {
        return(w);
    }
    return 0;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
