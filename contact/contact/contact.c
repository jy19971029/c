#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void menu()
{
	printf("**********************\n");
	printf("*****1 ADD  2 DEL*****\n");
	printf("*****3 QUE  4 MOD*****\n");
	printf("*****5 SHO  6 QOR*****\n");
	printf("*****   0 EXIT   *****\n");
	printf("**********************\n");
}
static int CheckCapacity(struct contact*p)
{
	if (p->sz == p->capacity)
	{
		return 1;
	}
	return 0;
}
static void AddCapacity(struct contact*p)
{
	printf("容量不够，增容2个\n");
	p->capacity += 2;
	struct person *ps = (struct person *)realloc(p->arr, (2 + pep_max)*sizeof(struct person));
	if (ps == NULL)
		return;
	else
		p->arr = ps;
}
void InitContact(struct contact*p)
{
	struct person tmp = {0};
	p->arr = (struct person *)malloc(pep_max*sizeof(struct person));
	if (p->arr == NULL)
	{
		return;
	}
	p->sz = 0;
	p->capacity = pep_max;
	FILE*ps = fopen("data.dat", "rb");
	if (ps == NULL)
	{
		printf("contactload:%s\n", strerror(errno));
		return;
	}
	int i = 0;
	while (fread(&tmp, sizeof(struct person), 1, ps))
	{
		if (CheckCapacity(p))
			AddCapacity(p);
		*(p->arr + i) = tmp;
		i++;
		p->sz++;
		
	}
	fclose(ps);
	ps = NULL;

}


void SaveContact(struct contact*p)
{
	FILE* ps = fopen("data.dat","wb");
	if (ps == NULL)
	{
		printf("contactsave:%s\n",strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		fwrite(p->arr+i, sizeof(struct person), 1, ps);
	}
	
	fclose(ps);
	ps = NULL;
}
void AddContact(struct contact*p)
{
	if (CheckCapacity(p))
	{
		AddCapacity(p);
	}

		printf("请输入姓名:>");
		scanf("%s", p->arr[p->sz].name);
		printf("请输入年龄:>");
		scanf("%d", &(p->arr[p->sz].age));
		printf("请输入性别:>");
		scanf("%s", p->arr[p->sz].sex);
		printf("请输入电话:>");
		scanf("%s", p->arr[p->sz].tel);
		printf("请输入地址:>");
		scanf("%s", p->arr[p->sz].addr);
		(p->sz)++;
}
static int FindbyName(struct contact*p)
{
	printf("请输入姓名:>");
	char name[20];
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(name, p->arr[i].name) == 0)
			return i;
		
	}
	return -1;

}
void DelContact(struct contact*p)
{
	if (p->sz == 0)
	{
		printf("通讯录空白，无法删除联系人\n");
	}
	else
	{
		int ret = FindbyName(p);
		if (ret == -1)
			printf("通讯录中没有此人\n");
		else
		{
			int i = 0;
			if (ret == pep_max)
				memset(&(p->arr[pep_max - 1]), 0, sizeof(p->arr[pep_max - 1]));
			else
			{
				for (i = ret; i < pep_max - 1; i++)
				{
					strcpy(p->arr[i].name, p->arr[i+1].name);
					strcpy(p->arr[i].addr, p->arr[i + 1].addr);
					strcpy(p->arr[i].sex, p->arr[i + 1].sex);
					strcpy(p->arr[i].tel, p->arr[i + 1].tel);
					p->arr[i].age = p->arr[i + 1].age;
				}
			}
			(p->sz)--;
		}

	}

}
void QueContact(struct contact*p)
{
	int i = FindbyName(p);
	if (i == -1)
		printf("通讯录中没有此人\n");
	else
	{
		printf("%-20s%-13s%-15s%-15s%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s%-13d%-15s%-15s%-30s\n", p->arr[i].name, p->arr[i].age, p->arr[i].sex, p->arr[i].tel, p->arr[i].addr);
	}
	
}
void ModContact(struct contact*p)
{
	int i = FindbyName(p);
	if (i == -1)
		printf("通讯录中没有此人\n");
	else
	{
		printf("请输入修改的名字:>");
		scanf("%s", p->arr[i].name);
		printf("请输入年龄:>");
		scanf("%d", &(p->arr[i].age));
		printf("请输入性别:>");
		scanf("%s", p->arr[i].sex);
		printf("请输入电话:>");
		scanf("%s", p->arr[i].tel);
		printf("请输入地址:>");
		scanf("%s", p->arr[i].addr);	
	}
}
void QorContact(struct contact*p)
{
	int i = 0;
	for (i = 0; i < p->sz-1; i++)
	{
		int j = 0;
		for (j = 0; j < p->sz -1-i; j++)
		{
			if (p->arr[j].age>p->arr[j + 1].age)
			{
				char exchange[20] = {0};
				int tmp = 0;
				tmp = p->arr[j].age;
				p->arr[j].age = p->arr[j + 1].age;
				p->arr[j + 1] .age= tmp;
				strcpy(exchange,p->arr[j].name);
				strcpy(p->arr[j].name, p->arr[j+1].name);
				strcpy( p->arr[j+1].name,exchange);
				strcpy(exchange, p->arr[j].sex);
				strcpy(p->arr[j].sex, p->arr[j + 1].sex);
				strcpy(p->arr[j + 1].sex, exchange);
				strcpy(exchange, p->arr[j].tel);
				strcpy(p->arr[j].tel, p->arr[j + 1].tel);
				strcpy(p->arr[j + 1].tel, exchange);
				strcpy(exchange, p->arr[j].addr);
				strcpy(p->arr[j].addr, p->arr[j + 1].addr);
				strcpy(p->arr[j + 1].addr, exchange);

			}
		}

	}
	printf("排序成功\n");
}
void Show(struct contact*p)
{
	printf("%-20s%-13s%-15s%-15s%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		printf("%-20s%-13d%-15s%-15s%-30s\n", p->arr[i].name, p->arr[i].age, p->arr[i].sex, p->arr[i].tel, p->arr[i].addr);
	}
}