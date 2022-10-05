#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a, b, c, d, e;
    a =  n % 10;
    b = ((n % 100) /10) ;
    c = ((n % 1000) /100);
    d = ((n % 10000) /1000);
    e = ((n % 100000)/ 10000 );

    int sum = a + b + c + d + e;
    printf("%d", sum);

    return 0;
}

***You can use the below method ***

int main(){
    int n, sum = 0, last;
    scanf("%d",&n);
    while(n != 0 ){
        last  =  n%10;//gives the last number
        sum = last + sum;
        n/=10;
    }
    printf("%d\n",sum);//prints the sum

}
