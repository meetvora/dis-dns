#include <rpc/rpc.h>
#include "name.h"

int main(int argc,char** argv)
{
     CLIENT *cl;
     struct domain temp;
     struct domain *url, *t;
     url = &temp;
     int *result;
     char HOST[9];
     strncpy(HOST, "localhost", 9);

     if (argc != 2) {
          fprintf(stderr, "usage: prog domain_name\n");
          exit(1);
     }
     
     strncpy(url->content, argv[1], 64);
     printf("Reverse-Querying for %s\n", url->content);

     //Creating connection to DNS root
     cl = clnt_create(HOST, DNSPROG, ROOT, "udp");
     if (cl == NULL) {
          printf("Unable to establish connection with Root DNS server\n");
          clnt_pcreateerror(argv[1]);
          exit(1);
     }
     result = nodeproc_1(url, cl);
     if (result == NULL) {
          clnt_perror(cl, "add");
          exit(1);
     }
     printf("***Root response***\n");

     //Connecting to nodes
     int level = 1;
     printf("Root (Node 1) -> Node %d\n", *result);

     if (*result == 2){            // Checking for ".com"
          cl = clnt_create(HOST, DNSPROG, NODE2, "udp");
          t = nodeproc_2(url, cl);
          printf("***Node 2 response***\n");
          printf("%s\n", t->content);
          exit(1);
     }
     
     else if (*result == 3){  // Checking for ".in"
          int *n2;
          cl = clnt_create(HOST, DNSPROG, NODE3, "udp");
          n2 = nodeproc_3(url, cl);
          printf("***Node 3 response***\n");
          printf("Node 3 -> Node %d\n", *result);
     }

     return 0;
}