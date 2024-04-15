#include "User.h"
#include <iostream>
using namespace std;

//默认构造
User::User()
{
}

//带参构造
User::User(string phoneNum, string pwd, int role, string sfzID, string name)
{
	//属性赋值
	this->name = name;
	this->pwd = pwd;
	this->role = role;
	this->sfzID = sfzID;
	this->phoneNum = phoneNum;
}

//析构
User::~User()
{
}

//获取用户名字
string User::getName()
{
	return this->name;
}
//获取用户密码
string User::getPwd()
{
	return this->pwd;
}
//获取用户角色
int User::getRole()
{
	return this->role;
}
//获取用户身份证号码
string User::getSfzID()
{
	return this->sfzID;
}
//获取用户手机号码
string User::getphoneNum()
{
	return this->phoneNum;
}

//修改用户密码
void User::setPwd(string pwd)
{
	this->pwd = pwd;
}
//修改用户身份证号码
void User::setSfzID(string id)
{
	this->sfzID = id;
}
//修改用户名字
void User::setName(string name)
{
	this->name = name;
}