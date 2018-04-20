nclude<iostream>
using namespace std;

class shape
{	protected:
		float area;
			public:
			shape()
					{
								area=0.0;
									}	
				virtual void get()=0;
					virtual void set()=0;
						virtual void calc_area()=0;
};

class rectangle: public shape
{
		float l,b;
			public:
			void get()
					{
								cout<<"Enter length & breadth for rectangle: ";
										cin>>l>>b;
											}	
				void set()
						{
									cout<<"Area of rectangle: "<<area<<" sq.units\n";
											l=b=area=0.0;
												}
					void calc_area()
							{
										area=l*b;
											}
};

class triangle: public shape
{
		float b,h;
			public:
			void get()
					{
								cout<<"Enter base & height for triangle: ";
										cin>>b>>h;
											}	
				void set()
						{
									cout<<"Area of triangle: "<<area<<" sq.units\n";
										}
					void calc_area()
							{
										area=(b*h)/2;
											}
};
int main()
{
		shape *pfunc;
			rectangle r1;
				triangle t1;
					char ch='3',op='n';
						
						cout<<"Menu:\n1.Rectangle\n2.Triangle\n3.Exit\n";
							do
									{	
												cout<<"\nEnter choice: ";
														cin>>ch;
																switch(ch)
																			{
																							case '1':pfunc=&r1;
																								 					 break;
																								 			case '2':pfunc=&t1;
																												 					 break;
																												 			case '3':exit(0);
																																 					 break;
																																 			default:cout<<"\nInvalid choice!!\n";
																																						}
																		if(ch=='1' || ch=='2')
																					{
																									pfunc->get();
																										    	pfunc->calc_area();
																													    pfunc->set();		
																													    		}
																				cout<<"Again?(y/n): ";
																						cin>>ch;
																									
																							}while(ch=='y' || ch=='Y');
							  return 0;
}

