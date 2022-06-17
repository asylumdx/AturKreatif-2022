#include <stdio.h>
#include <stdlib.h>

#define SIZE 0x100
#define GOAL 0x0FF51DE

int main(void)
{
  long code = 0;
  char clutter[SIZE];

  setbuf(stdout, NULL);
  setbuf(stdin, NULL);
  setbuf(stderr, NULL); 
  puts("Did you know that Vinícius Júnior scores in the UCL final?");
  puts("Wonder if we can overwrite that goal.");

  gets(clutter);


  if (code == GOAL) {
    printf("code == 0x%llx: you overwrote it into an offside!\n", GOAL);
    puts("oh here's your flag");
    system("cat flag.txt");
  } else {
    printf("code == 0x%llx\n", code);
    printf("code != 0x%llx :(\n", GOAL);
  }

  return 0;
}
