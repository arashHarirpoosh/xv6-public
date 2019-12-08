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
    if (pid > 0 || pid1 > 0 || pid2 > 0) {
    
	printf(1,"Process Id Is :  %d \n", getpid());
	
    	sleep(10);
    	exit();

    }

  
    // Note that pid is 0 in child process 
    // and negative if fork() fails 
    else 
    { 

	sleep(5);
	printf(1, "all childrens are : %d \n", getChildren(getppid()));
	exit();
    } 
        	
        	
return 0;
}
