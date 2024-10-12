#include <bits/stdc++.h>
using namespace std;
struct Student
{
    int id;
    string name;
    char section;
    int totalMarks;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student stds[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> stds[i].id >> stds[i].name >> stds[i].section >> stds[i].totalMarks;
        }
        int hIndex = 0;
        for (int i = 1; i < 3; i++)
        {
            if (stds[i].totalMarks > stds[hIndex].totalMarks ||
                (stds[i].totalMarks == stds[hIndex].totalMarks && stds[i].id < stds[hIndex].id))
            {
                hIndex = i;
            }
        }

        cout << stds[hIndex].id << " " << stds[hIndex].name << " " << stds[hIndex].section << " " << stds[hIndex].totalMarks << endl;
    }

    return 0;
}

