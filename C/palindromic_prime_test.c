#include <stdio.h>
#include <string.h>


int is_prime(unsigned long int n){

if (n == 2){
    return 1;
}

if (!(n & 1) || n < 2 ) {
    return 0;
}

for (unsigned long int p = 3; p <= n/p; p += 2){
    if (!(n % p)){
        return 0;
        }
}

return 1;
}


int palindrome(unsigned long int n){

char strnum[20];
int i, nstr;
float cond;
sprintf(strnum, "%ld", n);
nstr = strlen(strnum);
cond = (float) (nstr-1)/2;

for (i=0; i< cond; i++){
    if (strnum[i] != strnum[nstr-1-i]){
        return 0;
    }
}
    return 1;
}

int main(){
unsigned long int i;
unsigned int prime_status, palindrome_status;

printf("Input a positive integer:\n ");
scanf("%ld", &i);
printf("input = %ld\n", i);
prime_status = is_prime(i);
printf("Prime number status: ");
printf(prime_status==1? "True\n": "False\n");
palindrome_status = palindrome(i);
printf("The number is %s Palindrome\n", palindrome_status==1? "a": "not a");
}
