#include <iostream>
#include <vector>
#include <iomanip>

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
    bool repeat = true;

public:
    void getResult()
    {

        //Exception Handelling
        while (repeat)
        {
            try
            {
                cout << "Enter the name of the student: ";
                cin >> name;
                if (isdigit(name[0]) == 1)
                {
                    throw 1;
                }
                repeat = false;
            }
            catch (int)
            {
                cout << "Wrong name" << endl;
            }
        }
        repeat = true;

        //Exception Handelling
        while (repeat)
        {
            try
            {
                cout << "Enter the roll number of the student: ";
                cin >> roll;
                if (roll < 0)
                {
                    throw roll;
                }
                repeat = false;
            }
            catch (int)
            {
                cout << "Wrong roll number" << endl;
            }
        }

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
        float OMsum = 0, MMsum = 0;
        float percent;
        for (int i = 0; i < n; i++)
        {
            OMsum += subject[i].getOMarks();
            MMsum += subject[i].getMMarks();
        }
        percent = (OMsum / MMsum) * 100;
        cout << "The total marks obtained by " << name << " : " << OMsum << endl;
        cout << "The total marks obtained by " << name << " : " << MMsum << endl;
        cout << setprecision(2) << fixed;
        cout << "The total percentage obtained by " << name << " : " << percent << "%" << endl;
    }
};

int main()
{
    result obj[50][12];
    char ans;
    int cnum;

    do
    {
        cout << "Enter the class of the students you want to enter the data of: ";
        cin >> cnum;
        for (int i = 0; i < 1; i++)
        {
            obj[i][cnum - 1].getResult();
        }
        cout << "Do you want to enter the data for diff class(Y for yes N for no): ";
        cin >> ans;
    } while (ans == 'y');

    cout << "--------------------DISPLAY------------------";

    do
    {
        cout << "Enter the class of the students you want to display the data of: ";
        cin >> cnum;
        for (int i = 0; i < 1; i++)
        {
            obj[i][cnum - 1].display();
        }
        cout << "Do you want to display the data for diff class(Y for yes N for no): ";
        cin >> ans;
    } while (ans == 'y');

    return 0;
}