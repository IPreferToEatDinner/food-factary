#include"class.h"
#include <iostream>
using namespace std;

void killtotal(LINKHEAD head)
{
	//������˫ָ�����ͷ��ڴ�
	Polynomial* former = head->next->next;
	Polynomial* latter = head->next;

	while (former != nullptr)
	{
		delete latter;
		latter = former;
		former = former->next;
	}
	delete latter;//β������һ�£����ѭ�����Ǻ�����
	head->next = nullptr;
}