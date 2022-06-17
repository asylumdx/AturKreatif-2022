#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#define FLAGSIZE_MAX 64

char flag[FLAGSIZE_MAX];
void sigsegv_handler(int sig) {
  printf("%s\n", flag);
  fflush(stdout);
  exit(1);
  }
int main(void) {
  FILE *f = fopen("flag.txt","r");
  if (f == NULL) {
    printf("%s %s", "Please create 'flag.txt' in this directory with your",
                    "own debugging flag.\n");
    exit(0);
  }
  
  fgets(flag,FLAGSIZE_MAX,f);
  signal(SIGSEGV, sigsegv_handler); // Set up signal handler
  
  gid_t gid = getegid();
  setresgid(gid, gid, gid);

    setvbuf(stdout, NULL, _IONBF, 0);
    char input[1000];
    printf("Supply inputs and try to crash me! \n");
    gets(input);
    printf("You cannot crash me with these little bytes: \n %s!\n", input);
    return 0;
}

