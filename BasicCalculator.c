#include<stdio.h>
#include<math.h>

double divisition(double,double);
double modulas(int,int); //modulas works on only in integer number 
void print_Menu();

int main()
{
    int choice;
    double first,second,result;

    while(1){
        print_Menu();
        scanf("%d",&choice);

        if(choice==7){
            break;
        }

        if(choice < 1 || choice > 7)
        {
            fprintf(stderr,"Invalid Menu Number.");
            continue;  // Come again in manu option
        }

        printf("\n Please enter the first number: ");
        scanf("%lf",&first);
        printf(" Now, Please enter the second number: ");
        scanf("%lf",&second);

        switch(choice){
            case 1:    //Add
                result= first + second;
                break; 
            case 2:    //Subtract
                result= first - second;
                break;
            case 3:    //Multiply
                result= first * second;
                break;
            case 4:    //Divide
                result= divisition(first,second);
                break;
            case 5:    //Modulas
                result= modulas(first,second);
                break;
            case 6:    //Power
                result= pow(first,second);
                break;
        }
        if(!isnan(result)){   //When number is not NAN then print result 
            printf("\n Result of operation is: %.2lf",result);
        }
    };

    print("\n Developed by:Akash_21");

}

double divisition(double a ,double b ){
    if(b==0){
        fprintf(stderr,"Invalid Argument for Divition") //stderr = Standard error that present in fprintf
        return NAN; // Not A Number
    }else{
        return a / b;
    }
}
double modulas(int a ,int b ){  //NAN is return double value so return type will be double
    if(b==0){
        fprintf(stderr,"Invalid Argument for Modulas") //stderr = Standard error that present in fprintf
        return NAN; // Not A Number
    }else{
        return a % b;
    }
}
void print_Menu(){

    printf("\n\n------------------------------")
    printf("\n Welcome to simple calculator \n");
    printf("\n Welcome to simple calculator \n");
    printf("'n Choose one of the following option:");
    printf("\n 1. Add");
    printf("\n 2. Subtract ");
    printf("\n 3. MUltiply");
    printf("\n 4. Divide");
    printf("\n 5. Modulas");
    printf("\n 6. Power");
    printf("\n 7. Exit");

    printf("Now, Enter your choice:");
}
