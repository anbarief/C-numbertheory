#include <stdio.h>
#include <assert.h>

unsigned long long int factorial(int n){
    if (n>1){
    return n*factorial(n-1);
    }
    return 1;
}

int main(){

int n_dummy;
unsigned int n;

printf("\nInput non-negative integer:  ");
scanf("%d", &n_dummy);
printf("\n");
if ((n_dummy < 0) || (n_dummy>30)){
    printf("\nThe number must be non-negative, and no more than 30.\n");
    assert((n_dummy >= 0) && (n_dummy<=30));
    }
n = (unsigned int) n_dummy;
printf("\n%u! is equal to: %llu\n", n, factorial(n));

}
