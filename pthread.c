#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void print(void *ptr)
{
    int n ;
    n = (int *) ptr;
    printf("%d\n",n);

}

void main()
{
    pthread_t thread1;
    pthread_t thread2;

    int n1 =10;
    int n2 = 20;

    printf("thread started ...\n");
    sleep(2);
    pthread_create(&thread1 , NULL , print , n1 );
    pthread_create(&thread2 , NULL , print , n2);

    pthread_join(thread1 , NULL);
    pthread_join(thread2 , NULL);

    sleep(2);
    printf("thread terminated here");

}