#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long n ;
   cin >> n ;
   long long a[n];
   for(long long i = 0 ; i < n ;i++)
   {
       cin >> a[i] ;
   }
   long long b[n] ;
   copy(a , a + n ,b) ;
   reverse(b , b + n);
   bool x = true;
   for(long long i = 0 ; i < n ;i++)
   {
       if(a[i]!=b[i])
       {
           x = false ;
           break ;
       }
   }
   if(x)
   {
       cout << "YES" ;
   }
   else
   {
       cout << "NO" ;
   }
    return 0;
}
