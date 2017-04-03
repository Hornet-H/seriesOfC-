//
//  main.cpp
//  演示Const在函数中的使用
//
//  Created by 黄来峰 on 2017/4/3.
//  Copyright © 2017年 com.gmw.love. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
using namespace std;


void formalFarameters(int &a,int &b);
void formalFarametersTest(const int &a,const int &b);
int main(int argc, const char * argv[]) {
   
    int x = 100;
    int y = 120;
    formalFarameters(x,y);
    //没有添加const修饰，形参的改变实际上是影响了实参;
    cout << x << ',' << y <<endl;//输出结果是10，5;
    
    formalFarametersTest(10,5);
    return 0;
}


void formalFarameters(int &a,int &b){
    
    a = 10;
    b = 5;
    cout << a << "," << b <<endl;
    
}

//加上const修饰之后这个形式参数变成常量只能给其他变量赋值，自己无法被赋值，否则会报错
void formalFarametersTest(const int &a,const int &b){
    //a = 10l这种方式会报错
    
    int c = 0;
    c = a + b;
    cout << c <<endl;
    
}
