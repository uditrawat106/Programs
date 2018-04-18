#include<iostream>

#include<bits/stdc++.h>

using namespace std;


int search(int arr[], int x, int n)

{

    for (int i = 0; i < n; i++)
 
     if (arr[i] == x)

         return i;

    return -1;

}


void printPostOrder(int in[], int pre[], int n)

{
   

   int root = search(in, pre[0], n);

 
   if (root != 0)
    
        printPostOrder(in, pre+1, root);


    if (root != n-1)

        printPostOrder(in+root+1, pre+root+1, n-root-1);

 
   cout << pre[0] << " ";

}



int main()
 
{

     int t,n,c,q,e;
	
     cin>>t;
     while(t--)

     {
	    
      c=0;

      cin>>n;

      int a[n],in[n];
      for(int i=0;i<n;i++)
   	{

	  cin>>a[i];

          in[i]=a[i];
  
	}

      sort(in,in+n);

      for(int j=0;j<n;j++)

	{
     
	  if(a[j]>a[0])

	   {

            e=j;
  
            break;

	   }
    
	}

      for(int k=e;k<n;k++)

	{

	  if(a[k]<a[0])

	        {

	          c=1;

	        }
	    
        }

	  if(c==1)

	       {

	        cout<<"NO";

	       }
	  
          else
	
               {
	 
     
	        printPostOrder( in, a, n);

	       }
	 
   
	       cout<<endl;

      }
	
return 0;

}