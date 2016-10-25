import os

# cmd = """rpcgen name.x
# gcc -c name_clnt.c
# gcc -c name_svc.c
# gcc -c name_proc.c
# gcc -c name.c
# gcc -o client name_clnt.o name.o
# gcc -o server name_svc.o name_proc.o"""

cmd = """rpcgen name.x
gcc name.c name_clnt.c name_xdr.c -o client
gcc name_svc.c name_proc.c name_xdr.c -o server"""

os.system(cmd)