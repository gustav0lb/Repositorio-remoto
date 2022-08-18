#include <stdio.h>
int fatorial(int n){
    if (n == 0){
        return 1;
    }
    else{
        return n * fatorial(n - 1);
    }
}

int main(){
    int n = 4;
    printf("hello, boy!\n");
    printf("\nfatorial(5) = %d\n",fatorial(n));
    return 0;
}