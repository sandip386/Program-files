#include<iostream>
class A{
	double a;
	double b;
	public:
		int get(int i){//To enter the values//
			std::cout<<"enter the "<<i+1<<" value for a= ";
			std::cin>>a;
			if(a>=0 && a<=1){//to check the value of a//
					std::cout<<"enter the "<<i+1<<" value for b= ";
			std::cin>>b;
			return 0;
			}
			else{
				return 1;
		}
		}
		void display(){
			std::cout<<a<<"/"<<b<<std::endl;//to display the element of the set//
		}
		A comp(A c2){//for comparing the element//
		if(b==c2.b){
			if(a>=c2.a){
				std::cout<<a<<"/"<<b<<std::endl;//for displaying IF the element of Set A is maximun//
			}
			else{
				std::cout<<c2.a<<"/"<<c2.b<<std::endl;//for displaying if the element of set B is greater//	
		}
	}
	}
		A comp1(A c2){//for comparing the element//
		if(b==c2.b){
			if(a<=c2.a){
				std::cout<<a<<"/"<<b<<std::endl;//for displaying IF the element of Set A is minimun//
			}
			else{
				std::cout<<c2.a<<"/"<<c2.b<<std::endl;//for displaying if the element of set B is ,inimum//
			
		}
	}
}
};
int main(){
  int n,k,l;//for the size of the array//
  std::cout<<"enter the size= ";
  std::cin>>n;
  A c[n],d[n];//declaring the array of object//
  std::cout<<"the value of a should be greater than or equal to 0 and less than and equal to 1 \n\n";
  for(int i=0;i<n;i++){
   k=c[i].get(i);//object calling function to enter the value for the set//
   if(k==1){
   	i--;
   }  
  }
  std::cout<<"element of set A\n";//here we enter the element of set A//
  for(int i=0;i<n;i++){
   c[i].display();//for dispalying the element of set A//
  }
   for(int i=0;i<n;i++){
   l=d[i].get(i);
   if(l==1){
   	i--;
   }
  }
  std::cout<<"\nelement of set B\n";//here we enter the element of set B//
  for(int i=0;i<n;i++){
   d[i].display();//for displaying the element of set B//
  }
  int m;//for askling user to choose union or intersection//
  std::cout<<"enter 1 for intersection and 2 for union\n";
  std::cin>>m;
  if(m==2){
  	std::cout<<"the union is\n";//for compairing the maximum elelement//
  	for(int i=0;i<n;i++){
  		for(int j=0;j<n;j++){
  		c[i].comp(d[j]);//c calling the function comp by passing object d as argument//
	  }
}
}
else if(m==1){
	std::cout<<"the intersection is\n";//for compairing the minimum elelement//
  	for(int i=0;i<n;i++){
  		for(int j=0;j<n;j++){
  		c[i].comp1(d[j]);
  	}

}
}
else{
	std::cout<<"invalid only 1 or 2";
}
}
