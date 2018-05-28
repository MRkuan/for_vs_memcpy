
#include "stdio.h"
#include<string.h>
#include <time.h>

int arr_in[10240];

int arr_out_memcpy[10240];
int arr_out_for[10240];

int main(void)
{
    int i =0;
    clock_t start, finish;
    for(i=0; i<10240; i++)
    {
        arr_in[i]=i;
    }
    printf("start test memcpy and for..");

    /***********************for*********/
    start = clock();

   for(i=0; i<10240; i++)
    {
        arr_in[i]=i;
    }

    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("for count time： %f seconds\n", duration);


    /***********************memcpy*********/
    start = clock();


    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("for count time： %f seconds\n", duration);

    getchar();

}