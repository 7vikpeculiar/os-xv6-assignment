#include "types.h"
#include "stat.h"
#include "user.h"

char*
invertcase(char* inp)
{
  int i = 0;
  while(inp[i] != '\0')
  {
    if(inp[i] >= 'A' && inp[i] <= 'Z')
    { inp[i] += 32;}
    else if(inp[i] >= 'a' && inp[i] <= 'z')
    { inp[i] -= 32;}
    i++;
  }
  return inp;
}

int
main(int argc, char *argv[])
{
  int i;
  for(i = 1; i < argc; i++)
    printf(1, "%s%s", invertcase(argv[i]), i+1 < argc ? " " : "\n");
  exit();
}
