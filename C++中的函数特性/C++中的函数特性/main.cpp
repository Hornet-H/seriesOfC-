//
//  main.cpp
//  C++中的函数特性
//
//  Created by 黄来峰 on 2017/4/3.
//  Copyright © 2017年 com.gmw.love. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

//声明
void funcTionOfDefaultValue(int x = 10,int y = 20,int z = 30);
void funcTionOfDefaultValue(double x ,double y = 5.3, double z = 6.5 );
int main(int argc, const char * argv[]) {
//    --------------------函数默认值部分
//    funcTionOfDefaultValue();
    funcTionOfDefaultValue(100);
    funcTionOfDefaultValue(150,200);
    funcTionOfDefaultValue(300,400,500);
//    -----------------------
    funcTionOfDefaultValue(1.2,1.3);
//    ------------------函数重载部分
   
    
//    ======
    return 0;
}

void funcTionOfDefaultValue(double x,double y, double z){
    cout << x << "," << y << "," << z << endl ;

}

void funcTionOfDefaultValue(int i,int j,int k){

    cout << i << "," << j << "," << k << endl ;
}
