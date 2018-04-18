//Inorder Traversal and BST
#include<iostream.h>
#include<conio.h>
//using namespace std;
int main()
{
  int t,n,c;
  clrscr();
  cin>>t;
  while(t--)
 {
  c=0;
  int min=0;
  cin>>n;
  int a[40];
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }
  for(int j=0;j<n;j++)
  {
  if(a[j]<min || a[j]==min)
  {
   c=1;
  }
  min=a[j];
  }
  if(c==0)
  {
   cout<<1;
  }
  else
  {
   cout<<0;
  }
 cout<<endl;
  }
  getch();
  return 0;
}