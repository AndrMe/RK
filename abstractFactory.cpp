/*************************************************************************
> File Name: abstractFactory_DB.cpp
> Author: CarlSun
> Mail:sunxiuyang04@gmail.com 
> Created Time: Sun Aug  7 17:14:02 2016
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(){
	Factory* factory = new SqlserverFactory();
//	Factory* factory = new MysqlFactory();
	IUser* iu = factory->createUser();
	iu->insert();
	iu->getUser();

	IDepartment* id = factory->createDepartment();
	id->insert();
	id->getDepartment();
	delete iu;
	delete factory;
	delete id;
}
