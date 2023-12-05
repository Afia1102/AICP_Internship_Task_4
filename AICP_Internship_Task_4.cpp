//AICP_Internship_task-4
//Done By Afia Mushtaq
//Superior University Lahore
#include<iostream>
#include<cstdlib>
using namespace std;

class square{
	public:
		//Area
void calcAreaSquare(int index_add){
	//convert character to int
	int side=index_add-'0';
	int area=side*side;
	cout<<"Area of square is:"<<area<<endl;
}
   //Perimeter
void calcPeriSquare(int index_add){
	int side=index_add-'0';
	int peri=4*side;
	cout<<"Perimeter of square is:"<<peri<<endl;
}

};
class hexagon{
	public:
		//Area
void calcArea(int last_index){
	int side=last_index-'0';
    double area=1.5*1.732*side;
	cout<<"Area of hexagon is:"	<<area<<endl;
}
     //Perimeter
void calcPeri(int last_index){
	int side=last_index-'0';
	int peri=6*side;
	cout<<"Perimeter of hexagon is:"<<peri<<endl;
}
    //angle sum
void calcAngleSum(int a){
	int angle_sum=6*a;
	cout<<"Angle of hexagon is:"<<angle_sum<<endl;
}

};

int main(){
	hexagon h;
	square s;
	int a=120;
   int choice;
   const int size=12;
   char CNIC_no[size];
   cout<<"Enter your CNIC number:\n";
   cin>>CNIC_no;
   cout<<"Your entered CNIC number is:"<<CNIC_no<<endl;
    
   //accessing last index of array
   char last_index=CNIC_no[size-1 ];
 
   cout<<"Last digit of your CNIC is:"<<last_index<<endl;
    //adding 1 to last index of array
    //converting char to int and then back(from int to char)
   int index_add= last_index - '0' + 1;
    CNIC_no[size - 1] = '0' + (index_add % 10);
   //making repetitive menu
	do{
		cout<<"Enter 1 to calculate area,perimeter, and sum of angles of hexagon\n"
		    <<"Enter 2 to calculate area and perimeter of a square\n"
		    <<"Press any other key to exit\n";
		cin>>choice;
		switch(choice){
			case 1:
			  h.calcArea(last_index);
			  h.calcPeri(last_index);
			  h.calcAngleSum(a);
			  break;
			case 2:
			  s.calcAreaSquare(CNIC_no[size - 1]);
			  s.calcPeriSquare(CNIC_no[size - 1]);	
			  break;
			default:
				cout<<"Program gets end.";
		}
	}while(choice==1||choice==2);
	
	return 0;
}
