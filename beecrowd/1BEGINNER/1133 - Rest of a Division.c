/*  PROBLEM: 1133 - Rest of a Division
ANSWER: Accepted
LANGUAGE: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
RUNTIME: 0.000s
FILE SIZE: 408 Bytes*/

#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x < y){
        for(int i = x + 1; i < y; i++){
            if(i % 5 ==2 ||i % 5 ==3){
                printf("%d\n", i);
            }
        }
    }else{
        for(int i = y + 1; i < x; i++){
            if(i % 5 ==2 ||i % 5 ==3){
                printf("%d\n", i);
            }
    }
    return 0;
}
}