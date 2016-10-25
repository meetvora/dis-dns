#include<rpc/rpc.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "name.h"

int * nameproc_1_svc(name* NAME, struct svc_req *arg2)
{
	char last[3];
	static int res;
	for(int i = 3; i>0; i--)
		last[3 -i] = NAME->content[strlen(NAME->content) -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return &res;
}

name * l1n1proc_2_svc(name* NAME, struct svc_req *arg2)
{
	char res[15];
	printf("%s\n", NAME->content);
	if (strcmp(NAME->content,"youtube.com") == 0)
		strcpy(res, "192.153.122.198");
	else if (strcmp(NAME->content,"gmail.com") == 0)
		strcpy(res, "192.111.165.033");
	else if (strcmp(NAME->content,"google.com") == 0)
		strcpy(res, "163.100.88.056");
	else if (strcmp(NAME->content,"facebook.com") == 0)
		strcpy(res, "139.233.69.017");
	else if (strcmp(NAME->content,"news.ycombinator.com") == 0)
		strcpy(res, "158.96.23.63");
	else if (strcmp(NAME->content,"livemint.com") == 0)
		strcpy(res, "155.88.22.049");
	name *response;
	strncpy(response->content, res, 15);
	return response;
}
int * l1n2proc_3_svc(name* NAME, struct svc_req *arg2)
{
	char last[3];
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = NAME->content[strlen(NAME->content) - 1 -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
}
int * l2n1proc_4_svc(name* NAME, struct svc_req *arg2)
{
	char last[3];
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = NAME->content[strlen(NAME->content) - 1 -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
}
int * l2n2proc_5_svc(name* NAME, struct svc_req *arg2)
{
	char last[3];
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = NAME->content[strlen(NAME->content) - 1 -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
}
int * l2n3proc_6_svc(name* NAME, struct svc_req *arg2)
{
	char last[3];
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = NAME->content[strlen(NAME->content) - 1 -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
}
int * l2n4proc_7_svc(name* NAME, struct svc_req *arg2)
{
	char last[3];
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = NAME->content[strlen(NAME->content) - 1 -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
}