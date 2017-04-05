//
//  main.cpp
//  C++中的构造函数的演示
//
//  Created by 黄来峰 on 2017/4/5.
//  Copyright © 2017年 com.gmw.love. All rights reserved.
//

#include <iostream>
#include "HFTeacher.hpp"

int main(void){

    HFTeacter teacher;
    HFTeacter teacher1("大黄蜂",4);
    
    cout << teacher1.getName() << " " << teacher1.getAge() << endl;
    return 0;
}
