//
//  HFTeacher.cpp
//  C++中的构造函数的演示
//
//  Created by 黄来峰 on 2017/4/5.
//  Copyright © 2017年 com.gmw.love. All rights reserved.
//

#include "HFTeacher.hpp"

HFTeacter::HFTeacter(){

    m_strName = "王五";
    m_Age = 12;
    cout << "HFTeacter()" << endl;
}

HFTeacter::HFTeacter(string name,int _age){
    m_strName = name;
    m_Age = _age;
     
    cout << "HFTeacter(string name,int age)" << endl;
}
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

