#include<rpc/rpc.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "name.h"

// int * nameproc_1(name* NAME, CLIENT* arg2)
// {
// 	static int result;
// 	printf("%s\n", NAME->content);
// 	FILE *fptr = fopen("list.txt", "r");
// 	int i =0;
// 	char * line = NULL;
//     size_t len = 0;
//     char entry[80][10];
// 	while ((getline(&line, &len, fptr)) != -1) {
//         int l = strlen(line);
//         if (line[l-1] == '\n')
//         	l--;
//         strncpy(entry[i], line, l);
//     	i++;
//     }
// 	fclose(fptr);
// 	char name[64][5];
// 	int marks[5];
// 	for(i=0; i<5;i++)
// 		strncpy(name[i], entry[2*i], 64);
// 	for(i=0; i<5;i++)
// 		marks[i] = atoi(entry[2*i+1]);
// 	int listIndex = 0;
// 	for(i=0; i<5;i++)
// 		if (strcmp(name[i], NAME->content)==0){
// 			listIndex = i;
// 			break;
// 		}
// 	result = marks[listIndex];
// 	return (&result);
// }

int * nameproc_1(name* NAME, CLIENT* arg2)
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

int * nameproc_1_svc(name* NAME, struct svc_req *arg2)
{
	char last[3];
	printf("5\n");
	int res;
	int* result = &res;
	for(int i = 3; i>0; i--)
		last[3 -i] = NAME->content[strlen(NAME->content) - 1 -i];
	// strncpy(last, NAME->content, 3);
	if (strcmp(last, "com") == 0)
		res = 2; 
	if (strcmp(last, ".in") == 0)
		res = 3;
	if (strcmp(last, "edu") == 0)
		res = 4;
	printf("%s\n", last);
	return result;
	// static char result[15];
	// printf("%s\n", NAME->content);
	// FILE *fptr = fopen("list.txt", "r");
	// int i =0;
	// char * line = NULL;
 //    size_t len = 0;
 //    char entry[80][10];
	// while ((getline(&line, &len, fptr)) != -1) {
 //        int l = strlen(line);
 //        if (line[l-1] == '\n')
 //        	l--;
 //        strncpy(entry[i], line, l);
 //    	i++;
 //    }
	// fclose(fptr);
	// char name[64][5];
	// char ip[15][5];
	// for(i=0; i<5;i++){
	// 	strncpy(name[i], entry[2*i], 64);
	// 	// printf("%s\n", name[i]);
	// }
	// for(i=0; i<5;i++)
	// 	strncpy(ip[i], entry[2*i+1], 15);
	// int listIndex = 0;
	// char temp[15];
	// strncpy(temp, NAME->content, 15	);
	// for(i=0; i<5;i++)
	// 	if (strcmp(temp, name[i]) == 0){
	// 		printf("%s\n", name[i]);
	// 		listIndex = i;
	// 		strcpy(result, ip[listIndex]);
	// 		printf("%s\n", result);
	// 		break;
	// 	}
	// // if (strcmp(temp, "meet") == 0)
	// // 	result = 14115138;
	// // else if (strcmp(temp, "nikhil") == 0)
	// // 	result = 14114031;
	// // else if (strcmp(temp, "aashaka")== 0)
	// // 	result = 14114001;
	// // else
	// // 	result = 14114025;
	return (result);
}

int * l1n1proc_2_svc(name* NAME, struct svc_req *arg2)
{
	static char result[15];
	printf("%s\n", NAME->content);
	FILE *fptr = fopen("list.txt", "r");
	int i =0;
	char * line = NULL;
    size_t len = 0;
    char entry[80][10];
	while ((getline(&line, &len, fptr)) != -1) {
        int l = strlen(line);
        if (line[l-1] == '\n')
        	l--;
        strncpy(entry[i], line, l);
    	i++;
    }
	fclose(fptr);
	char name[64][5];
	char ip[15][5];
	for(i=0; i<5;i++){
		strncpy(name[i], entry[2*i], 64);
		// printf("%s\n", name[i]);
	}
	for(i=0; i<5;i++)
		strncpy(ip[i], entry[2*i+1], 15);
	int listIndex = 0;
	char temp[15];
	strncpy(temp, NAME->content, 15	);
	for(i=0; i<5;i++)
		if (strcmp(temp, name[i]) == 0){
			printf("%s\n", name[i]);
			listIndex = i;
			strcpy(result, ip[listIndex]);
			printf("%s\n", result);
			break;
		}
	// if (strcmp(temp, "meet") == 0)
	// 	result = 14115138;
	// else if (strcmp(temp, "nikhil") == 0)
	// 	result = 14114031;
	// else if (strcmp(temp, "aashaka")== 0)
	// 	result = 14114001;
	// else
	// 	result = 14114025;
	return (result);
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