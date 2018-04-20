

#include<iostream>

 

using namespace std;

 

class Oxygen{ float wo;

	            

	             public:

			                      Oxygen()

						                       { cout<<"\nEnter mass of oxygen in compound:";

									                          cin>>wo;

												                   }

					                       

					                      float geto(){ return wo;

								                      }

}o;

 

class Hydrogen{ float wh;

	            

	             public:

			                      Hydrogen()

						                       { cout<<"\nEnter mass of Hydrogen in compound:";

									                          cin>>wh;

												                   }

					                       

					                           float geth(){ return wh;}

}h;

 

class Sulphur{float ws;

	            

	             public:

			                      Sulphur()

						                       { cout<<"\nEnter mass  of sulphur in compound:";

									                          cin>>ws;

												                   }

					                       

					                           float getS(){ return ws;

									                   }

								                  

								           friend void formula(Oxygen oo,Hydrogen hh,Sulphur ss)

										           { float mol_wt;

												             mol_wt = oo.geto()+ss.getS()+hh.geth();

													               cout<<"\nMolecular weight of the compound in:"<<mol_wt;

														                 cout<<"\nMolecular Formula is:H"<<hh.geth()/1<<" S"<<ss.getS()/32<<" O"<<oo.geto()/16;

																         }

}s;

 

int main()

{

	    

	   formula(o,h,s);

	    

	       return 0;

}



