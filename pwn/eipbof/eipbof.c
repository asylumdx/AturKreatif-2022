#include <stdio.h>
#include <stdlib.h>
#define INPUTSIZE 0x80
#define FLAGSIZE 0x100

void flag (){
    puts("oh here's your flag");
    system("cat flag.txt");
}

int main(void)
{

setvbuf(stdout, NULL, _IONBF, 0);

puts("Type something: ");
vuln();
printf("Huh nothing happens");

return 0;
}

void vuln () {
char input[INPUTSIZE];
gets(input);
}
