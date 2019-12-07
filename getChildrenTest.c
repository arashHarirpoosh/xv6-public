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
if (pid == getpid() ){
printf(1,"Process Id Is :  %d \n", getChildren(getppid(getpid())));
exit();
}
if (pid1 == getpid() ){
printf(1,"Process Id Is :  %d \n", getChildren(getppid(getpid())));
exit();
}
if (pid2 == getpid() ){
printf(1,"Process Id Is :  %d \n", getChildren(getppid(getpid())));
exit();
}
}
