#include<bits/stdc++.h>
using namespace std;
class Teacher{
private:
    double salary;

public: //default Private
    //properties 
    string name;
    string dept;
    string subject;
    

    //methods // member functions
    void ChangeDept(string newDept ){
        dept = newDept;
    }

    //setter
    void setSalary(double s){
        salary=s;
    }

    //getter
    double getSalary(){
        return salary;
    }
};




int main(){
    Teacher t1;
    t1.name="Anmol";
    t1.subject="opps";
    t1.dept="CSE";
    // t1.salary=75000;
    t1.setSalary(75000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;


    return 0;
}