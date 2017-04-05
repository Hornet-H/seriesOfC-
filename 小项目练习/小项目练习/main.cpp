//
//  main.cpp
//  小项目练习
//
//  Created by 黄来峰 on 2017/4/5.
//  Copyright © 2017年 com.gmw.love. All rights reserved.
/*
 
 题目描述：
 1、提示用户输入姓名
 2、接受用户的输入
 3、然后像用问好
 4、告诉用户名字的长度
 5、告诉用户名字的首字母是什么
 6、如果用户直接输入回车，那么告诉用户的输入为空
 7、如果用户的输入为imooc，那么告诉用户额角色是一个管理员
 
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string name;
    cout << "请输入您的姓名" << endl;
    getline(cin, name);
    if (name.empty()) {
        cout << "您输入的为空请重新输入" << endl;
    }
    if (name == "imooc") {
        cout << "您是一个管理员" << endl;
    }
    cout << "hello" + name << endl;
    
    cout << "你名字的长度是:" << name.size() << endl;
    cout << " 您名字的首字母是:" << name[0] <<endl;
    return 0;
}
