// LibraryManageSystem.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <cstring>
#include <conio.h>

#include "AccountList.h"
using namespace std;

const char * DATA_FILE_NAME = "data.txt";
int main()
{
	AccountList aList(DATA_FILE_NAME);
	
	return 0;
}
char menu()
{
	cout << "图书馆管理系统\n" << endl;
	cout << "请输入序号选择要使用的功能：\n" << endl;
	cout << "A.借书\n" << endl;
	cout << "B.还书\n" << endl;
	cout << "C.借阅查询\n" << endl;
	cout << "D.查询图书\n" << endl;
	char cmd =getch();
	switch (cmd)
	{
	case 'A':case 'a'://借书

		break;
	case 'B':case 'b'://还书

		break;
	case 'C':case 'c'://借阅查询

		break;
	case 'D':case 'd'://查询图书

		break;
	default:
		break;
	}
	return cmd;
}
