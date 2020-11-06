#include<iostream>
#include<mysql/mysql.h>
#define A 1
int main()
{
    auto mysql = mysql_init(nullptr);
    if (mysql == nullptr)
    {
        perror("fuck you");
        mysql_errno(mysql);
        return -1;
    }
    std::cout << "init ok\n";
    mysql = mysql_real_connect(mysql, "192.168", "keeyu", "123456", "neiron", 0, nullptr, 0);
    if (mysql == nullptr)
    {
        perror("fuck you");
        mysql_errno(mysql);
        return -1;
    }
    std::cout << "connet ok\n";
    int ret = mysql_query(mysql, "select*from neiron");


    return 0;
}