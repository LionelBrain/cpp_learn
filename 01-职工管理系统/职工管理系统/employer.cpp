#include <iostream>
#include "employer.h"

using namespace std;

// ���캯��
Employer::Employer(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DId = did;
}

// ��ʾ������Ϣ
void Employer::show_info()
{
	cout << "ְ�����: " << this->m_Id
		<< "\tְ������: " << this->m_Name
		<< "\t��λ: " << this->get_dep_name()
		<< "\t��λְ��: ��ɾ����ŵ�����."
		<< endl;
}

// ��ȡ��λ��Ϣ
string Employer::get_dep_name()
{
	return string("Ա��");
}