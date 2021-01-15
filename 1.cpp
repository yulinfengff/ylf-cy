#include<iostream> 
using namespace std;
int a();
int main()
{
    system("title 初级计算器20111——ylf.cy制作");
	system("color 60"); 
	a();
 } 
int mai();
int b();
int set();
int a(void)
{
	int z;
	cout<<"0:set 1:main"<<endl;
	cin>>z;
	if(z==0||z==1)
	{
	if(z==0)
	{
	set();
	}
	if(z==1)
	{
		mai(); 
	 }
}
else
{
	system("color 17");
	cout<<"A problem has been detected and Windows has been shut down to prevent damage to your computer."<<endl;
	cout<<"If this is the first time you've seen this stop error screen,restart your computer.If this screen appears again,follow these steps:"<<endl<<"  ";
	cout<<"Check to be sure you have adequate disk space.If a driver is identified in the stop message,disable the driver or check with the manufacturer for driver updates.Try changing video adapterscheck with your hardware vendor for any BIOS updates.Disable BIOS memory options such as caching or shadowing if you need tu use safe Mode to remove or disable components,restart your computer.Press F8 to select advanced startup options,and then select safe mode"<<endl;
	cout<<"Techical information:*** stop:0×0000008E （0×0000005，0×805F91E2，0×B3EE79A8，0×00000000）"<<endl;
	while(1)
	{
		system("start windowsRingout.wav");
	 } 
	system("pause");
	exit(0);
}
 } 
int mai()
{system("color 60");
  
int j;
cout<<"1:整数加减 other:同分母分数加减"<<endl;
cin>>j;
if(j==1) 
 {
  cout<<"Please input number:";
  long double num1,num2;
  char op;
  {  cin>>num1;
     cin>>op;
     cin>>num2;
  }
  switch(op)
  {  
     case'+':cout<<num1+num2<<endl;break;
  	 case'-':cout<<num1-num2<<endl;break;
  	 case'*':cout<<num2*num1<<endl;break;
  	 case'/':{if(num2!=0){cout<<num1/num2<<endl;break;}
               else cout<<"Error:除数不能为0!!!"<<endl;break;}
     case'^':{
		int a=2;
		if(num2==0)
		cout<<"1"<<endl;
		else{
		
		int b=num1;
		while(a<=num2)
		{
			if(a==2)
			{
			num1*=num1;
			}
			else
			{
				num1*=b;
			}
			a++;
		}
		cout<<num1<<endl;
	 }break;
	 }
	 case'%':
	 {
	 	int x;
	 	cout<<"请问您想："<<endl;
		cout<<"    1:取余;0:求百分数……";
		cin>>x;
		if(x==1)
		{
		int u,g;
	 	u=num1;
	 	g=num2;
	 	if(num1-u!=0||num2-g!=0)
	 	{
	 		cout<<"[Error]invalid/operands/of/types'float\double'and'double\float'to/binary'operator%'!"<<endl;
		 }
		else
		{
		int q=u%g;
	 	cout<<q<<endl;
	  }}
	  if(x==0)
	  {
	  	num2/=100;
	  	cout<<num1*num2<<endl;
	  }
	  break; 
	  }
     default:cout<<"Error!"<<endl;
    }
}
else
{
	cout<<"分母："; 
	unsigned int a; 
	cin>>a;
	char op;
	cin>>op;
	cout<<"分子：";
	unsigned int b,c;
	cin>>b>>c;
	cout<<"分母："<<a<<endl;
	cout<<"分子：";
	switch(op)
	{
		case'+':{
			cout<<b+c<<endl;
			break;
		}
        case'-':{
			cout<<b-c<<endl;
			break;
		}
		default:
			{
				system("color 40");
				cout<<endl;
				cout<<"Error!"<<endl; 
				break;
			}
	 } 
}
    system("pause");
    return 0; 
    exit(0);
}
int set(void)
{
	system("color a");
	cout<<"Extended functions(Default:on;Only valid this time):(0:off other:on)";
	int t;
	cin>>t;
	system("color 60");
	if(t!=0)
	{
		b();
	}
	else
	{
	mai();	
	}
	
}
int b()
{
	cout<<"Please input number:";
  long double num1,num2;
  char op;
  {  cin>>num1;
     cin>>op;
     cin>>num2;
  }
  switch(op)
  {  
     case'+':cout<<num1+num2<<endl;break;
  	 case'-':cout<<num1-num2<<endl;break;
  	 case'*':cout<<num2*num1<<endl;break;
  	 case'/':{if(num2!=0){cout<<num1/num2<<endl;break;}
               else cout<<"error:除数不能为0!!!"<<endl;break;}
     case'^':{
		int a=2;
		if(num2==0)
		cout<<"1"<<endl;
		else{
		
		int b=num1;
		while(a<=num2)
		{
			if(a==2)
			{
			num1*=num1;
			}
			else
			{
				num1*=b;
			}
			a++;
		}
		cout<<num1<<endl;
	 }break;
	 }
	 case'%':
	 {
	 	int x;
	 	cout<<"请问您想："<<endl;
		cout<<"    1:取余;0:求百分数……";
		cin>>x;
		if(x==1)
		{
		int u,g;
	 	u=num1;
	 	g=num2;
	 	if(num1-u!=0||num2-g!=0)
	 	{
	 		cout<<"[Error]invalid/operands/of/types'float\double'and'double\float'to/binary'operator%'!"<<endl;
		 }
		else
		{
		int q=u%g;
	 	cout<<q<<endl;
	  }}
	  if(x==0)
	  {
	  	num2/=100;
	  	cout<<num1*num2<<endl;
	  }
	  break; 
	  }
     default:cout<<"Error!"<<endl;
    }
    system("pause");
}
