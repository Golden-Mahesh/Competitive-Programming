
double find_angle(int a1,int a2,int b1,int b2){
	double angle;
	angle=(a1*a2+b1*b2)/((sqrt(pow(a1,2)+pow(b1,2)))*(sqrt(pow(a2,2)+pow(b2,2))));
	return(angle);
}
