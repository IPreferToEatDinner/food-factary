#include"class.h"
#include <iostream>
using namespace std;

void clean(LINKHEAD head)
{
	Polynomial* p = head->next;
	
	//���Ǽ򵥵����������Ծ
	while (p != nullptr)
	{
		p->exp = 0;
		p->k = 0;
		p = p->next;//��һ�ε���Ծ��������
	}

}