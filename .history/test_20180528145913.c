
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr_in[10240];

int arr_out_memcpy[10240];
int arr_out_for[10240];

int main(void)
{
    int i =0;
    clock_t start, finish;

    double duration;
    
    for(i=0; i<10240; i++)
    {
        arr_in[i]=i;
    }
    printf("start test memcpy and for..");

    /***********************for*********/
    start = clock();

    for(i=0; i<10240; i++)
    {
        arr_out_for[i]=arr_in[i];
    }

    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("for count time： %f seconds\n", duration);


    /***********************memcpy*********/
    start = clock();

    memcpy(arr_out_memcpy,arr_in,1024);

    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("for count time： %f seconds\n", duration);

    // getchar();

}