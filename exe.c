#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
 
// Make a global variable so we can modify it in threads.
int m = 0;
 
// The procedure that each thread will run
void *myThreadKam(void *vargp)
{
    // Specify the value of the thread's argument.
    int *myid = (int *)vargp;
 
    // To track changes in a static variable, let's construct one
    static int g=0;
 
    // Change static and global variables
    ++g; ++m;
 
    // Print the argument, static and the global variables
    printf("Thread ID: %d, Static: %d, Global: %d\n",*myid, ++g, ++m);
}
 
int main()
{
    int i;
    pthread_t tid;
 
    // Let us create three threads
    for (i = 0; i < 3; i++)
	{
        pthread_create(&tid, NULL, myThreadKam, (void *)&tid);
		pthread_join(tid,NULL);
	}
    pthread_exit(NULL);
    return 0;
}
