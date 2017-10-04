#include <stdlib.c>
#include <sys/types.h>
#include <unistd.h>
int main () {

 pid_t child_pid;

 /*create child process*/
 child_pid = fork ();
 if (child_pid > 0) {
  /* parent process */
  sleep (60);
 }
 else {
  /* child process: exit */
  exit (0);
 }
 return 0;
}