#include <iostream>
#include <string>
using namespace std;

class sem3 
{
public:
    string nameoftheorysubject[5] = {"Applied Mathematics-III", "Data Structure", "Computer Network ", "Computer Architecture and Organization", "Universal Human Values - 2"};
    string nameofpracticalsubject[3] = {"Computer Lab - 1", "Data Structure Lab", "Computer Network Lab"};
    int creditoftheorysubject[5] = {4, 3, 4, 3, 3};
    int creditofpracticalsubject[3] = {1, 2, 1};
    int marksoftheorysubject[5];
    int marksofpracticalsubject[3];
    float total=0;

    void getmarks() 
    {
        for (int i = 0; i < 5; i++) 
        {
            cout << "\nEnter the total of internal and external marks of " << nameoftheorysubject[i] << " : ";
            cin >> marksoftheorysubject[i];
        }
        for (int i = 0; i < 3; i++) 
        {
            cout << "\nEnter the total of internal and external marks of " << nameofpracticalsubject[i] << " : ";
            cin >> marksofpracticalsubject[i];
        }
    }

    class calculate 
    {
    public:
        int theorymarkcalculate(int marksoftheorysubject[], int creditoftheorysubject[],int total) 
        {
            for (int i = 0; i < 5; i++) 
            {
                int multipliert;
                if (marksoftheorysubject[i] >= 90) 
                {
                    multipliert = 10;
                }
                else if (80 <= marksoftheorysubject[i] && marksoftheorysubject[i] < 90) 
                {
                    multipliert = 9;
                }
                else if (70 <= marksoftheorysubject[i] && marksoftheorysubject[i] < 80) 
                {
                    multipliert = 8;
                }
                else if (60 <= marksoftheorysubject[i] && marksoftheorysubject[i] < 70) 
                {
                    multipliert = 7;
                }
                else if (50 <= marksoftheorysubject[i] && marksoftheorysubject[i] < 60) 
                {
                    multipliert = 6;
                }
                else if (40 <= marksoftheorysubject[i] && marksoftheorysubject[i] < 50) 
                {
                    multipliert = 5;
                }
                else 
                {
                    cout << "\nSORRY! You have failed in the subject "<<"\n";
                    break;
                    return 0;
                }
                total = (multipliert * creditoftheorysubject[i]) + total;
            }
            return total;
        }

        int practicalmarkcalculate(int marksofpracticalsubject[], int creditofpracticalsubject[],int total) 
        {
            for (int i = 0; i < 3; i++) 
            {
                int multiplierp;
                if (marksofpracticalsubject[i] >= 45) 
                {
                    multiplierp = 10;
                }
                else if (41 <= marksofpracticalsubject[i] && marksofpracticalsubject[i] < 45) 
                {
                    multiplierp = 9;
                }
                else if (36 <= marksofpracticalsubject[i] && marksofpracticalsubject[i] < 40) 
                {
                    multiplierp = 8;
                }
                else if (31 <= marksofpracticalsubject[i] && marksofpracticalsubject[i] < 35) 
                {
                    multiplierp = 7;
                }
                else 
                {
                    cout << "\nSORRY! You have failed in the subject"<<"\n";
                    break;
                    return 0;
                }
                total = (multiplierp * creditofpracticalsubject[i]) + total;
            }
            return total;
        }
    };

    int analyse()
    {
        // int l1 = sizeof(sem3::marksoftheorysubject) / sizeof(sem3::marksoftheorysubject[0]);
        for (int j = 0; j < 5; j++)
        {
            // bool isInRange = ((sem3::marksoftheorysubject[j] % 5 > 0) && (sem3::marksoftheorysubject[j] % 5 < 5));
            // if (isInRange)
            int grade=sem3::marksoftheorysubject[j];
            if((grade>85&&grade<=90) ||(grade>75&&grade<=80) || (grade>65&&grade<=70) || (grade>55&&grade<=60) || (grade>45&&grade<=50)) 
            {
                float num = 5-(sem3::marksoftheorysubject[j] % 5);
                cout << "If, \nYou Could Have Scored " << num+1 << " marks more in " << sem3::nameoftheorysubject[j] << " then,";
                cout << "\nyour sgpa would get increased by " << (((num+1) * sem3::creditoftheorysubject[j]) / 220) * 10;
                cout<<"\n\n";
            }
            else
            {
                break;
            }
        }
        return 0;
    }
};


class sem4 
{
public:
    string nameoftheorysubject[4] = {"Discrete Structure", "Object Oriented Programming", "Software Engineering and Project Management", "Theory of Computation "};
    string nameofpracticalsubject[4] = {"Software Lab - 1", "Object Oriented Programming Lab ", "Software Engineering and Project Management Lab", "Technical Skill Development"};
    int creditoftheorysubject[4] = {4, 3, 3, 5};
    int creditofpracticalsubject[4] = {2, 1, 1, 1};
    int marksoftheorysubject[4];
    int marksofpracticalsubject[4];
    float total=0;


    void getmarks() 
    {
        for (int i = 0; i < 4; i++) 
        {
            cout << "\nEnter the total of internal and external marks of " << nameoftheorysubject[i] << " : ";
            cin >> marksoftheorysubject[i];
        }
        for (int i = 0; i < 4; i++) 
        {
            cout << "\nEnter the total of internal and external marks of " << nameofpracticalsubject[i] << " : ";
            cin >> marksofpracticalsubject[i];
        }
    }

    class calculate 
    {
    public:
        int theorymarkcalculate(int marksoftheorysubject[], int creditoftheorysubject[],int total) 
        {
            for (int i = 0; i < 4; i++) 
            {
                int multipliert;
                if (marksoftheorysubject[i] >= 90) 
                {
                    multipliert = 10;
                }
                else if (80 <= marksoftheorysubject[i] && marksoftheorysubject[i] < 90) 
                {
                    multipliert = 9;
                }
                else if (70 <= marksoftheorysubject[i] && marksoftheorysubject[i] < 80) 
                {
                    multipliert = 8;
                }
                else if (60 <= marksoftheorysubject[i] && marksoftheorysubject[i] < 70) 
                {
                    multipliert = 7;
                }
                else if (50 <= marksoftheorysubject[i] && marksoftheorysubject[i] < 60) 
                {
                    multipliert = 6;
                }
                else if (40 <= marksoftheorysubject[i] && marksoftheorysubject[i] < 50) 
                {
                    multipliert = 5;
                }
                else 
                {
                    cout << "\nSORRY! You have failed in the subject"<<"\n";
                    break;
                    return 0;
                }
                total = (multipliert * creditoftheorysubject[i]) + total;
            }
            return total;
        }

        int practicalmarkcalculate(int marksofpracticalsubject[], int creditofpracticalsubject[], int total) 
        {
            for (int i = 0; i < 4; i++) 
            {
                int multiplierp;
                if (marksofpracticalsubject[i] >= 45) 
                {
                    multiplierp = 10;
                }
                else if (41 <= marksofpracticalsubject[i] && marksofpracticalsubject[i] < 45) 
                {
                    multiplierp = 9;
                }
                else if (36 <= marksofpracticalsubject[i] && marksofpracticalsubject[i] < 40) 
                {
                    multiplierp = 8;
                }
                else if (31 <= marksofpracticalsubject[i] && marksofpracticalsubject[i] < 35) 
                {
                    multiplierp = 7;
                }
                else 
                {
                    cout << "\nSORRY! You have failed in the subject" <<"\n";
                    break;
                    return 0;
                }
                total = (multiplierp * creditofpracticalsubject[i]) + total;
            }
            return total;
        }
    };
    int analyse()
    {
        // int l2 = sizeof(sem4::marksoftheorysubject) / sizeof(sem4::marksoftheorysubject[0]);
        for (int j = 0; j < 4; j++)
        {
            // bool isInRange = ((sem4::marksoftheorysubject[j] % 5 > 0) && (sem4::marksoftheorysubject[j] % 5 < 5));
            // if (isInRange)
            int grade=sem4::marksoftheorysubject[j];
            if((grade>85&&grade<=90) ||(grade>75&&grade<=80) || (grade>65&&grade<=70) || (grade>55&&grade<=60) || (grade>45&&grade<=50)) 
            {
                float num =5-(sem4::marksoftheorysubject[j] % 5);
                cout << "If, \nYou Could Have Scored " << num+1 << " marks more in " << sem4::nameoftheorysubject[j] << " then,";
                cout << "\nyour sgpa would get increased by " << (((num+1) * sem4::creditoftheorysubject[j]) / 220) * 10;
                cout<<"\n\n";
            }
            else
            {
                break;
            }
        }
        return 0;
    }
};




int main() 
{
    int num;
    float total;
    cout<<"\nDepartment of Information Technology\n";
    cout << "Please select the appropriate choice to calculate your SGPA\n  1. SEMESTER III\n  2. SEMESTER IV\n  3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> num;
    cout<<"\n\n\n";
    switch (num) 
    {
        case 1: 
        {
            cout << "Result of semester 3\n\n\n" << endl;
            
            sem3 s3;
            sem3::calculate c3;
            s3.getmarks();
            total=
            c3.theorymarkcalculate(s3.marksoftheorysubject, s3.creditoftheorysubject,s3.total)+
            c3.practicalmarkcalculate(s3.marksofpracticalsubject, s3.creditofpracticalsubject,s3.total);
            total=((total+1)/220)*10;
            cout << "Your SGPA of semester 3 is " <<total << endl;
            s3.analyse();
            break;
        }
        case 2: 
        {
            cout << "Result of semester 4" << endl;
            
            sem4 s4;
            sem4::calculate c4;
            s4.getmarks();
            total=
            c4.theorymarkcalculate(s4.marksoftheorysubject, s4.creditoftheorysubject,s4.total)+
            c4.practicalmarkcalculate(s4.marksofpracticalsubject, s4.creditofpracticalsubject,s4.total);
            total=((total+1)/220)*10;
            cout << "Your SGPA of semester 4 is " <<total << endl;
            s4.analyse();
            break;
        }
        case 3:
            cout << "Thank You for using our application." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }
    float pointer;
    cout<<"\n Enter your pointer upto previous sem ";
    cin>>pointer;
    cout<<"\n\nYour CGPA upto these sem is "<<(pointer+total)/2;
    return 0;
}
