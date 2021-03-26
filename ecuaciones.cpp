#include<iostream>
using namespace std;
#include <cmath>
#include <iomanip>


int main() 
{
	float pi,d, vi, pn,vn,t,pt,s,dp,w,m,pto,cpo,ct,viu,vc,pnu,vnu,dpu,tu,ptu,vid,k,vida,td,ptd,omega,y,vr,fi;
	pi=1;
	d=1;
	s=1;
	w=1;
	pto=0;
	cpo=1;
	ct=1;
	vc=-1.2;
	k=1.15;
	y=10;
	
	



//Teorema de cantidad de movimiento
	//HOVER
	
		vi= sqrt(w/2*d);
			cout <<"\n velocidad inducida en hover es="<< vi <<endl;	
	
		pn=pi+(d*pow(vi,2))/2;
			cout <<"\n presion del flujo de aire en hover es="<< pn <<endl;	
			
		vn= 2*vi;			
			cout <<" \n velocidad del flujo de aire en hover es="<< vn<< endl;	
			
		dp=(d*pow(vn,2))/2;
			cout <<"\n diferencia de presiones en hover es="<< dp <<endl;	
			
		t=2*d*pow(vi,2)*s;
			cout <<" \n empuje en hover es="<< t <<endl;	
		pt=t*vi;
			cout <<" \n potencia en hover es="<< pt <<endl;	
			
	
		 
	//TCM Vuelo axcial ascendente
	
		viu=(-(vc/2*vi)+sqrt((pow(vc/2*vi,2)+1)))*vi;
		cout<<"\n Velocidad Inducida en vuelo ascendente  es="<< viu<<endl;
	
	    pnu=pi+(d*pow(viu+vc,2))/2-(d*pow(vc,2))/2;
				cout<<"\n presion del flujo de aire en vuelo ascendente  es="<< pnu<<endl;
		
		vnu=2*viu;
				cout <<" \n velocidad del flujo de aire en vuelo  ascendenteTCM es="<< vnu<< endl;	
				
		dpu=(d*pow(vnu+vc,2))/2-(d*pow(vc,2))/2;
			cout <<"\n diferencia de presiones en  vuelo  ascendente  es="<< dpu <<endl;	
	
		tu=2*d*s*((viu+vc)*viu);
			cout <<"\n empuje en  ascendente vuelo   es="<< tu <<endl;	
			
		ptu=tu*viu;
			cout <<" \n potencia en ascendente vuelo  es="<< ptu <<endl;		
		
	//TCM Vuelo axial descendente
			if ((-1.5<=vc/vi) && (vc/vi<=0)){
				cout<< "\nAnillos de vortice en vuelo descendente"<<endl;
				vida=(k-vc/vi)*vi;
				cout<<"\n Velocidad Inducida en vuelo descendente es="<< vida<<endl;
			}
			else{
	
				if ((-2<=vc/vi)&&(vc/vi<=-1.5)){
				cout<< "\n Estado de estela turbulenta vuelo descendente" << endl;
				vida=k*(7+3*(vc/vi))*vi;
				cout<<"\n Velocidad Inducida en vuelo descendente es="<< vida<<endl;
			}
			
			else{
				if(vc/vi<-2){
					cout<< "\n Molinete frenante vuelo descendente" << endl;
				vida=((vc/2*vi)-sqrt((pow(vc/2*vi,2)+1)))*vi;
						cout<<"\n Velocidad Inducida en vuelo descendente es="<< vida<<endl;
				}
				
			else{
					cout<<"\nIntroduce otro vc="<<endl;
			}	
			}
				}
				
			td=-(2*d*s*((vida+vc)*vida));
				cout<<"\n empuje en vuelo descendente es ="<< td<<endl;
				
				ptd=td*(-abs(vc)+vida);
				cout<<"\n potencia en vuelo descendente es ="<<ptd<<endl;
				
	// Autorrotación 
	
		
				
				
				
					
	//Fifura de merito
	
	     if (pt>0){
			m=(pt/(pt+pto));
			
		cout<<"\n figura de merito="<< m<<endl;
		 }
		else{
		
			m=1+((cpo*sqrt(2))/pow(ct,3/2));
			cout<<"\n figura de merito="<< m<<endl;
		}			
				
	// Teorema de pala
	
	//Hover 
	
	
	cout << "Hover" <<  endl;	
	
		for ( int y=10; y<=100; y+=10 ){
			
			

	vr=sqrt(pow(vi+vc,2)+pow(omega*y,2));
		cout<<"\n Velocidad relativa en hover="<<vr<<endl;
		
	fi=atan(vc+vi)/(omega*y);
		cout<<"\n Angulo de incidencia="<<fi<<endl;
	
	}

		
	

	
	
	
	
	
	
	

		
		
		
		
		
		
		
		
		
		

		
			
	
	
			return 0;
}



	
	

