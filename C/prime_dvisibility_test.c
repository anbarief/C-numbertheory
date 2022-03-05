#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int is_prime(unsigned long long int n){

    if (n == 2){
        return 1;
    }

    if (!(n & 1) || n < 2 ) {
        return 0;
    }

    for (unsigned long long int p = 3; p <= n/p; p += 2){
        if (!(n % p)){
            return 0;
        }
    }

return 1;

}

int main(){

unsigned long long int i;
unsigned int prime_status;
char repeat='y';

while ((repeat=='y') || (repeat=='Y')){

    printf("Input a positive integer:\n ");
    scanf("%llu", &i);

    printf("input = %llu\n", i);

    time_t start_time = time(NULL);

    prime_status = is_prime(i);

    time_t end_time;
    time(&end_time);

    switch (prime_status){
        case 1:
            printf("Prime number status: True\n");
            break;
        default:
            printf("Prime number status: False\n");
    }
    printf("\nComputing time: %ld\n", (end_time)-(start_time));
    printf("\nRepeat? (y/n)");
    fflush(stdin);
    scanf("%c", &repeat);
    }
}
