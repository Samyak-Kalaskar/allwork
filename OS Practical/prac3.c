#include<stdio.h>
#include<unistd.h>

int main()
{
    int id;
    printf("Program started\n");

    id= fork();
    if(id>0)
    {
        printf("This is parent Selection [process id:%d].\n",getpid());
    }
    else if (id==0)
    {
        printf("Fork Created [process id :%d].\n",getpid());
        printf("Fork Parent Process id :%d.\n",getppid());
    }
    else
    {
        printf("Fork Creation faild");
        
    }
    return 0;

<<<<<<< HEAD
}
=======
}
>>>>>>> 9cdcfee85a1b6a166e556f9cdbf24043301679ee
