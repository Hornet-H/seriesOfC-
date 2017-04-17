//
//  main.cpp
//  C++中构造函数的初始化列表
//
//  Created by 黄来峰 on 2017/4/5.
//  Copyright © 2017年 com.gmw.love. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include "HFTeachter.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    cout << "Hello, World!\n";
    
    HFteacher teacher1 = HFteacher("huanglaifeng",26,190);
    HFteacher teacher2 ;
    HFteacher teacher3 = teacher1;
    HFteacher teacher4 = HFteacher(teacher2, 10);
//    cout << teacher1.getName() << " " <<teacher1.getAge() << " " << teacher1.getMax() << endl;
    return 0;
}
