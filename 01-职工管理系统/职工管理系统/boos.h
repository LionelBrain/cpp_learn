// �ϰ�ͷ�ļ�
#pragma once
#include <iostream>
#include "worker.h"
using namespace std;

class Boos : public Worker
{
public:
	// ���캯��
	Boos(int id, string name, int did);

	// ��ʾ������Ϣ
	virtual void show_info();

	// ��ȡ��λ��Ϣ
	virtual string get_dep_name();
};
#pragma once
