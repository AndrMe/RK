
#include<iostream>
#include<string>

using namespace std;

class IUser{
    public:
        virtual void insert() = 0;
        virtual void getUser() = 0;
        virtual ~IUser();
    };

class SqlserverUser : public IUser{
public:
    virtual void insert();
    virtual void getUser();
    virtual ~SqlserverUser();
};

class MysqlUser : public IUser{
public:
    virtual void insert();
    virtual void getUser();
    virtual ~MysqlUser();
};

class IDepartment{
public:
    virtual void insert() = 0;
    virtual void getDepartment() = 0;
    virtual ~IDepartment();
};
class SqlserverDepartment : public IDepartment{
public:
    virtual void insert();
    virtual void getDepartment();
    virtual ~SqlserverDepartment();
};
class MysqlDepartment : public IDepartment{
public:
    virtual void insert();
    virtual void getDepartment();
    virtual ~MysqlDepartment();
};
// Abstract Factory 
class Factory{
public:
    void factoryPrint();
    virtual IUser* createUser() = 0;
    virtual IDepartment* createDepartment() = 0;
    virtual ~Factory();
};
class SqlserverFactory : public Factory{
public:
    virtual IUser* createUser();
    virtual IDepartment* createDepartment();
    virtual ~SqlserverFactory();
};
class MysqlFactory : public Factory{
public:
    virtual IUser* createUser();
    virtual IDepartment* createDepartment();
    virtual ~MysqlFactory();
};