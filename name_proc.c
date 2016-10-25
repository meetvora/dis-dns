#include<rpc/rpc.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "name.h"

int * nodeproc_1_svc(domain* DOM, struct svc_req *arg2)
{
	char last[3];
	static int res;
	for(int i = 3; i>0; i--)
		last[3 -i] = DOM->content[strlen(DOM->content) -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "org") == 0)
		res = 4;
	if (strcmp(last, "net") == 0)
		res = 5;
	printf("%s\n", last);
	return &res;
}

domain * nodeproc_2_svc(domain* DOM, struct svc_req *arg2)
{
	FILE * fp;
	char * line = NULL; //Contains line read from file
	size_t len = 0; //Buffer Size, Initially set to zero.(Still working. :p)
	ssize_t read; //Contains the number of characters read from a line
	char res[15];  //Contains the ip
	char required[50];  //Contains the domain domain
	char *ddomain;  //Used for locating given substring in line
	int found = 0; //equals true if domain domain in text file

	strcpy(required, DOM->content);
	fp = fopen("com.txt", "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);

	while ((read = getline(&line, &len, fp)) != -1){
		char *ddomain = strstr(line,required);
		if(ddomain){
			found = 1;
			break;
		}
	}

	if(found)
		strcpy(res,line+strlen(required)+1);

	fclose(fp);	
	struct domain *response = (struct domain*)malloc(sizeof(struct domain));
	strcpy(response->content, res);	
	return response;
}

int * nodeproc_3_svc(domain* DOM, struct svc_req *arg2)
{
	char last[3];
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = DOM->content[strlen(DOM->content) - 1 -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
}
int * nodeproc_4_svc(domain* DOM, struct svc_req *arg2)
{
	char last[3];
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = DOM->content[strlen(DOM->content) - 1 -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
}
int * nodeproc_5_svc(domain* DOM, struct svc_req *arg2)
{
	char last[3];
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = DOM->content[strlen(DOM->content) - 1 -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
}
int * nodeproc_6_svc(domain* DOM, struct svc_req *arg2)
{
	char last[3];
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = DOM->content[strlen(DOM->content) - 1 -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
}
int * nodeproc_7_svc(domain* DOM, struct svc_req *arg2)
{
	char last[3];
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = DOM->content[strlen(DOM->content) - 1 -i];
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
}
