//
//  main.cpp
//  C++中的类-对象-字符串
//
//  Created by 黄来峰 on 2017/4/5.
//  Copyright © 2017年 com.gmw.love. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
using namespace std;


/*
 实例化对象的方式有两种
 1、从栈中实例化对象
 2、从堆中实例化对象
 
 */

class TV
{
    public:
    char name[20];
    int type;
    
    void changeVol();
    void power();
};


int main(int argc, const char * argv[]) {
   
    
    return 0;
}

//从栈中实例化一个对象---注意内存我们不必理睬，内存有系统来进行管理
void instanceObjectInStack(){
    TV tv;//观察下这种方式和下面这种方式的区别
    //访问成员变量及方法
    tv.type = 0;
    tv.changeVol();
    TV tv1[20];
}

//从堆中实例化一个对象---注意1、内存必须自己管理 2、需要做防止为空的操作
void instaceObjectInGlobal(){
    TV *tv = new TV();
    TV *tv1 = new TV[20];
    if (tv == NULL || tv1 == NULL) {
//        failed
        return;
    }
    
    tv->type = 0;
    tv->changeVol();
    tv = NULL;
    delete tv;
    delete[]tv1;

}

