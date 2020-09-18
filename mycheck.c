#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  if(argc != 3)
  {
    printf(1,"Invalid number of args\n");
    exit();
  }
  printf(1,"%d\n", argc);
  int pid = atoi(argv[1]);
  int prior = atoi((argv[2]));
  printf(1,"%d %d\n",pid,prior);
  setpriority(pid, prior);
  //ps();
  exit();
}
