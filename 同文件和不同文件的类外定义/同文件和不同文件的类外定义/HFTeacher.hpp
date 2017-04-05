//
//  HFTeacher.hpp
//  同文件和不同文件的类外定义
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
