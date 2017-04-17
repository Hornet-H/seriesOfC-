//
//  HFTeachter.cpp
//  C++中构造函数的初始化列表
//
//  Created by 黄来峰 on 2017/4/17.
//  Copyright © 2017年 com.gmw.love. All rights reserved.
//

#include "HFTeachter.hpp"

HFteacher::HFteacher(string strName,int age,int m):m_strName(strName),m_iAge(age),m_iMax(m)
{
   cout << "HFTeacter(string name,int age)" << endl;
    

}

HFteacher:: HFteacher(const HFteacher  &tea,int m):m_iMax(m)
{
    cout << "HFteacher(HFteacher const &tea,int m)" << endl;

}

 void HFteacher::setName(string name){
     m_strName = name;

}

string HFteacher::getName(){
    return m_strName;
}

void HFteacher::  setAge(int age){
    age = m_iAge;

}
int HFteacher::  getAge(){
    return m_iAge;
}
int HFteacher::getMax(){
    return m_iMax;
}

