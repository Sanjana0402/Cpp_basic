/*
    operator[]
*/
#include<iostream>
#define COUNT 5

enum SensorType{
    TEMPERATURE,
    PRESSURE,
    RAIN_SENSOR,
    LUMINENSE_SENSOR
};

class SensorReading
{
private:
    /* data */
    std::string _readingId;
    float* _arr;//pointer to float values
public:
    SensorReading(std::string id, float* arr) {
        this->_readingId = id;
        this->_arr = arr;
    }
    ~SensorReading() {
        std::cout<<"Id "<<_readingId<<" is deleted\n";
    }

    float operator[](int idx){
        return this->_arr[idx];
    }
};

int main(){
    //every sensor reading contains one string and an array of 5 float values
    float arr[COUNT] = {1.1f,2.98f,34.5f,23.5f,54.5f};

    SensorReading s1("s101",arr); //pass the arr to the constructor

    std::cout<<s1[1]<<"\n"; 
}


/*

    class ReportingManager
    {
         id
        name
        designation
        team_size
    }
       

    class TrainingModule
        { 
          id
          duration_in_days
          assessment_count
        }



    class Talent
       { 
            Name :  std::string
            EmployeeId : unsigned INT
            Training-Track : enum
            Reporting_Manager : ReportingManager
            Training_Module : TrainingModule
            CumulativeGrade : enum Grade (A+,A,B,C,D)
        }
*/