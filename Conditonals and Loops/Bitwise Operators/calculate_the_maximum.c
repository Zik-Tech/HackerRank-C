#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k)
{

    int  i, j, and = 0, or = 0, exor = 0;
    for(i = 1; i <= n ; i++){
        for(j = i+1;j <= n;j++){
            //gives required possible combinations for i,j
            if((i&j) < k && (i&j) > and)//checks the max value
            {
                and = i&j;//if conditions is not satisfied the value remains 0
            }
            if((i|j) < k && (i|j) > or)//checks the max value
            {
                or = i|j;//if conditions is not satisfied the value remains 0
            }
            if((i^j) < k && (i^j) > exor)//checks the max value
            {
                exor = i^j;//if conditions is not satisfied the value remains 0
            }
            
        }
    }
    printf("%d\n%d\n%d",and,or,exor);//prints the updated value 
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
