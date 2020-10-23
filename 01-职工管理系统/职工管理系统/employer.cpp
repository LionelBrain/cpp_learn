#include <iostream>
#include "employer.h"

using namespace std;

// 构造函数
Employer::Employer(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DId = did;
}

// 显示个人信息
void Employer::show_info()
{
	cout << "职工编号: " << this->m_Id
		<< "\t职工姓名: " << this->m_Name
		<< "\t岗位: " << this->get_dep_name()
		<< "\t岗位职责: 完成经理安排的任务."
		<< endl;
}

// 获取岗位信息
string Employer::get_dep_name()
{
	return string("员工");
}