//#include<iostream>
//using namespace std;
//int main(){
//	int num=10;
//	
//	cout<<"Value="<<num<<endl;
//	cout<<"Address="<<&num<<endl;
//	
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main(){
//	int num = 10;
//	int *ptr;
//	ptr = &num;
//	cout<<ptr;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main(){
//	int a,b;
//	cin>>a>>b;
//	int *p;
//	p==&a;
//	cout<<"Address of a value:"<<p<<endl;
//	cout<<"Value stored in a :"<<*p<<endl;
//	p=&b;
//	cout<<"Address of b value:"<<p<<endl;
//	cout<<"Value stored in b :"<<*p<<endl;
//	
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main(){
//int a;
//	cin >>a;
//	int *p;
//	p = &a;
//	cout<<"Value of a before update"<<endl;
//	cout<<"Actuall value of a "<<*p<<" and the address of a :"<<p<<endl;
//	*p +=1;
//	cout<<"Value of a after update"<<endl;
//	cout<<"Actuall value of a "<<*p<<" and the address of a :"<<p<<endl;
//	
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main(){
//	int arr[5]={10,20,30,40,50};
//	for(int i=0;i<5;i++)
//    cout<<arr[i]<<endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//struct student{
//	string name;
//	int age;
//};
//int main(){
//	student s1;
//	s1.name="Rayyan Kharadi";
//	s1.age=19;
//	cout<<s1.name<<endl<<s1.age<<endl;
//}


#include<iostream>
using namespace std;
struct student {
    string name;
    int age;
};
int main() {
    student s1;
    cout << "Enter name: ";
    getline(cin, s1.name);
    cout << "Enter age: ";
    cin >> s1.age;
    cout << "\nStudent Information:\n";
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    return 0;
}











