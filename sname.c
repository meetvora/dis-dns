#include <rpc/rpc.h>

int main(int argc,char** argv)
{
     CLIENT *cl;
     char* name;
     int *result;

     if (argc != 3) {
          fprintf(stderr, "usage: prog server name\n");
          exit(1);
     }

     name= argv[2];
     cl = clnt_create(argv[1], MARKSPROG, MARKSVERS, "udp");
     if (cl == NULL) {
          printf("can't establish connection with host %s\n", argv[1]);
          clnt_pcreateerror(argv[1]);
          exit(1);
     }
     
     result = nameproc_get(NULL, &name, cl);
     if (result == NULL) {
          clnt_perror(cl, "add");
          exit(1);
     }
     printf("the reports server returned %d\n", *result);
     return 0;
}