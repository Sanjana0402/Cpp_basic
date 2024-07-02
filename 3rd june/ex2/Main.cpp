#include <iostream>
#include "Student.h"

// 101, "Harshit", 28, StudentType::REGULAR | 102, "Ajay", 29, StudentType::REGULAR|103, "Rohan", 27, StudentType::INTERN
//^
//|
// arr

void CreateStackObjects(Student* arr)
{
    // fill up the array with new data
    arr[0] = Student( "Harshit",101, 28, StudentType::REGULAR);
    arr[1] = Student( "Ajay",102, 29, StudentType::REGULAR);
    arr[2] = Student("Rohan",103, 27, StudentType::INTERN);
}
/*
    104, "Ritika", 26, StudentType::TRANSFER
    0x100H
    ^                            105, "Pooja", 36, StudentType::REGULAR
    |                            0x98H
    |                            ^
    |                            |        106, "Aishwarya", 29, StudentType::INTERN
    |                                    0x654H
    |                                    ^            107, "Ketan", 36, StudentType::TRANSFER
    |                                    |            0x11H
    |                                                    ^
    |                                                    |

    [    0x100H       |     0x98H      |  0x65H     |   0x11H                     ]

    ^
    |
    arr
*/

Student **CreateHeapObjects(Student **arr)
{
    arr[0] = new Student( "Ritika",104, 26, StudentType::TRANSFER);
    arr[1] = new Student( "Pooja",105, 36, StudentType::REGULAR);
    arr[2] = new Student( "Aishwarya", 106,29, StudentType::INTERN);
    arr[3] = new Student( "Ketan",107, 36, StudentType::TRANSFER);
    return arr;
}

void DeleteHeapObjects(Student **arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        delete arr[i]; // delete the treasure at each point
    }

    /////////////////// delete arr;
}

// for heap objects
void DemonstrateExamFeesCalculation(Student **arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Category for student fees for student " << arr[i]->ApplicableExamFees() << "\n";
    }
}

// for stack objects
void DemonstrateExamFeesCalculation(Student *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Category for student fees for student " << arr[i].ApplicableExamFees() << "\n";
    }
}

int main()
{

    // make an initial array here
    Student stack_students[3];

    // an initial array to store 4 pointers of type Student
    Student *heap_students[4];

    CreateStackObjects(stack_students);
    CreateHeapObjects(heap_students); // pass initial array
    DemonstrateExamFeesCalculation(stack_students, 3);
    DemonstrateExamFeesCalculation(heap_students,4);
    DeleteHeapObjects(heap_students,4);
}