#include <rpc/rpc.h>
#include "name.h"
int main(int argc,char** argv)
{
     CLIENT *cl;
     int *result;

     if (argc != 2) {
          fprintf(stderr, "usage: prog domain_name\n");
          exit(1);
     }
     struct name *N;
     struct name temp;
     N = &temp;
     strncpy(N->content, argv[2], 64);
     cl = clnt_create(argv[1], MARKSPROG, MARKSVERS, "udp");
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
          cl = clnt_create(argv[1], MARKSPROG, L1N1VERS, "udp");
     else if (*result == 3)
          cl = clnt_create(argv[1], MARKSPROG, L1N2VERS, "udp");
     result = l1n1proc_2(N, cl);
     level ++;

     return 0;
}