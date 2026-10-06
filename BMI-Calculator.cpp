#include<iostream>
#include<string>
using namespace std;

void Skinny()
{
   cout<<" 1 - You should do a food system. "<<endl;
   cout<<" 2 - Play exersise to make your muscles bigger.  "<<endl;  
   cout<<" 3 - The food you eat should have high percentage of protein. "<<endl;
}
void OverWeight()
{
   cout<<" 1 - First you should reduce eating fast food. "<<endl;
   cout<<" 2 - Second you should eat healthy food like salad and fruit. "<<endl;
   cout<<" 3 - Finally you should do some exersise. "<<endl;
}

int addsigner(string signerName[],int count,int maxSize=50)
{
   if(count >= maxSize)
   {
      cout<< "The school is full."<<endl;
      return count;
   }
   string name;
   cout<<"Please enter the name of the new signer : "<<endl;
   cin>>name;
   
   signerName[count]=name;
   cout<<"New signer added : "<<name<<endl;
   cout<<"The new name number is : "<<count+1<<endl;;
   return count+1;
}

void showSigners(string signerName[],int count)
{
   if(count == 0)
   {
      cout<<"**No one singed yet**"<<endl;
      return ;
   }
   cout<<"Signers list : "<<endl;
   for(int i=0; i<count; i++)
   {
      cout<<(i+1)<<" . "<<signerName[i]<<" ."<<endl;
   }
}

void SkinnyPlan()
{
   char skans;
   cin>>skans;

         if(skans == 'Y' || skans == 'y')
         {
            cout<<" -> Rule 1. better start this plan from saturday..\n";
            cout<<" -> Rule 2. wake up in the mornig in all the week..\n";
            cout<<" -> Rule 3. you should drink alot of water like 2 litr a day..\n";
            cout<<"\n";
            cout<<"- In breakfast eat some food that have caloris and protin like egg and milk.\n";
            cout<<"- In lunch eat food like red meat and vegetables and rice.\n";
            cout<<"- after lunch you should do some exersice or go to gym.\n";
            cout<<"- In dinner eat food like fruit and protin and drink alot of water.\n";

            cout<<"* You should repeat it all the week.."<<endl;


         }
         else if(skans == 'N' || skans == 'n')
         {
            cout<<"...thank for use..."<<endl;
         }
         else
         {
            cout<<"** wrong  input **"<<endl;
         }

}
void OverWplan()
{
   char over;
   cin>>over;

         if(over == 'Y' || over == 'y')
         {
            cout<<"-> Rule 1. better start this plan from saturday..\n";
            cout<<"-> Rule 2. wake up in the mornig in all the week..\n";
            cout<<"-> Rule 3. you should drink alot of water like 2 litr a day..\n";
            cout<<"\n";
            cout<<"- In breakfast eat some food that have caloris and protin like egg and milk.\n";
            cout<<"- In lunch eat food like red meat and vegetables and rice.\n";
            cout<<"- after lunch you should do some exersice or go to gym.\n";
            cout<<"- In dinner eat food like fruit and protin and drink alot of water.\n";

            cout<<"* You should repeat it all the week.."<<endl;


         }
         else if(over == 'N' || over == 'n')
         {
            cout<<"...thank for use..."<<endl;
         }
         else
         {
            cout<<"** wrong  input **"<<endl;
         }

}

void ShowUserOp()
{
   cout<<"1. Add new Subscriber."<<endl;
   cout<<"2. Show the list of subscribers."<<endl;
}

int main()
{
   char someone;
   cout<<"******************************************************************"<<endl;

   cout<<"\n              - WELCOM TO MY SECOND APPLICATION -                \n"<<endl;
   cout<<"- This application will calculate your BMI to see your body condition😊.. "<<endl;
   cout<<"- Lets see if you are skinny or normal body or you are fat 🤔. \n"<<endl;
      const int maxsize = 50;
      string name[maxsize];
      int count = 0;
   do{

      cout<<"If you want to start write 'S' else write 'N' : ";
      cin>>someone;
      cout<<"\n";

      if(someone=='S' || someone=='s')
      {
         int ch;
         ShowUserOp();
         cout<<"Choose an option (1 or 2): ";
         cin>>ch;
         cout<<"\n";

         if(ch == 1)
         {       
            count = addsigner(name,count,maxsize);
          //  count = count + 1;
            cout<<"\n";

            float hight;
            cout<<"\nplease enter your hight in cm : ";
            cin>>hight;

            hight = hight / 100;
            
            cout<<"\n";

            float weight;
            cout<<"please enter your weight in kg : ";
            cin>>weight;
            cout<<"\n";

               if( hight > 0 && weight > 0 )
               {
                     cout<<"\n";

                     float BMI = weight / (hight * hight);
                     cout<<"BMI = "<<BMI<<"\n";

                     cout<<"\n";

                     if( BMI < 18.5 )
                     {
                        cout<<"You are skinny\n";
                        cout<<"\n";

                        char ans;
                        cout<<"If you need some advices please write (Y) if not write (N) : ";
                        cin>>ans;

                              if( ans == 'Y' || ans == 'y' )
                              {
                                 
                                 cout<<"\n";
                                 Skinny();
                                 cout<<"\n";
                                 cout<<"Would you need a plan for all the week ? (answer be 'Y' or 'N')\n";
                                 SkinnyPlan();
                              
                              }
                              else if( ans == 'N' || ans == 'n' )
                              {
                                 cout<<"\n";
                                 cout<<"** think again this advices well help you **\n"<<endl;

                                 cout<<"If you change your mind for the advices write (Y) if not write (N) : ";
                                 cin>>ans;

                                       if( ans == 'Y' || ans == 'y' )
                                       {
                                          cout<<"\n";
                                          Skinny();
                                          cout<<"\n";
                                          cout<<"Would you need a plan for all the week ? (answer be 'Y' or 'N')\n";
                                          SkinnyPlan();
                                       
                                       }
                                       else if( ans == 'N' || ans == 'n' )
                                       {
                                          cout<<"\n";
                                          cout<<"I am just want to help you \n";
                                       }
                                       else
                                       {
                                          cout<<"WRONG INPUT WRITE (Y) OR (N) ONLY "<<endl;
                                       }
                              }
                     }   
                     
                     else if( BMI >= 18.5 && BMI < 24.9 )
                     {
                        cout<<"Your weight is normal";
                     }
                     else if( BMI >= 25 && BMI <30 )
                     {
                        cout<<"You overweight \n";
                        cout<<"\n";

                        char ans;
                        cout<<"If you need some advices please write (Y) if not write (N) : ";
                        cin>>ans;

                              if( ans == 'Y' || ans == 'y' )                              
                              {
                                 cout<<"\n";
                                 OverWeight(); 
                                 cout<<"\n";

                                 cout<<"Would you need a plan for all the week ? (answer be 'Y' or 'N')\n";
                                 OverWplan();                       
                              }
                              else if( ans == 'N' || ans == 'n' )
                              {
                                 cout<<"\n";
                                 cout<<"\n** think again this advices well help you **\n"<<endl;

                                 cout<<"If you change your mind for the advices write (Y) if not write (N) : ";
                                 cin>>ans;

                                       if( ans == 'Y' || ans == 'y' )
                                       {
                                          cout<<"\n";
                                          OverWeight();
                                          cout<<"\n";

                                          cout<<"Would you need a plan for all the week ? (answer be 'Y' or 'N')\n";
                                          OverWplan();
                                       }
                                       else if( ans == 'N' || ans == 'n' )
                                       {
                                          cout<<"\n";
                                          cout<<"I am just want to help you \n";
                                       }
                                       else
                                       {
                                          cout<<" WRITE (Y) OR (N) ONLY "<<endl;
                                       }
                              }
                              else
                              {
                                 cout<<" WRITE (Y) OR (N) ONLY "<<endl;
                              }              
                     }
                     else if( BMI > 30 )
                     {
                        cout<<"\nyou have obesity. \n";
                        cout<<"you have to see a doctor as fast as you can because with time you may have a heart attack. \n";
                     }
                  
            
               else
               {
                  cout<<"\n";
                  cout<<"_____________________________\n"<<endl;
                  cout<<"| you are not joking right? |\n";
                  cout<<"_____________________________"<<endl;
               }       
         
            cout<<"\n";
            cout<<"******************************************************************"<<endl;
               }
        }
   
        else if(ch == 2)
        {
          showSigners(name,count);
        }
        else
        {
          cout<<"** Wrong input **"<<endl;
        }
      }
   
   
   else if(someone=='N' || someone=='n')    
   {
      cout<<"\nIt is what you need"<<endl;
      break;
   }
   else
   {
      cout<<"Wrong Input"<<endl;
      break;
   }
   
      
   }while(someone == 'S' || someone == 's');   

     cout<<"\n";  
     
   return 0;
}
