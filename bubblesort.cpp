#include<iostream>
using namespace std;
template <typename T>
class sorter
{
	private:
		T*data;
		int size;
	public:
		sorter(T*inputdata,int s):data(inputdata),size(s){}
		void bubblesort()
		{
			for(int i=0;i<size-1;i++){
				for(int j=0;j<size-1;i++){
					if(data[j]<data[j+1]){
						int temp=data[j];
						data[j]=data[j+1];
						data[j+1]=temp;
					}
				}
			}
		}
		void display()
		{
			for(int i=0;i<size;i++){
				cout<<data[i]<<" ";
			}
			cout<<endl;
		}
};
int main()
{
	int intarray[]={64,34,25,12,22,11,90};
	int n= sizeof(intarray)/sizeof(intarray[0]);
	sorter<int>intsorter(intarray,n);
	cout<<"Original int array ";
	intsorter.display();
	intsorter.bubblesort();
	cout<<"sorted int array ";
	intsorter.display();
	double doublearray[]={64.5,34.2,25.1,12.9};
	int m=sizeof(doublearray)/sizeof(doublearray[0]);
	sorter<double>doublesorter(doublearray,m);
	cout<<"original double array ";
	doublesorter.display();
	doublesorter.bubblesort();
	cout<<"sorted double array ";
	doublesorter.display();
	return 0;
}
