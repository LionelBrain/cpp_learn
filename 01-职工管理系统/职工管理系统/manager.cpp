#include <iostream>
#include "manager.h"

using namespace std;

// ���캯��
Manager::Manager(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DId = did;
}

// ��ʾ������Ϣ
void Manager::show_info()
{
	cout << "ְ�����: " << this->m_Id
		<< "\tְ������: " << this->m_Name
		<< "\t��λ: " << this->get_dep_name()
		<< "\t��λְ��: �ϴ��´�."
		<< endl;
}

// ��ȡ��λ��Ϣ
string Manager::get_dep_name()
{
	return string("����");
}