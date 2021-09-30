
#include <iostream>
using namespace std;

class Date
{
	private:
	int d,m,y;
	
	public:
	int f;

	void input()
	{
		cout<<"Date: ";
		cin>>d;
		cout<<"Month: ";
		cin>>m;
		cout<<"Year: ";
		cin>>y;
	}
	
	void check()
	{
		if(y>1000&&y<4000)
		{
			if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&d>0&&d<=31)
			{
				cout<<"Valid ";
				f=1;
			}		
			else if((m==4||m==6||m==9||m==11)&&d>0&&d<31)
			{
				cout<<"Valid ";
				f=1;
			}
			
			else if(m==2)
			{
				if(y%4==0&&d>0&&d<=29)
				{
					cout<<"Valid ";
					f=1;
				}
				else if(d>0&&d<29)
				{
					cout<<"Valid ";
					f=1;
				}
				else
				cout<<"Not Valid ";
			}
			
			else
			cout<<"Not Valid ";
		}
		else
		cout<<"Not Valid ";
	}
	
	void next()
	{
		if(f==1)
		{
			if(m==1||m==3||m==5||m==7||m==8||m==10)
			{
				if(d<31)
				d++;
				else if(d==31)
				{
					m++;
					d=1;
				}
			}
			
			else if(m==4||m==6||m==9||m==11)
			{
				if(d<30)
				d++;
				else if(d==30)
				{
					m++;
					d=1;
				}
			}
			else if(m==2)
			{
				if(y%4==0)
				{
					if(d<29)
					d++;
					else if(d==29)
					{
						m++;
						d=1;
					}
				}
				else 
				{
					if(d<28)
					d++;
					else if(d==28)
					{
						m++;
						d=1;
					}
				}
			}
			else if(m==12)
			{
				if(d<31)
				d++;
				else if(d==31)
				{
					y++;
					m=1;
					d=1;
				}
			}
			cout<<"Next Date:"<<d<<"/"<<m<<"/"<<y<<endl;
		}
	}
};
	
		

int main()
{
	Date a;
	a.input();
	a.check();
	a.next();
	Date b;
	b.input();
	b.check();
	b.next();
	return 0;
}

