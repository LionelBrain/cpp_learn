#include <iostream>
#include "boos.h"

using namespace std;

// ���캯��
Boos::Boos(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DId = did;
}

// ��ʾ������Ϣ
void Boos::show_info()
{
	cout << "ְ�����: " << this->m_Id
		<< "\tְ������: " << this->m_Name
		<< "\t��λ: " << this->get_dep_name()
		<< "\t��λְ��: ����˾���ճ�����."
		<< endl;
}

// ��ȡ��λ��Ϣ
string Boos::get_dep_name()
{
	return string("�ܲ�");
}