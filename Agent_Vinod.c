#include <stdio.h>
//4567
int main()
{
    int i,j,a,b,c,d;
    char ch;
    printf("You are given a task to open the briefcase that is in front of you which contains sensitive information \n Are you ready to take the challenge Agent Vinod(Y|N)");
    scanf("%c",&ch);
    if(ch=='y' || ch =='Y')
    {
        printf("Okay!! Good Luck \n");
        printf("          __\n");         
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |0|0|0|0|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n"); 
        printf("You Have 5 Chances Before The Security Is Awared \n");      
        for(i=0;i<5;i++)
        {
        printf("Enter First Digit");
        scanf("%d",&a);
        printf("Enter Second Digit");
        scanf("%d",&b);
        printf("Enter Third Digit");
        scanf("%d",&c);
        printf("Enter Fourth Digit");
        scanf("%d",&d);        
            if(a==4 && b==5 && c==6 && d==7)
            {
        printf("          __\n");         
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |4|5|6|7|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n"); 
                printf("Congratulations You successfully have access to the sensitive information");
                printf("\n Nice Work Agent Vinod");
                break;
            }
            else if(a!=4 && c!=6 &&b!=5 && d!=7)
                {
                
        printf("          __\n");        
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |X|X|X|X|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n"); 
                }
                else if(b!=5 && c!=6 && d!=7)
                {
                
        printf("          __\n");      
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |0|X|X|X|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n"); 
                }
                else if(a!=4 && c!=6 && d!=7)
                {
                
        printf("          __\n");         
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |X|0|X|X|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n"); 
                }
                else if(a!=4 && b!=5 && d!=7)
                {
                
        printf("          __\n");         
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |X|X|0|X|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n");  
                }
        else if(a!=4 && b!=5 && c!=6)
                {
                
        printf("          __\n");        
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |X|X|X|0|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n"); 
                }
            else if(a!=4 && b!=5)
                {
                
        printf("          __\n");         
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |X|X|0|0|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n"); 
                }
                 else if(a!=4 && c!=6)
                {
                
        printf("          __\n");        
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |X|0|X|0|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n"); 
                }
                 else if(a!=4 && d!=7)
                {
                
        printf("          __\n");         
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |X|0|0|X|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n"); 
                }
                 else if(b!=5 && c!=6)
                {
                
        printf("          __\n");         
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |0|X|X|0|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n"); 
                }
                 else if(b!=5 && d!=7)
                {
                
        printf("          __\n");         
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |0|X|0|X|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n");  
                }
                 else if(c!=6 && d!=7)
                {
                
        printf("          __\n");        
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |0|0|X|X|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n"); 
                }
                else if(a!=4)
                {
                
        printf("          __\n");         
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |X|0|0|0|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n"); 
                }
                else if(b!=5)
                {
                
        printf("          __\n");         
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |0|X|0|0|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n"); 
                }
                else if(c!=6)
                {
                
        printf("          __\n");         
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |0|0|X|0|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n"); 
                }
                else if(d!=7)
                {
                               
        printf("          __\n");         
        printf(" ________|__|________ \n");          
        printf("|                    |\n");         
        printf("|--------------------|\n");         
        printf("|     |0|0|0|X|      | \n");         
        printf("|--------------------| \n");         
        printf("|____________________|\n"); 
    
                }
        }
                
                
                
        
    }
    else
    {
        printf("IF You are not ready,Leave the mission");
    }
    

}
