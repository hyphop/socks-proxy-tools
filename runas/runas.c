#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

//## hyphop ##

   int main(int argc, char* argv[], char** envp)
   {
   setuid(0);
   argv++;
   execve(argv[0], argv, envp);
   perror("execve");   /* execve() returns only on error */
   exit(EXIT_FAILURE);
   return 0;
   }

