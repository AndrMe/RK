#include "abstrfactory.hpp"

void SqlserverUser::insert()
{
    cout<<"Insert user data into sqlserver"<<endl;
}

void SqlserverUser::getUser()
{
    cout<<"Get user information from sqlserver"<<endl;
}

SqlserverUser::~SqlserverUser()
{
}

void MysqlUser::insert()
{
    cout<<"Insert user data into mysql"<<endl;
}

void MysqlUser::getUser()
{
    cout<<"Get user information from mysql"<<endl;
}

IDepartment::~IDepartment()
{

}

void SqlserverDepartment::insert()
{
    cout<<"Insert department information into sqlserver"<<endl;
}

void SqlserverDepartment::getDepartment()
{
    cout<<"Get department information from sqlserver"<<endl;
}

SqlserverDepartment::~SqlserverDepartment()
{
}

void MysqlDepartment::insert()
{
    cout<<"Insert department information into mysql"<<endl;
}

void MysqlDepartment::getDepartment()
{
    cout<<"Get department information from mysql"<<endl;
}

MysqlDepartment::~MysqlDepartment()
{
}

void Factory::factoryPrint()
{
    cout<<"factory"<<endl;
}

Factory::~Factory()
{

}