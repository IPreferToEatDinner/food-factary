#include"class.h"
#include"conformity.h"
#include <iostream>
using namespace std;


//�������û��ʲô���ɣ���ֻ�ǽ������֮��������
void add(LINKHEAD ahead, LINKHEAD bhead)
{
	Polynomial* point = ahead;
	while (point->next != nullptr)
	{
		point = point->next;
	}
	point->next = bhead->next;
	delete bhead;

	conformity(ahead);
}