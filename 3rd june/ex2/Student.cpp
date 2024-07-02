#include "Student.h"


Student::Student(std::string student_name, unsigned int studID, unsigned short studAge, StudentType studType)
{
    this->m_student_name = student_name;
    this->m_studID = studID;
    this->m_studAge = studAge;
    this->m_studType = studType;
}

Student::Student()
{
    this->m_student_name = "";
    this->m_studID = 0 ;
    this->m_studAge = 0 ;
    this->m_studType = StudentType::REGULAR;
}

Student::~Student()
{
    std::cout << "Studen record for Student with Id : "<< this->m_studID<<" is deleted\n";
}

ExamFees Student::ApplicableExamFees()
{
    ExamFees result = ExamFees::_100;


    if (this->m_studType== StudentType::INTERN) {
        result = ExamFees::_0;
    }

    else if (this->m_studType == StudentType::REGULAR) {
        result = ExamFees::_100;
    }

    else {
        result = ExamFees::_400;
    }

    return result;
}

