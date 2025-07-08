#include<iostream>
#include<string>
using namespace std;

class person
{
protected:
    string name;
    int age;

public:
    person(string n, int a)
    {
        name = n;
        age = a;

        cout << "Person constructor called" << endl;
    }

    ~person()
    {
        cout << "person destructor" << endl;
    }

    void persondetails()
    {
        cout << name <<"\n"<< age << endl;
    }

    virtual void display()
    {
        cout << name << " " << endl;
    }

};

class student : public person
{
protected:
    int studentId;
public:

    student(string n, int a, int id) : person(n,a)
    {
        studentId = id;
    }

    ~student()
    {
        cout << "student destructor called" << endl;
    }

    void studentdetails()
    {
        persondetails();
        cout << studentId << endl;

        cout << "studetn constructor called" << endl;
    }

    void display() override
    {
        cout << name << "\n" << studentId << endl;
    }
};

int main ()
{
    student obj("Nila", 22, 173);

    obj.studentdetails();
    obj.display();

    return 0;
}


