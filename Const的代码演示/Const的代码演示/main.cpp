//
//  main.cpp
//  Const的代码演示
//
//  Created by 黄来峰 on 2017/4/2.
//  Copyright © 2017年 com.gmw.love. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

void constFunctionTest();
void constFunctionTest1();
void constFunctionTest2();
void constFunctionTest3();
void constFounctionTest4();
void constFounctionTest5();
int main(int argc, const char * argv[]) {
    // insert code here...
   
//    constFuntionTest();
//    constFuntionTest2();
//    constFunctionTest3();
//    constFounctionTest4();
    constFounctionTest5();
    
    return 0;
}

void constFunctionTest1(){

    const int x = 3;
//    x = 5; 注意使用const修饰的变量就变成了一个常量是无法赋值的，编译器会报错这种方式就类似与#define x 3 定义的一个宏;这种方式的好处是它是由类型的，变异的时候会检查语法是否错误

}

void constFunctionTest2(){
    int x = 3;
    int const *p = &x;
//    *p = 5;//这种方式是无法进行赋值的，原因很简单使用const修饰后*p就成了常量指针，无法进行赋值但是下面这种是可行的
    x = 5;
    cout << *p << endl;
}

void constFunctionTest3(){
    
    int x = 8;
    int y = 10;
    //这种方式是可以改变指针的指向的
    int const *p = &x;
    
    cout << *p << endl;
    p = &y;
    
    cout << *p <<endl ;
    
}

void constFounctionTest4(){
    int x = 100;
    int y = 200;
    
    int *const p  = &x;
/*    下面这种方式编译器会报错，原因很简单已经将指针指向x，就无法再指向其他位子
    p = &y;
*/
//    下面这种方式是支持的
    *p = 20;
    cout << x << endl;
    x= 100;
    cout << *p <<endl;
}

void constFounctionTest5(){
    int x= 120;
    int y = 60;
    
    int const &z = x;
//    上面这种方式z是无法在单独拿出来赋值的，原因很简单，用const修饰后它就变成了常量无法在进行赋值操作
//    z = 100;
    x = 68;
    cout << z <<endl;
}
