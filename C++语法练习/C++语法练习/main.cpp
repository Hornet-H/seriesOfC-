//
//  main.cpp
//  C++语法练习
//
//  Created by 黄来峰 on 2017/3/30.
//  Copyright © 2017年 com.gmw.love. All rights reserved.
//

#include <iostream>
//导入相关的库
#include <stdlib.h>
//告诉系统使用某个命名空间的方法
using namespace std;

int main(int argc, const char * argv[]) {
    
//    C++中的输入输出展示
    cout << "请输入一个整数:" << endl;
    int x = 0;
    cin >> x;
    cout << dec << x << endl;
    cout << oct << x << endl;
    cout << hex << x << endl;
    
    cout << "请输入一个布尔值（0或则1）:" << endl;
    bool y = false;
    cin >> y;
    cout << boolalpha << y;
    
    return 0;
}
