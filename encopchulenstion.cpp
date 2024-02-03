#include<iostream>
using namespace std;
class employes
{
  private:
  	int id;
  	string name;
  	float salary;
  	
  	public:
  		void set(int id)
		{
			id=id;
	    }   	
	    void set(string name)
	    {
	    	name=name;
		}
		void set(float salary)
		{
			salary=salary;
		}
		int getid()
		{
			return id;
		}
		string getname()
		{
			return name;
		}
		float getsalary()
		{
			
			return salary;
		}
};
int main()
{
	employes emp;
	
	emp.getid(101);
	emp.getname(chetan);
	emp.getsalary(500.5);

cout<<"employes id:"<<emp.getid()<<endl;
cout<<"employes name:"<<emp.getname()<<endl;
cout<<"employes salary:"<<emp.getsalary()endl;

return 0;
}
