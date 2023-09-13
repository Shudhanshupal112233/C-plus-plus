#include <iostream>
#include <math.h>
using namespace std;
int decimaltobinary(int n)
{
  int rem;
  int ans = 0;
  int power = 1;
  while (n != 0)
  {
    rem = n % 2;
    n = n / 2;
    ans += (rem * power);
    power *= 10;
  }
  return ans;
}
int main()
{
  int arr[10], n, i;
  cout << "enter the n:";
  cin >> n;
  cout << "enter the elements:";
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout<<endl<<endl;
  int q, r, j;

  int subset = pow(2, n);
  for (i = 0; i < subset; i++)
  {
    int bn = decimaltobinary(i);
    int div = pow(10, n - 1);

    for (j = 0; j < n; j++)
    {
      q = bn / div;
      r = bn % div;
    
    if (q == 0)
    {
      cout << "";
    }
    else
    {
      cout << arr[j]<< "," ;
    }
    
    bn = r;
    div /= 10;
  }
  cout<<endl;
  }
  return 0;

}