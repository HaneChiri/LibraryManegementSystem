// LibraryManageSystem.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <cstring>

#include "AccountList.h"
using namespace std;

const char * DATA_FILE_NAME = "data.txt";
int main()
{
	AccountList l(DATA_FILE_NAME);
	l.displayList();
	l.signIn();
	l.displayList();
	l.saveData();
	return 0;
}

