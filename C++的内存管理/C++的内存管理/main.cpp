//
//  main.cpp
//  C++的内存管理
//
//  Created by 黄来峰 on 2017/4/3.
//  Copyright © 2017年 com.gmw.love. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
using namespace std;
void funcTionA();
void funcTionB();
void funcTionC();
void funcTionD();
int main(int argc, const char * argv[]) {
    funcTionA();
    funcTionB();
    funcTionC();
    return 0;
}

    //内存申请的示例
//================================


void funcTionA(){
 //申请整型内存
    int *p = new int(20);//申请内存并初始化
    cout << *p <<endl;
    //申请内存是有风险的
    if (NULL == p) {
        //处理的逻辑代码
    }
    delete p;
    p = NULL;

}
void funcTionB(){
    int *p = new int;
    //申请内存是有风险的
    if (NULL == p) {
        //处理的逻辑代码
    }

    *p =30;
    cout << *p <<endl;
    delete p;
    p = NULL;
    
}
void funcTionC(){
    int *p = new int[1000];
    if (NULL == p) {
    //处理相关的逻辑
        
        
    }
    p[0] = 100;
    p[1] = 1000;
    cout << p[0] << "," <<p[1] << endl;
    //释放内存的时候也要注意匹配
    delete []p;//注意此处在释放的时候要把【】带上，否侧只会释放P[0]的内存，其余的都不会得到释放
    p = NULL;//注意是防止真的时候一定要注意类型一致，其次是要将指针置为NULL来避免错误，注意new和delete要配套使用
}

void funcTionD(){
    
    
}
