/*
Author:wye
Date:2013-5-18
problem:UVA 11039
采用了快速排序方法先对所有数据按从大到小排序，再比较有多少个符合题目要求的floors
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
long A[500000];
void quicksort(long *A, long p, long r){
    if (p < r){
        long pivot = part(A, p, r);
        quicksort(A, p, pivot-1);
        quicksort(A, pivot+1, r);
    }
}

int part(long *A, long p, long r){
    long sential = A[r];
    long i = p - 1,j;
    for(j=p; j<r; j++){
        if(labs(A[j]) >= labs(A[r]))change(++i, j);
    }
    change(++i, r);
    return i;
}

void change(long i, long j){
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

int main(){
    long n,m,i=0,j,sum=1,coun;
    scanf("%ld", &n);
    while(n--){
        memset(A, 0, sizeof(A));
        scanf("%ld", &m);
        while(m--){
            scanf("%ld", &A[i++]);
        }
        quicksort(A, 0, i-1);
        coun = A[0];
        for(j=1; j<i; j++){
            if(labs(A[j]) < labs(coun)&&A[j]*coun < 0){
                sum++;
                coun = A[j];
            }
        }
        printf("%ld\n", sum);
        i = 0;
        sum = 1;
    }
    return 0;
}
