#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void checkArgs(int argc, char **argv){
   if (argc != 3 || atoi(argv[1]) < 0 || atoi(argv[2]) < atoi(argv[1])){
      fprintf(stderr, "Usage: a.out min# max#\n");
      exit(EXIT_FAILURE);
   }
}

int main(int argc, char **argv){
   int min, max, roll;
   checkArgs(argc, argv);
   min = atoi(argv[1]);
   max = atoi(argv[2]);
   srand(time(NULL) % 1000);
   roll = (rand() % (max - min + 1)) + min;
   printf("You rolled a: %i\n", roll);
}
