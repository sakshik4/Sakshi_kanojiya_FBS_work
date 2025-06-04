void main()
{
	 double basic_salary=200000;
	 double da,ta,hr,total_salary;
	 if(basic_salary<=5000)
	 {
	 	da=basic_salary*0.10;
	    ta=basic_salary*0.20;
	    hr=basic_salary*0.25;
	 }
	 else{
	 	da=basic_salary*0.15;
	    ta=basic_salary*0.25;
	    hr=basic_salary*0.30;
	 }
	 total_salary=basic_salary+da+ta+hr;
	 printf("Total salary is %lf",total_salary);
}
	 