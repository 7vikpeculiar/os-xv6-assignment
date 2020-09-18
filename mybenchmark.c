#include "types.h"
#include "stat.h"
#include "user.h"

void timewaster()
{
    int z;
    for(z = 0; z < 100000;z+= 0.00000001);
    int y = 3;
    z = z/y;
    return;
}

int main(){
  fork();
  fork();
  timewaster();
  return 0;
}
