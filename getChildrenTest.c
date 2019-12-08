#include "types.h"
#include "stat.h"
#include "user.h"
 
int
main(void)
{
int pid, pid1, pid2;
pid = fork();
pid1 = fork();
pid2 = fork();
    // Parent process  
    if (pid > 0 || pid1 > 0 || pid2 > 0)
    { 
        sleep(50); 
        printf(1,"Process Id Is :  %d \n", getpid());
        exit();
    }
    // Child process 
    else   
    {  
    	sleep(1);
        exit(); 
   
    } 


}
