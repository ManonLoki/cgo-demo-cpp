/*
 * @Author: your name
 * @Date: 2021-05-29 21:21:39
 * @LastEditTime: 2021-05-29 22:51:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /cgo-demo-cpp/src/demo.cc
 */

#include <iostream>
#include "libs/cgo_demo.h"

int main(int argc, char **argv)
{

    std::cout
        << "\r\n----- Call Say Hello ------\r\n"
        << std::endl;

    // 调用SayHello
    SayHello("Manonloki");

    std::cout << "\r\n----- Call  Create User ------\r\n"
              << std::endl;
    // 创建一个User
    auto user = CreateUser("Guest");
    // 输出刚刚的User
    std::cout << "Go Create User -> name:" << user.Name << " age:" << user.Age << std::endl;

    std::cout << "\r\n----- Call Display User ------\r\n"
              << std::endl;
    // 修改刚刚创建的User 用Go输出JSON
    user.Name = "Manonloki";
    user.Age = 32;
    DisplayUser(user);

    std::cout << "\r\n----- Call StartWebServer ------\r\n"
              << std::endl;
    // 启动一个Web服务器
    StartWebServer();
}