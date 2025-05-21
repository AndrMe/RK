#include "abstrfactory.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>


TEST(factory, SqlserverUser)
{
    SqlserverUser user;
    testing::internal::CaptureStdout();
    user.insert();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("Insert user data into sqlserver\n", output);
}

TEST(factory, MysqlUser)
{
    MysqlUser user;
    testing::internal::CaptureStdout();
    user.getUser();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("Get user information from mysql\n", output);
}

TEST(factory, SqlserverDepartment)
{
    SqlserverDepartment dep;
    testing::internal::CaptureStdout();
    dep.getDepartment();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("Get department information from sqlserver\n", output);
}

TEST(factory, MysqlDepartment)
{
    MysqlDepartment dep;
    testing::internal::CaptureStdout();
    dep.getDepartment();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("Get department information from mysql\n", output);
}

TEST(factory, factoryPrint)
{
    Factory * fac;
    fac = new SqlserverFactory();

    testing::internal::CaptureStdout();
    fac->factoryPrint();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ("factory\n", output);
}


TEST(factory, SqlserverFactory)
{
    Factory *fac;
    fac = new SqlserverFactory();

    IUser *usr = fac->createUser();
    IUser *usr2 = new SqlserverUser(); // checking id created proper type
    EXPECT_EQ(typeid(*usr).name(), typeid(*usr2).name());
}


TEST(factory, MysqlFactory)
{
    Factory *fac;
    fac = new MysqlFactory();

    IDepartment *dep = fac->createDepartment();
    IDepartment *dep2 = new MysqlDepartment(); // checking id created proper type
    EXPECT_EQ(typeid(*dep).name(), typeid(*dep2).name());
}

