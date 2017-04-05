//
//  main.cpp
//  同文件和不同文件的类外定义
//
//  Created by 黄来峰 on 2017/4/5.
//  Copyright © 2017年 com.gmw.love. All rights reserved.
//

#include <iostream>
#include "HFTeacher.hpp"

#include <stdlib.h>
#include <string.h>
using namespace std;

class Teacter{

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

void Teacter::setName(string _Name){
    
    m_strName = _Name;
}
void Teacter::setGender(string _Gender){
    m_strGender = _Gender;
}
void Teacter:: setAge(int _Age){
    m_Age = _Age;
}

string Teacter:: getName(){
    return m_strName;
}
string Teacter:: getGender(){
    return m_strGender;
}
int Teacter:: getAge(){
    return m_Age;
}

void Teacter::teach(){

    cout << "同类文件中的类外定义" << endl;
}


void testFounction();
void testFounction2();
int main(int argc, const char * argv[]) {
    
    testFounction2();
    
       return 0;
}

void testFounction(){
    //初始化；--栈区的初始化
    Teacter teacter;
    teacter.setName("张三");
    teacter.setGender("男");
    teacter.setAge(40);
    
    cout << teacter.getName() << " " << teacter.getGender() << " " << teacter.getAge() << endl;
    
    //堆区的初始化
    
    Teacter *teacter1 = new Teacter();
    teacter1->setName("李四");
    teacter1->setGender("男");
    teacter1->setAge(25);
    
    cout << teacter1->getName() << " " << teacter1->getGender() << " " << teacter1->getAge() << endl;

}

void testFounction2(){
    HFTeacter teacher;
    teacher.setName("大黄蜂");
    teacher.setGender("男");
    teacher.setAge(28);
    
    cout << teacher.getName() << " " << teacher.getGender() << " " << teacher.getAge() << endl;

}
