#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
  string name;
  int cls;
  string sec;
  int id;
  int math;
  int eng;
};
bool cmp(Student a, Student b)
{
  if (a.eng != b.eng)
  {
    return a.eng > b.eng;
  }
  else if (a.math != b.math)
  {
    return a.math > b.math;
  }
  else
  {
    return a.id < b.id;
  }
}
int main()
{
  int n;
  cin >> n;
  Student a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id >> a[i].math >> a[i].eng;
  }

  sort(a, a + n, cmp);

  for (int i = 0; i < n; i++)
  {
    cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].math << " " << a[i].eng << endl;
  }
  return 0;
}