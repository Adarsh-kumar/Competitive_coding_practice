#include<bits/stdc++.h>

using namespace std;

int coprime[100];
// Utility function to do modular exponentiation.
// It returns (x^y) % p.
float RandomFloat(float a, float b) {
    float random = ((float) rand()) / (float) RAND_MAX;
    float diff = b - a;
    float r1 = random * diff;
    return a + r1;
}
int power(int x, int y, int p)
{
    int res = 1;     // Initialize result
    x = x % p; // Update x if it is more than or
               // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
 
// Returns true if square root of n under modulo p exists
// Assumption: p is of the form 3*i + 4 where i >= 1
int squareRoot(int n, int p)
{
    if (p % 4 != 3)
    {
       cout << "Invalid Input";
       return -1;  
    }
 
    // Try "+(n^((p + 1)/4))"
    n = n % p;
    int x = power(n, (p+1)/4, p);
    if ((x*x)%p == n)
    {
       // cout << "Square root is " << x<<endl;
        return x;
    }
 
    // Try "-(n ^ ((p + 1)/4))"
    x = p - x;
    if ((x*x)%p == n)
    {
       // cout << "Square root is " << x<<endl;
        return x;
    }
 
    // If none of the above two work, then
    // square root doesn't exist
    cout << "Square root doesn't exist "<<endl;
}
 

void one_two(int m0,int m1,int e,int n,int d,int b){
	
	int x0=rand()%1000000,x1=rand()%1000000,k=rand()%10,x;
	cout<<"message receiver wants: ";
	if(b)
	 {
	 x=x1;
	 cout<<m1<<" ";
}
	else
	 {
	 x=x0;
	 cout<<m0<<" ";
}
	int v=power(x+power(k,e,1000000000),1,n);
	if(v<0)
	 v+=n;
	int k0=power(v-x0,d,n),k1=power(v-x1,d,n);
	  if(k0<0)
	   k0+=n;
	 if(k1<0)
	  k1+=n;
	  
	m0=m0+k0;
	m1=k1+m1;
	cout<<" message he gets after the algorithm: ";
	if(b)
	 {
	 	cout<<m1-k<<endl;
	 }
	 else
	  cout<<m0-k<<endl;
	
}
int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
 
    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}
 
void rabin(int n,int m,int p,int q)
{  int phi=(p-1)*(q-1);
  int yes=0,no=0,t=10000;
  
  while(t--)
  {
  
	int x=coprime[rand()%phi];
	int y=power(x,2,n);
	if(y<0)
	 y+=n;
	
	int mp=squareRoot(y,p);
	int mq=squareRoot(y,q);
	int yp,yq; 
	
	int g=gcdExtended(p,q,&yp,&yq);
	int r=(((yp*mq*p)+(yq*q*mp))%n+n)%n;
	int s=(((yp*mq*p)-(yq*q*mp))%n+n)%n;
	float dec=RandomFloat(0.0,1.0);
//	cout<<r<<" "<<s<<" "<<x<<" "<<endl;
	if(dec>0.5)
	{
		if(r==x||(-(n-r)==-x))
		  {
		  	yes++;
		  }
		else
		 no++;
	}
	else
	{
		if(s==x||(-(n-s)==-x))
		yes++;
		else
		 no++;
	}
	
}

cout<<"decryption probability :"<<yes/10000.0<<"  he cannot decrypt :"<<no/10000.0<<endl;
	
	
}

int main()
{  
   
   int p=11,q=13,n=143,phi=120,e=7,d=103;
   int m0=678,m1=234;
   srand (static_cast <unsigned> (1234));
   cout<<"1_2 oblivious transfer"<<endl;
   cout<<"m0: "<<m0<<" m1:"<<m1<<" b:"<<1<<endl;
   one_two(m0,m1,e,n,d,1);
   
   p=7,q=11,n=p*q;
   
   int k=0;
   for(int i=1;i<n;i++)
     {
     	 if(__gcd(i,n)==1)
     	  {
     	  	 coprime[k++]=i;
		   }
	 }
   cout<<"rabins algo"<<endl;
   rabin(n,30,p,q);
   
   
   
   return 0;
}

