#include<iostream>
#include<cmath> 
#include<iomanip>
using namespace std;

int main() 
{
    double  weight = 0, BFP = 0, cm = 0, height_meter = 0, FFMW = 0, Target_weight = 0, Aim = 0, BFP_to_reduce = 0, BMI = 0, stand = 0.85;
    double P1_per = 0, P1_tar_per = 0, cal = 0, p1 = 0, First_phase = 0, Phase_one_target = 0;
    int weeks = 0;
    string Gender = "Male"; 
    cout << "Choose your gender: ";
    getline(cin, Gender);
    
    if (Gender == "Male" || Gender == "male") {
        cout << "Enter your weight: ";
        cin >> weight;
        cout << "Enter your BFP: ";
        cin >> BFP;
        FFMW = weight - BFP; 
        Target_weight = FFMW / stand;
        Aim = weight - Target_weight;
        if(weight > 80)
        {
	        if (BFP > 15) 
			{
				for(int i= 15; i<BFP; i++)
				{
					BFP_to_reduce++;
				}
				cout<<"\n\n\nOur goal is to travel from "<<weight<<"kg to "<<setprecision(3)<<Target_weight<<"kg"<<"\n";
				cout<<"Weight needs to be reduced :"<<setprecision(3)<<Aim<<"kgs"<<"\n";
	            cout << "BFP needs to reduce: "<<setprecision(3) << BFP_to_reduce<<"%"<<"\n";
	            cout<<"\n\n\n";
	            
	            //phase-1
	            cout<<"phase-1\n";
	            P1_per = BFP_to_reduce / 2;
	            P1_tar_per = BFP - P1_per;
	            cal = P1_tar_per / 100;
	            p1 = 1 - cal;
	            First_phase = FFMW / p1;
	            Phase_one_target = weight - First_phase;
	            cout<<"In the First phase we are going to travel from "<<weight<<"kg to "<<setprecision(3)<<First_phase<<"kg"<<"\n";
	            cout << "Phase one target weight to reduce: "<<setprecision(3) << Phase_one_target<<"kgs"<<"\n";
	            
	            if (BFP >= 16 && BFP <= 24) 
				{
	                for (float i = weight; i >= First_phase; i -= 0.8) 
					{
	                    weeks++;
	                }
	                    cout << "No of weeks: " << weeks<<"weeks"<<"\n";
	            
	            }
	            else if (BFP > 24) 
				{
	                for (float i = weight; i >= First_phase; i -= 1) 
					{
	                    weeks++;
	                }
	                cout << "No of weeks: " << weeks <<"weeks"<<"\n";
	            }
	            else 
				{
	                cout << "Your body fat percentage is in the optimal range." <<"\n";
	            }
	            cout<<"\n\n\n";
	            //phase-2
	            cout<<"phase-2\n";
	            float P2_per = P1_per/2;
	            float P2_tar_per = P1_tar_per - P2_per;
	            cal = P2_tar_per/100;
	            float P2 = 1-cal;
	            float second_phase = FFMW/P2;
	            float Phase_two_target = First_phase - second_phase;
	            cout<<"In the second phase we are going to travel from "<<setprecision(3)<<First_phase<<"kg to "<<setprecision(3)<<second_phase<<"kg"<<"\n";
	            cout << "Phase two target weight to reduce: "<<setprecision(3) <<Phase_two_target<<"kgs"<<"\n";
	            if (BFP >= 16 && BFP <= 20) 
				{
					int weeks_two = 0;
					
	                for (float i = First_phase; i >= second_phase; i -= 0.5) 
					{
	                    weeks_two++;
	                }
	                    cout << "No of weeks: " << weeks_two<<"weeks"<<"\n";            
	            }
	            else if (BFP > 20) 
				{
					int weeks_two = 0;
					
	                for (float i = First_phase; i >= second_phase; i -= 0.75) 
					{
	                    weeks_two++;
	                }
	                cout << "No of weeks: " << weeks_two <<"weeks"<<"\n";
	            }
	            else 
				{
	                cout << "Your body fat percentage is in the optimal range." <<"\n";
	            }
	            cout<<"\n\n\n";
	            //phase-3
	            float P3_per = P1_per/2;
	            float P3_tar_per = P2_tar_per - P3_per;
	            cal = P3_tar_per/100;
	            float P3 = 1-cal;
	            float third_phase = FFMW/P3;
	            float Phase_three_target = second_phase - third_phase;
	            if(second_phase>third_phase)
	            {
				    cout<<"phase-3\n";
		            cout<<"In the Third phase we are going to travel from "<<setprecision(3)<<second_phase<<"kg to "<<setprecision(3)<<third_phase<<"kg"<<"\n";
		            cout << "Phase three target weight to reduce: "<<setprecision(3) << Phase_three_target<<"kgs"<<"\n";
		            if (BFP >= 15) 
					{
						int weeks_three = 0;
						
		                for (float i = second_phase; i >= third_phase; i -=0.5) 
						{
		                    weeks_three++;
		                }
		                    cout << "No of weeks: " << weeks_three<<"weeks"<<"\n";
		            
		            }
		            else 
					{
		                cout << "Your body fat percentage is in the optimal range." <<"\n";
		            }
		        }
		        else 
		        {
		        	cout<<"you have already reached the goal";
				}
	        }
	        else if(BFP == 15) 
		    {
	            cout << "Proper BFP good" << "\n";
	        }
	        else
	        {
	        	cout << "You need to maintain your BFP" << "\n";
	        	cout<<"Our goal is to travel from "<<weight<<"kg to "<<setprecision(3)<<Target_weight<<"kg"<<"\n";
			}
	    }
	    else
	    {
	    	cout<<"Your are in the good state";
		}
    }
    if (Gender == "Female" || Gender == "female") 
	{
        cout << "Enter your weight: ";
        cin >> weight;
        cout << "Enter your BFP: ";
        cin >> BFP;
        FFMW = weight - BFP; 
	    Target_weight = FFMW / 0.77;
	    Aim = weight - Target_weight;
	    if(weight>=80)
	    {
		
		    if (BFP > 23) 
			{
				for(int i= 23; i<BFP; i++)
				{
					BFP_to_reduce++;
				}
				cout<<"\n\n\nOur goal is to travel from "<<weight<<"kg to "<<setprecision(3)<<Target_weight<<"kg"<<"\n";
				cout<<"Weight needs to be reduced :"<<setprecision(3)<<Aim<<"kgs"<<"\n";
		        cout << "BFP needs to reduce: "<<setprecision(3) << BFP_to_reduce<<"%"<<"\n";
		        cout<<"\n\n\n";
		            
		        //phase-1
		        cout<<"phase-1\n";
		        P1_per = BFP_to_reduce / 2;
		        P1_tar_per = BFP - P1_per;
		        cal = P1_tar_per / 100;
		        p1 = 1 - cal;
		        First_phase = FFMW / p1;
		        Phase_one_target = weight - First_phase;
		        cout<<"In the First phase we are going to travel from "<<weight<<"kg to "<<setprecision(3)<<First_phase<<"kg"<<"\n";
		        cout << "Phase one target weight to reduce: "<<setprecision(3) << Phase_one_target<<"kgs"<<"\n";
		            
		        if (BFP >= 24 && BFP <= 30) 
				{
		            for (float i = weight; i >= First_phase; i -= 0.8) 
					{
		                weeks++;
		            }
		            cout << "No of weeks: " << weeks<<"weeks"<<"\n";
		            
		        }
		        else if (BFP > 30) 
				{
		            for (float i = weight; i >= First_phase; i -= 1) 
					{
		                weeks++;
		            }
		            cout << "No of weeks: " << weeks <<"weeks"<<"\n";
		        }
		        else 
				{
		            cout << "Your body fat percentage is in the optimal range." <<"\n";
		        }
		            cout<<"\n\n\n";
		            //phase-2
		            cout<<"phase-2\n";
		            float P2_per = P1_per/2;
		            float P2_tar_per = P1_tar_per - P2_per;
		            cal = P2_tar_per/100;
		            float P2 = 1-cal;
		            float second_phase = FFMW/P2;
		            float Phase_two_target = First_phase - second_phase;
		            cout<<"In the second phase we are going to travel from "<<setprecision(3)<<First_phase<<"kg to "<<setprecision(3)<<second_phase<<"kg"<<"\n";
		            cout << "Phase two target weight to reduce: "<<setprecision(3) <<Phase_two_target<<"kgs"<<"\n";
		            if (BFP >= 24 && BFP <= 28) 
					{
						int weeks_two = 0;
						
		                for (float i = First_phase; i >= second_phase; i -= 0.5) 
						{
		                    weeks_two++;
		                }
		                    cout << "No of weeks: " << weeks_two<<"weeks"<<"\n";            
		            }
		            else if (BFP > 28) 
					{
						int weeks_two = 0;
						
		                for (float i = First_phase; i >= second_phase; i -= 0.75) 
						{
		                    weeks_two++;
		                }
		                cout << "No of weeks: " << weeks_two <<"weeks"<<"\n";
		            }
		            else 
					{
		                cout << "Your body fat percentage is in the optimal range." <<"\n";
		            }
		            cout<<"\n\n\n";
		            //phase-3
		            float P3_per = P1_per/2;
		            float P3_tar_per = P2_tar_per - P3_per;
		            cal = P3_tar_per/100;
		            float P3 = 1-cal;
		            float third_phase = FFMW/P3;
		            float Phase_three_target = second_phase - third_phase;
		            if(second_phase>third_phase)
		            {
					    cout<<"phase-3\n";
			            cout<<"In the Third phase we are going to travel from "<<setprecision(3)<<second_phase<<"kg to "<<setprecision(3)<<third_phase<<"kg"<<"\n";
			            cout << "Phase three target weight to reduce: "<<setprecision(3) << Phase_three_target<<"kgs"<<"\n";
			            if (BFP > 23) 
						{
							int weeks_three = 0;
							
			                for (float i = second_phase; i >= third_phase; i -=0.5) 
							{
			                    weeks_three++;
			                }
			                    cout << "No of weeks: " << weeks_three<<"weeks"<<"\n";
			            
			            }
			            else 
						{
			                cout << "Your body fat percentage is in the optimal range." <<"\n";
			            }
			        }
			        else 
			        {
			        	cout<<"you have already reached the goal";
					}
		        }
	        else if(BFP == 23) 
			{
	            cout << "Proper BFP good" << "\n";
	        }
	        else
	        {
	        	cout << "You need to maintain your BFP" << "\n";
	        	cout<<"Our goal is to travel from "<<weight<<"kg to "<<setprecision(3)<<Target_weight<<"kg"<<"\n";
			}
	    }
    }
    return 0;
}
