/* PROBLEM: 1001 - Extremely Basic
ANSWER: Accepted
LANGUAGE: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
RUNTIME: 0.000s
FILE SIZE: 146 Bytes */

#include <stdio.h>
 
int main() {
    int A, B, X;
    scanf("%d %d",&A, &B);
    X = A + B;
    printf("X = %d" "\n", X);
    return 0;
}