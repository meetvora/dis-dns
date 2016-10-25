#include <rpc/rpc.h>
#include "name.h"
int main(int argc,char** argv)
{
     CLIENT *cl;
     int t;
     int *result = &t;

     if (argc != 2) {
          fprintf(stderr, "usage: prog domain_name\n");
          exit(1);
     }
     struct name *N;
     struct name temp;
     N = &temp;
     strncpy(N->content, argv[1], 64);
     printf("%s\n", N->content);
     cl = clnt_create("localhost", MARKSPROG, MARKSVERS, "udp");
     if (cl == NULL) {
          printf("can't establish connection with main DNS server\n");
          clnt_pcreateerror(argv[1]);
          exit(1);
     }
     printf("here\n");
     result = nameproc_1(N, cl);
     if (result == NULL) {
          clnt_perror(cl, "add");
          exit(1);
     }
     int level = 1;
     printf("level %d => node number %d\n",level, *result);
     if (*result == 2)
          cl = clnt_create("localhost", MARKSPROG, L1N1VERS, "udp");
     else if (*result == 3)
          cl = clnt_create(argv[1], MARKSPROG, L1N2VERS, "udp");
     N = l1n1proc_2(N, cl);
     printf("%s\n", N->content);
     level ++;

     return 0;
}