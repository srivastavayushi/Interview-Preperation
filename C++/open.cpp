#include <iostream>
#include <vector>

using namespace std;
// Create a student detail class
class studentDetail
{
private:
    vector<string> name;
    int rollNumber;

public:
    studentDetail()
    {
    }
    studentDetail(string n, int m)
    {
        rollNumber = m;
        name.push_back(n);
    }
    void setName(string n)
    {
        name.push_back(n);
    }
    void setroll(int m)
    {
        rollNumber = m;
    }
    string getName()
    {
        return name[0];
    }
    int getRollNumner()
    {
        return rollNumber;
    }
    // Copy constructor
    studentDetail(const studentDetail &p2)
    {
        name = p2.name;
        rollNumber = p2.rollNumber;
    }
};

// Create a subject class, like name totol
class subjectDetail
{
private:
    vector<string> name;
    int MMarks, OMarks;

public:
    subjectDetail(){};
    void setName(string n)
    {
        name.push_back(n);
    }
    void setMMarks(int m)
    {
        MMarks = m;
    }
    void setOMarks(int m)
    {
        OMarks = m;
    }
    int getOMarks()
    {
        return OMarks;
    }
    int getMMarks()
    {
        return MMarks;
    }
    string getName()
    {
        return name[0];
    }

    // Copy constructor
    subjectDetail(const subjectDetail &p2)
    {
        name = p2.name;
        MMarks = p2.MMarks;
    }
};

// Create a result class
class result
{
private:
    studentDetail student;
    string name, sname;
    int roll, n, mmsub, mosub;
    subjectDetail subject[10];

public:
    result()
    {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the roll number of the student: ";
        cin >> roll;

        studentDetail st(name, roll);
        student = st;
        cout << "Enter the number of subjects " << name << " have: ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the name of " << i + 1 << " subject: ";
            cin >> sname;
            cout << "Enter the MM of " << sname << " : ";
            cin >> mmsub;
            cout << "Enter the marks of " << name << " in " << sname << " : ";
            cin >> mosub;
            subject[i].setName(sname);
            subject[i].setMMarks(mmsub);
            subject[i].setOMarks(mosub);
        }
    }

    void display()
    {
        int OMsum = 0, MMsum = 0;
        float percent;
        for (int i = 0; i < n; i++)
        {
            OMsum += subject[i].getOMarks();
            MMsum += subject[i].getMMarks();
        }
        cout << "The total marks obtained by " << name << " : " << OMsum << endl;
        cout << "The total marks obtained by " << name << " : " << MMsum << endl;
        percent = OMsum / MMsum;
        cout << "The total percentage obtained by " << name << " : " << percent << endl;
    }
};

int main()
{
    result anushka;
    anushka.display();
    return 0;
}