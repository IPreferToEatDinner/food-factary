#include"class.h"
#include"getcount.h"
#include <iostream>
#include<iomanip>
using namespace std;

//���������Ϊ����
void showtotal(LINKHEAD head)
{
	Polynomial* p = head->next;//����Ԫ�ڵ㿪ʼ��Ծ
	int count = getcount(head);
	int i = 1;
	while (p != nullptr)
	{
		printf("\t%dx^%d\t", p->k, p->exp);
		if(i<count)
		{
			printf("+");
			i++;
		}
		p = p->next;
	}
}