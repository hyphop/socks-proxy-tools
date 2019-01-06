#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

//## hyphop ##

   int main(int argc, char* argv[], char** envp)
   {
   char *gs;
   int gid = 0 ;

   gs = getenv("GID");

   if (gs) {
	gid=atoi(gs);
   }

   setgid(gid);
   argv++;

   fprintf(stderr, "%s GID: %d\n", "runasg", gid);

   execve(argv[0], argv, envp);
   perror("execve");   /* execve() returns only on error */
   exit(EXIT_FAILURE);
   return 0;
   }

