#include<iostream>
using namespace std;
template <class Z>
class templates
{
	Z a[100];
	int num;
public:
	void accept()
	{
		int i;
		cout<<"Enter the number of elements in your array"<<endl;
		cin>>num;
		cout<<"Enter the elements of the array"<<endl;
		for(i=0;i<num;i++)
			cin>>a[i];
	}
	void selsort()
	{
		int i,j,min;
		
		for(int i=0;i<num;i++)
{
    min=i;
for(int j=i+1;j<num;j++)
{
    if(a[j]<a[min])
    min=j;
}
swap(a[i],a[min]);

}    
		cout<<"Sorted array:"<<endl;
		for(i=0;i<num;i++)
			cout<<a[i]<<"\n";
	}
};


int main()
{
	int ch;
	templates<int> obj;
	templates<float> obj1;
	cout<<"1- Selection sort for integer array\n2- Selection sort for float array\nEnter choice"<<endl;
	cin>>ch;
	switch(ch)
	{
	case 1:
		obj.accept();
		obj.selsort();
		break;
	case 2:
		obj1.accept();
		obj1.selsort();
		break;
	default:
		cout<<"Wrong choice entered"<<endl;
	}
	return 0;
}


