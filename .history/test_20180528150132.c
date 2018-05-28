
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int arr_in[102400];

int arr_out_memcpy[102400];
int arr_out_for[102400];

int main(void)
{
    int i =0;
    clock_t start, finish;

    double duration;

    for(i=0; i<102400; i++)
    {
        arr_in[i]=i;
    }
    printf("start test memcpy and for..\r\n");

    /***********************for*********/
    start = clock();

    for(i=0; i<102400; i++)
    {
        arr_out_for[i]=arr_in[i];
    }

    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("for count time�� %f seconds\r\n", duration);


    /***********************memcpy*********/
    start = clock();

    memcpy(arr_out_memcpy,arr_in,102400);

    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("memcpy count time�� %f seconds\r\n", duration);

    // getchar();

}