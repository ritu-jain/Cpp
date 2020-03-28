#include <iostream>

using namespace std;
class Marks
{
private:
    int rno;
    float prec;
public:
    Marks()
    {
        rno=0;
        prec=0.0f;
    }
    void getMarks(int rno,float prec)
    {
        this->rno=rno;
        this->prec=prec;
    }
    void showMarks()
    {
        cout<<"Roll no: "<<rno<<endl;
        cout<<"Percentage: "<<prec<<"%"<<endl;
    }
};
class student
{
private:
    Marks obj;
    char name[30];
public:
    void getStudent(int roll,float perc)
    {
        cout<<"Enter name: "<<endl;
        cin>>name;
        obj.getMarks(roll,perc);

    }
    void showStudent()
    {
        cout<<"Name: "<<name<<endl;
        obj.showMarks();
    }
};
int main()
{

    student s;
    int roll;
    float perc;
    cout<<"Enter roll no:"<<endl;
    cin>>roll;
    cout<<"Enter percentage: "<<endl;
    cin>>perc;

    s.getStudent(roll,perc);
    s.showStudent();

    return 0;
}
