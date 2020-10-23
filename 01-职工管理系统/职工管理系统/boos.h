// 老板头文件
#pragma once
#include <iostream>
#include "worker.h"
using namespace std;

class Boos : public Worker
{
public:
	// 构造函数
	Boos(int id, string name, int did);

	// 显示个人信息
	virtual void show_info();

	// 获取岗位信息
	virtual string get_dep_name();
};
#pragma once
