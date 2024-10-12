#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
  string name;
  int cls;
  string sec;
  int id;
  int mm;
  int em;
  int total = mm + em;
};
bool cmp(Student a, Student b)
{
  if (a.total != b.total)
  {
    return a.total > b.total;
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
    cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id >> a[i].mm >> a[i].em;
    a[i].total = a[i].mm + a[i].em;
  }

  sort(a, a + n, cmp);
  for (int i = 0; i < n; i++)
  {
    cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].mm << " " << a[i].em << endl;
  }
  return 0;
}
