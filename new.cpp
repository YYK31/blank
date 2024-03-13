#include<iostream>
using namespace std;

class Test
{

	private:
	int a,b,c;
	public:
		
		void set_data(int x,int y) //x and y is a formal argument
		{
		a=x;
		b=y;
		c=a+b;	
		}
		
		void show()
		{
			cout<<"\nA="<<a<<"\nB="<<b<<"\nC="<<c;
		}
		
};

main()
{
	Test t1,t2;
		t1.set_data(5,7); //5 and 7 actual argement
		t1.show();
		
		int p,q;
		cout<<"Enter value for p and q";
		cin>>p>>q;  //p=67  q=3
		t2.set_data(p,q);
		t2.show();
		
		
		
	
}
//new chages 
// second change
//third one
//forth one
// fifth one