#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "parse.c"

int main() {
  printf("Testing parse_args function. Please enter a cmdline that you would normally type in a shell.\n");
  char input[100];
  fgets(input, 100, stdin);
  char *position;
  if ((position=strchr(input, '\n')) != NULL) {
    *position = '\0';
  }

  char * pointer = &input;

  char ** output;
  output = parse_args(pointer);
  //printf("test 3\n");
  execvp(output[0], output);
  return 0;
}
