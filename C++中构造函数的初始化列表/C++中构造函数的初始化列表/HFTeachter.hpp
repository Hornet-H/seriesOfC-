//
//  HFTeachter.hpp
//  C++中构造函数的初始化列表
//
//  Created by 黄来峰 on 2017/4/17.
//  Copyright © 2017年 com.gmw.love. All rights reserved.
//

#ifndef HFTeachter_hpp
#define HFTeachter_hpp
#include <iostream>
#include <stdlib.h>
#include <string.h>

#endif /* HFTeachter_hpp */

using namespace std;
class HFteacher{
    
public:
    HFteacher(string name = "jim",int age = 11,int m = 100);
    //拷贝构造函数
    HFteacher(const HFteacher  &tea,int m);
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();
    int getMax();
    
private:
    string m_strName;
    int m_iAge;
    const int m_iMax;
};
