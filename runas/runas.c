#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

//## hyphop ##

   int main(int argc, char* argv[], char** envp)
   {

   int uid = 0;



   char *gs;
   char *us;

   int gid = 0;


   gs = getenv("GID");
   us = getenv("UID");

   if (us) {
      uid=atoi(us);
   }

   if (gs) {
      gid=atoi(gs);
   }


   setuid(uid);
   setgid(gid);

   fprintf(stderr, "%s UID: %d, GID: %d\n", "runas", uid, gid);


   argv++;
   execve(argv[0], argv, envp);
   perror("execve");   /* execve() returns only on error */
   exit(EXIT_FAILURE);
   return 0;
   }

