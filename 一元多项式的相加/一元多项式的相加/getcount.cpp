#include"class.h"
#include <iostream>
using namespace std;


//����һ���򵥵ļ��������ĺ���
int getcount(LINKHEAD head)
{
	int count = 0;
	Polynomial* p = head;
	p = p->next;
	while (p != nullptr)
	{
		count++;
		p = p->next;
	}
	return count;
}