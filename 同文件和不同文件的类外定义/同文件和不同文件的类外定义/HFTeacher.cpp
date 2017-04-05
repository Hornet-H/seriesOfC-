//
//  HFTeacher.cpp
//  同文件和不同文件的类外定义
//
//  Created by 黄来峰 on 2017/4/5.
//  Copyright © 2017年 com.gmw.love. All rights reserved.
//

#include "HFTeacher.hpp"

void HFTeacter::setName(string _Name){
    
    m_strName = _Name;
}
void HFTeacter::setGender(string _Gender){
    m_strGender = _Gender;
}
void HFTeacter:: setAge(int _Age){
    m_Age = _Age;
}

string HFTeacter:: getName(){
    return m_strName;
}
string HFTeacter:: getGender(){
    return m_strGender;
}
int HFTeacter:: getAge(){
    return m_Age;
}

void HFTeacter::teach(){
    
    cout << "同类文件中的类外定义" << endl;
}

