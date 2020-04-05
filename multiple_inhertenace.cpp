#include <iostream>
#include<cstring>
using namespace std;
class student
{
private:
    int roll;
    char name[30];
    char phn[12];
    char email[50];
public:
    void getStudent(int roll, char name[],char phn[],char email[])
    {
        this->roll=roll;
        strcpy(this->name,name);
        strcpy(this->phn,phn);
        strcpy(this->email,email);
    }
    void showStudent()
    {
        cout<<"==========Basic Info=========="<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Contact: "<<phn<<endl;
        cout<<"E-mail: "<<email<<endl;
    }
};
class academics
{
private:
    float t_marks;
    float percentage;
    char grade;
public:
    void getAcademics(float t_marks)
    {
        this->t_marks=t_marks;
        percentage=(t_marks*100)/500;
        if(percentage>90)
            grade='O';
        else if(percentage>80)
            grade='A';
        else if(percentage>65)
            grade='B';
        else if(percentage>55)
            grade='C';
        else if(percentage>45)
            grade='D';
        else
            grade='E';


    }
    void showAcademics()

    {
        cout<<"==========Academics Details========="<<endl;
        cout<<"Total Marks: "<<t_marks<<endl;
        cout<<"Percentage: "<<percentage<<endl;
        cout<<"Grade: "<<grade<<endl;
        switch(grade)
        {
            case 'O':cout<<"Scholarship=50% of total fee."<<endl;
            break;
             case 'A':cout<<"Scholarship=40% of total fee."<<endl;
            break;
             case 'B':cout<<"Scholarship=30% of total fee."<<endl;
            break;
             case 'C':cout<<"Scholarship=20% of total fee."<<endl;
            break;
             case 'D':cout<<"Scholarship=10% of total fee."<<endl;
            break;
            default:cout<<"No scholarship."<<endl;
        }

    }
};
class fitness :public student,public academics
{
   private:
       float height,weight;
   public:
    void getFitness(float height,float weight)
    {
        this->height=height;
        this->weight=weight;
    }
    void showFitness()
    {
        cout<<"==========Fitness=========="<<endl;
        cout<<"Height: "<<height<<"cm"<<endl;
        cout<<"Weight: "<<weight<<"kg"<<endl;
    }

};

int main()
{
    class fitness fit;
    int roll;
    char name[30],phn[10],email[50];
    float t_marks,height,weight;
    cout<<"enter roll no: ";
    cin>>roll;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter contact: ";
    cin>>phn;
    cout<<"Enter email: ";
    cin>>email;
    do
    {
        cout<<"Enter total marks(less than 500): ";
        cin>>t_marks;
    }while(t_marks>500);
    cout<<"Enter height: ";
    cin>>height;
    cout<<"Enter weight: ";
    cin>>weight;

    fit.getStudent(roll,name,phn,email);
    fit.showStudent();
    fit.getAcademics(t_marks);
    fit.showAcademics();
    fit.getFitness(height,weight);
    fit.showFitness();

    return 0;
}
