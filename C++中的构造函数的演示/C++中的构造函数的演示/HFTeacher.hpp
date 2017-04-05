//
//  HFTeacher.hpp
//  C++中的构造函数的演示
//
//  Created by 黄来峰 on 2017/4/5.
//  Copyright © 2017年 com.gmw.love. All rights reserved.
//

#ifndef HFTeacher_hpp
#define HFTeacher_hpp

#include <iostream>
#include <stdlib.h>
#include <string.h>

#endif /* HFTeacher_hpp */

using namespace std;

class HFTeacter{
    
public:
    HFTeacter();
    HFTeacter(string name,int age);
    void setName(string _Name);
    string getName();
    
    void setGender(string _Gender);
    string getGender();
    
    void setAge(int _Age);
    int getAge();
    
    void teach();
    
private:
    string m_strName;
    string m_strGender;
    int m_Age;
};
