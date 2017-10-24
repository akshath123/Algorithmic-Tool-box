#include <stdio.h>
#include <stdlib.h>
#define MIN(a,b,c) ((a) < (b)) ? ((a) < (c) ? (a) : (c)) : ((b) < (c) ? (b) : (c))

int min_steps(int num);
int main(void) {
        int num;

        printf("Enter the number: ");
        scanf("%d", &num);

        printf("The minimum number of steps to go down to 1 is: %d\n", min_steps(num));
        return 0;
}

int min_steps(int num)
{
        int x = num, y = num, z = num;

        if (num <= 1) return 0;
	printf("\n\n") ;
        if (num%2 == 0) {
		printf("%d  ", num/2) ;
                x = min_steps(num/2);
        }

        if (num%3 == 0) {
		printf("%d ", num/3) ;
                y = min_steps(num/3);
        }

	printf("%d ", num-1) ;
        z = min_steps(num-1);

        return 1+ (MIN(x,y,z));
}
