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
void pointerArg(int &a, int &b);

//告诉系统使用某个命名空间的方法
using namespace std;

namespace companyA {
    int x = 10;
    void function(){
        cout << "companyA" << endl;
    }
}
namespace companyB {
    int y = 200;
    void function(){
        cout << "companyB" << endl;
    }
}

//起别名
namespace companyOtherName {
    void functionOtherName(){
        //命名空间的使用
        int a = 10;
        int &b = a;
        
        b = 20;
        cout << a << endl;
        
        a = 30;
        
        cout << b << endl;
        

    
    }
}

//如何给一个结构体起别名
namespace structOtherName {
    
    typedef struct {
    
        int x;
        int y;
    
    }myStruct;
    
    void functionName(){
        myStruct coord;
        myStruct &structA = coord;
        structA.x = 100;
        structA.y = 20;
        cout << coord.x << endl <<coord.y << endl;
    }
}

//给指针使用引用
namespace otherNameOfPointer {
    
    void pointer_Index(){
    
        int a = 3;
        int *p = &a;
        int *&q = p;
        *q = 5;
        cout << a << endl;
        
    };
    
    
}



void functionOfFirst(){
    //    C++中的输入输出展示
    cout << "请输入一个整数:" << endl;
    int x = 0;
    cin >> x;
    cout << dec << x << endl;
    cout << oct << x << endl;
    cout << hex << x << endl;
    
    cout << "请输入一个布尔值（0或则1）:" << endl;
    bool y = false;
    cin >> y ;
    cout << boolalpha << y;
    
    
}

void functionOfSecond(int &a, int &b);
int main(int argc, const char * argv[]) {
    
//    cout << companyA::x << endl;
//    companyB::function();
//    functionOfFirst();
//    companyOtherName::functionOtherName();
//    structOtherName::functionName();
//    otherNameOfPointer::pointer_Index();
    int a = 200;
    int b = 100;
    functionOfSecond(a, b);
    
    return 0;
}

//给函数参数使用引用
void functionOfSecond(int &a, int &b){
    
    int c = 0;
    c = a;
    a = b;
    b = c;
    
    cout << a << endl << b <<endl ;
}
