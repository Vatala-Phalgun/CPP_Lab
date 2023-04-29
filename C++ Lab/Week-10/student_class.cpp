#include<iostream>
using namespace std;

class Student
{
    protected:
    int roll_number;
    public:
    void get_number(int a)
    {
        roll_number = a;
    }
    void put_number(void)
    {
        cout<<"Roll No:"<<roll_number<<"\n";
    }
};

class Test : public Student
{
    protected:
    float part1, part2;

    public:
    void get_marks(float x, float y)
    {
        part1 = x; part2 = y;
    }
    void put_marks(void)
    {
        cout<<"Marks obtained"<<"\n"<<"part1 ="<<part1<<"\n"<<"part2 ="<<part2<<"\n";
    }
};

class Sports
{
    protected:
    float score;
    public:
    void get_score(float s)
    {
        score = s;
     }
    void put_score(void)
    {
        cout<<"Sports wt:"<<score<<"\n\n";
    }
};

class Result : public Test, public Sports
{
    float total;
    public:
    void display(void);
};

void Result ::display(void)
{
    total = part1 + part2 + score;
    put_number();
    put_marks();
    put_score();
    cout<<"Total Score:"<<total<<"\n";
}

int main()
{
    Result student_1;
    int num;
    float m1,m2;
    float s;
    cin>>num>>m1>>m2>>s;
    student_1.get_number (num);
    student_1.get_marks (m1, m2);
    student_1.get_score (s);
    student_1.display ();
    return 0;
}