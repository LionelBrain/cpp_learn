#pragma once
#include <iostream>
#include <string>

using namespace std;

// 职工抽象类
class Worker
{
public:

	// 职工编号
	int m_Id;

	// 职工姓名
	string m_Name;

	// 部门编号
	int m_DId;

	// 显示个人信息
	virtual void show_info() = 0;

	// 获取岗位信息
	virtual string get_dep_name() = 0;
};