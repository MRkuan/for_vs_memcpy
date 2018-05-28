
#include "stdio.h"
#include<string.h>

int arr_in[10240];

int arr_out_memcpy[10240];
int arr_out_for[10240];

int main(void)
{
    int i =0;
    for(i=0; i<10240; i++)
    {
        arr_in[i]=i;
    }
    printf("start test memcpy and for..");



}