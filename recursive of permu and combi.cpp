#include<iostream>
using namespace std;

float permutation(int n, int r)
{
  if(n==0||r==0)
  return 1;
  else
  {
    if(n!=0)
    {
      return (1.0*n*permutation(n-1,r-1));
     }
  }
  return 0;
}
float combination(int n, int r)
{
  if(n==0||r==0)
  return 1;
  else
  {
     if(n!=0)
     {
       return (1.0*n*combination(n-1,r-1)/r);
     }
  }
  return 0;
}

int main()
{
  int n,r;
  cout<<"enter the value of n";
  cin>>n;
  cout<<"enter the value of r";
  cin>>r;
  try
  {
    
    if(n<0||r<0)
    {
      throw 5;
    }
    
    else if(r>n)
    {
      throw 5;
    }
    else
    {
      float permu=permutation(n,r);
      cout<<"permutation of given number :"<<permu;
      float combi=combination(n,r);
      cout<<"combination of given number :"<<combi;
    }
    
  }
  catch(int x)
  {
    cout<<"cannot be calculated...enter the positive number ";
  }
  
  return 0;
}

