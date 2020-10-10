#include<iostream>
class A{
 double a;
 int x;
 int z;
 double y;
 public:
	void getdata(){
		std::cout<<"enter the number= ";
	std::cin>>a;//taking data froim user//
	x=a;
	z=x;//to get the integer part for ex 2.5 will become 2//
	y=a-x;//for getting the difference between them//
	std::cout<<"difference= "<<y<<std::endl;
	}
	void ffun(){//for floor fucntion//
    if(y<0){
    	std::cout<<"the floor function is= "<<--x;
    	std::cout<<"\nthe celling function is= "<<z;
	}
	else{
		std::cout<<"the floor function is= "<<x;//if y>=0 for floor function//
		if(y==0){
			std::cout<<"\nthe celling function is= "<<z;//for celling function//
		}
		else{
			std::cout<<"\nthe celling function is= "<<++z;//if y>0 the for celling function//
		}
	}
	}
};
int main(){
	A c1;
	c1.getdata();
	c1.ffun();
	return 0;
}
