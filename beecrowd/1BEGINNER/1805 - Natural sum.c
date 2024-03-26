/* PROBLEM: 1805 - Natural Sum
ANSWER: Accepted
LANGUAGE: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
RUNTIME: 0.000s
FILE SIZE: 177 Bytes
*/

#include <stdio.h>
 
int main() {
    long long int a, b, soma;
    scanf("%lld %lld", &a, &b);
    soma = (a + b)*(b-a+1)/2;
    printf("%lld\n", soma);
    return 0;
}