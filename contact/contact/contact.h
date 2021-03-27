#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#include<errno.h>
#define pep_max 3

enum choice
{
	EXIT,
	ADD,
	DEL,
	QUE,
	MOD,
	SHO,
	QOR
};

struct person
{
	char name[20];
	int age;
	char sex[5];
	char tel[15];
	char addr[30];
};

struct contact
{
	struct person *arr;
	int sz;
	int capacity;
};
void menu();
void InitContact(struct contact*p);
void SaveContact(struct contact*p);
void AddContact(struct contact*p);
void DelContact(struct contact*p);
void QueContact(struct contact*p);
void ModContact(struct contact*p);
void QorContact(struct contact*p);
void Show(struct contact*p);


