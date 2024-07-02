#ifndef STUDENT_H
#define STUDENT_H

#include "StudentType.h"
#include "ExamFees.h"
#include <iostream>


class Student
{
private:
    /* data */
    std::string m_student_name;
    unsigned int m_studID;
    unsigned short m_studAge;
    StudentType m_studType;
public:
    Student(std::string student_name, unsigned int studID, unsigned short studAge,StudentType studType);


    //default constructor
    Student();

    ~Student() ;

    ExamFees ApplicableExamFees();
};


#endif // STUDENT_H
