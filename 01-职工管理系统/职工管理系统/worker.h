#pragma once
#include <iostream>
#include <string>

using namespace std;

// ְ��������
class Worker
{
public:

	// ְ�����
	int m_Id;

	// ְ������
	string m_Name;

	// ���ű��
	int m_DId;

	// ��ʾ������Ϣ
	virtual void show_info() = 0;

	// ��ȡ��λ��Ϣ
	virtual string get_dep_name() = 0;
};