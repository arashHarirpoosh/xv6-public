#include "types.h"
#include "stat.h"
#include "user.h"
 
int
main(void)
{
wait();
wait();
fork();
printf(1,"Process count Is :  %d \n", getCount(1));
printf(1,"Process count Is :  %d \n", getCount(3));
exit();
}
