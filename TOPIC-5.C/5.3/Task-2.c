#include<stdio.h>
#include<conio.h>
int main()
{
  int choice;
  clrscr();

  printf("Press 1 for ENGLISH\n");
  printf("HINDI ke liya 2 dabaiye\n");
  printf("GUJRATI mate 3 dabavo\n");

  printf("Enter your choice: ");
  scanf("%d",&choice);

  switch(choice)
{
	case 1:
	      printf("Press 1 for TOP-UP RECHARGE\n");
	      printf("Press 2 for INTERNET RECHARGE\n");
	      printf("Press 3 for MANUAL RECHARGE\n");

	      printf("Enter your choice: ");
	      scanf("%d",&choice);

	      switch(choice)
	      {
 case 1:
		     printf("ARE YOU SURE\n");
		     printf("PRESS 1 FOR YES\n");
		     printf("PRESS 2 FOR NO\n");

		     
		     printf("Enter your choice: ");
		     scanf("%d",&choice);
		     
	      
		     switch(choice)
	          {
              case 1:
		     printf("Your TOP-UP plan sucsessfully done"); break;
		     case 2:
		     printf("Your plan was cenceled");   break;
		     default: 
		     printf(".....ERROR...."); break;
		     
	          }
	          break;
	      
             case 2:
  
		   printf("ARE YOU SURE\n");
		   printf("PRESS 1 FOR YES\n");
		   printf("PRESS 2 FOR NO\n");
		   
		   printf("Enter your choice: ");
		   scanf("%d",&choice);
		   
		   switch(choice)
		   {
		        case 1:
		        printf("Your INTERNET plan was sucsessfully done") ; break;
		        case 2:
		        printf("Your selected plan cenceled"); break;
		        default:
		        printf("......ERRORE......"); break;
		    }
	        break;
           case 3:
	          printf("ARE YOU SURE\n");  
	          printf("PRESS 1 FOR YES\n");
	          printf("PRESS 2 FOR NO\n");
	          
	          printf("Enter your choice: ");
	          scanf("%d",&choice);
	          
	          switch(choice)
	          {
	          	case 1:
	          	printf("Your MANUL RECHARGE sucsesfully done"); break;
	          	case 2:
	          	printf("Your selected plan was cenceled");break;
	          	
	          }
	          }
	      break;
	      case 2:
	      printf("TOP-UP RECHARGE karne ke liye 1 dabaiye\n");
	      printf("INTERNET RECHARGE kane ke liye 2 dabaiye\n");
	      printf("MANUL RECHARGE karne ke liye 3 dabaiya\n");
	      
	      printf("Enter your choice: ");
	      scanf("%d",&choice);
	      
	      switch(choice)
	      {
	      	case 1:
	      	printf("KYA APKO YAKIN HE\n");
	      	printf("HA KE LIYE 1 DABAIYE\n");
	      	printf("NA KE LIYE 2 DABAIYE\n");
	      	
	      	printf("Apki pasand likhiye: ");
	      	scanf("%d",&choice);
	      	
	      	switch(choice)
	           {
	           	case 1:
	           	printf("apka TOP-UP RECHARGE safal ho gya he"); break;
	           	case 2:printf("apka TOP-UP RECHARGE rad kar diya he");break;
	           }
	          break;
	           case 2:
	           printf("KYA APKO AKIN HE\n");
	           printf("HA KE LIYE 1 DABAIYE\n");
	           printf("NA KE LIYE 2 DABAIYE\n");
	           
	           printf("Apki pasand likhiye: ");
	           scanf("%d",&choice);
	           
	           switch(choice)
	           {
	           	case 1:
	           	printf("Apka INTERNET RECHARGE safal ho gya he"); break;
	           	case 2:
	           	printf("Apka INTERNET RECHARGE rud kar diya he"); break;
	           }
	           break;
	           case 3:
	           printf("KYA APKO YAKIN HE\n");
	           printf("HA KE LIYE 1 DABAIYE\n");
	           printf("NA KE LIYE 2 DABAIYE\n");
	           
	           printf("Apki pasand likhiye: ");
	           scanf("%d",&choice);
	           
	           switch(choice)
	           {
	           case 1:
	           printf("Apka MANUAL RECHARGE safal ho gya he"); break;
	           case 2:
	           printf("Apka MANUAL RECHARGE rud kar diya he "); break;
	           }
	      }
	          break;
	          case 3:
	          printf("TOP-UP RECHARGE karva mate 1 dabavo\n");
	          printf("INTERNET RECHARGE karva mate 2 dabavo\n");
	          printf("MANUAL RECHARGE karva mate 3 dabavo\n");
	         
	         printf("Tamari pasend lakho:");
	         scanf("%d",&choice);
	         
	         switch(choice)
	         {
	         case 1:
	                    printf("ARE YOU SURE\n");
	                    printf("HA MATE 1 DABAVO\n");
	                    printf("NA MATE 2 DABAVO\n");
	                    
	                    printf("Tamari pasend lakho\n");
	                    scanf("%d",&choice);
	                    
	                    switch(choice)
	                    {
	                    	case 1:
	                    	printf("Tamru TOP-UP RECHARGE SAFLTA PURVEK THY GYU CHE"); break;
	                    	case 2:
	                    	printf("Tamaro pasend karelo plan rad karvama avyo che"); break;
	                    }
	         case 2:
	          printf("ARE YOU SURE\n");
	                    printf("HA MATE 1 DABAVO\n");
	                    printf("NA MATE 2 DABAVO\n");
	                    
	                    printf("Tamari pasend lakho\n");
	                    scanf("%d",&choice);
	                    
	                    switch(choice)
	                    {
	                    	case 1:
	                    	printf("Tamru INTERNET RECHARGE SAFLTA PURVEK THY GYU CHE"); break;
	                    	case 2:
	                    	printf("Tamaro pasend karelo plan rad karvama avyo che"); break;
	                    }
	         case 3:
	          printf("ARE YOU SURE\n");
	                    printf("HA MATE 1 DABAVO\n");
	                    printf("NA MATE 2 DABAVO\n");
	                    
	                    printf("Tamari pasend lakho\n");
	                    scanf("%d",&choice);
	                    
	                    switch(choice)
	                    {
	                    	case 1:
	                    	printf("Tamru MANUAL RECHARGE SAFLTA PURVEK THY GYU CHE"); break;
	                    	case 2:
	                    	printf("Tamaro pasend karelo plan rad karvama avyo che"); break;
	                    }
	                    
	         }
}
getch(); 
 }
