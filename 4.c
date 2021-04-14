#include<stdio.h>
#include<math.h>
#include<windows.h>
void basic();
void add();
void sub();
void mul();
void divs();
void per();
void fact();
void scientific();
void logs();
void tri();
double rad(double num);
void squre();
void power();
void sqrts();
void eq();
void BMI();
void BMI_history();
void file_w(float inp, char msg[]);
void file_w_eq(float root1,float root2,float real,float imag,char msg[]);
void file_r();

struct store
{
    char name[100];
    char id[14];
    float height;
    float weight;
    float  BMI;
} info[100];

//handle storage
int z=0;

int main(){

    system("cls");
    system ("COLOR 03");
    int x,i=0;
    double y;
    char text[] = "\t\t\t\t\t    Welcome to Calculator\n\n";
    printf("\n\n\n");
    for(x=0; text[x]!='\0'; x++)
    {
        printf("%c",text[x]);
        for(y=0; y<=8888888; y++)
        {

        }
    }
    int opt;
    printf("\n\n");
    printf("\n\t\t\t\t\t     Chosse A Calculator\n");
    printf("\t\t\t\t\t-------------------------------\n");
    printf("\t\t\t\t\t-------------------------------\n\n");
    printf("\n\t\t\t 1. Press '1' for Basic\n\n");
    printf("\t\t\t 2. Press '2' for Scientific\n\n");
    printf("\t\t\t 3. Press '3' for BMI\n\n");
    printf("\t\t\t 4. Press '4' for  BMI history\n\n");
    printf("\t\t\t 5. Press '5' for  Calculaton history");
    printf("\n\t\t\t\t");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        basic();
        break;
    case 2:
        scientific();
        break;
    case 3:
        BMI();
        break;
    case 4:
        BMI_history();
        break;

    case 5:
        file_r();
        break;
    default :
        main();
    }

    return 0;
}
//Basic calculator starts
void basic()
{
    system("cls");
    system ("COLOR 02");
    int opt;
    printf("\n\n\t\t\t\t\t\t Chosse an option\n");
    printf("\t\t\t\t\t-------------------------------\n");
    printf("\t\t\t\t\t-------------------------------\n\n\n");
    printf("\t\t\t\t Press '1' for Addition(+)\n\n");
    printf("\t\t\t\t Press '2' for Subtraction(-)\n\n");
    printf("\t\t\t\t Press '3' for Multiplication(*)\n\n");
    printf("\t\t\t\t Press '4' for Division(/)\n\n");
    printf("\t\t\t\t Press '5' for Percentage(%%)\n\n");
    printf("\t\t\t\t Press '6' for Factorial(!)\n\n");
    printf("\t\t\t\t Press '7' for Main menu\n\n");
    printf("\t\t\t\t Press '0' for Exit\n");

    printf("\n          \t\t\t\t");
    scanf("%d",&opt);

    switch(opt)
    {
    case 1:
        add();
        basic();
        break;
    case 2:
        sub();
            basic();
        break;
    case 3:
        mul();
            basic();
        break;
    case 4:
        divs();
            basic();
        break;
    case 5:
        per();
            basic();
        break;
    case 6:
        fact();
            basic();
        break;
    case 7:
             main();
        break;
    case 0:
        break;
    default :
           basic();
    }

}
// Basic addition starts
void add()
{
    system("cls");
    system ("COLOR 6");
    float num,sum=0;
    int n,count=0;
    char msg[]="Addition output : ";
    printf("\n\n\t\t\t\t<--------Addition------->\n\n");
    printf("\n\n\t\t\t\tHow many numbers you want to sum?\n\n\t\t\t\t");
    scanf("%d",&n);
    printf("\t\t\t\t");
    printf("\n\t\t\t\tEnter the numbers\n\n\t\t\t\t");
    while(n!=count)
    {
        scanf("%f",&num);
        printf("\t\t\t\t");
        sum+=num;
        count++;
    }

    file_w(sum,msg);

    printf("\n\t\t\t\tSummation = %.2lf\n\n\t\t\t\t",sum);
    system("Pause");


}
//Basic subtraction starts
void sub()
{
    system("cls");
    system ("COLOR 6");
    float num1,num2,subtraction,num;
    int n;
    char msg[]="Subtraction output : ";
    printf("\n\n\t\t\t\t<--------Subtraction------->\n\n");
    printf("\n\t\t\t\tEnter two numbers\n\n\t\t\t\t");
    scanf("%f",&num1);
    printf("\t\t\t\t");
    scanf("%f",&num2);
    printf("\t\t\t\t");
    subtraction=num1-num2;
    file_w(subtraction,msg);
    printf("\n\t\t\t\tSubtraction = %.2f\n\n",subtraction);

    while(1)
    {
        printf("\n\t\t\t\tSubtract this number again?\n\n\t\t\t\t");
        printf("\n\t\t\t\tPress '1' to yes '2' to no\n\n\t\t\t\t");
        scanf("%d",&n);
        printf("\t\t\t\t");
        if(n==1)
        {
            printf("\n\t\t\t\tEnter the number\n\n\t\t\t\t");
            scanf("%f",&num);
            subtraction-=num;
            file_w(subtraction,msg);
            printf("\n\t\t\t\tSubtraction = %.2f\n\n",subtraction);
        }
        else if(n==2)
        {
            break;
        }
        else
        {
            printf("\nWrong Input!\n");
        }

    }

}
//basic multipication starts
void mul()
{
    system("cls");
    system ("COLOR 6");
    double num,mul=1;
    int n,count=0;
    char msg[]="Multiplication output : ";
    printf("\n\n\t\t\t\t<--------Multiplication------->\n\n");
    printf("\n\t\t\t\tHow many numbers you want to Multiplication?\n\n\t\t\t\t");
    scanf("%d",&n);
    printf("\t\t\t\t");
    printf("\n\t\t\t\tEnter the numbers\n\n\t\t\t\t");
    while(n!=count)
    {
        scanf("%lf",&num);
        printf("\t\t\t\t");
        mul*=num;
        count++;
    }
    file_w(mul,msg);
    printf("\n\t\t\t\tMultiplication = %.2lf\n\n\t\t\t\t",mul);
    system("Pause");
}
//basic division
void divs()
{
    system("cls");
    system ("COLOR 6");
    float num1,num2,num,division;
    int n;
    char msg[]="Division output : ";
    printf("\n\n\t\t\t\t<--------Division------->\n\n");
    printf("\n\t\t\t\tEnter two numbers\n\n\t\t\t\t");
    scanf("%f",&num1);
    printf("\t\t\t\t");
    scanf("%f",&num2);
    division=num1/num2;
    file_w(division,msg);
    printf("\n\t\t\t\tDivision = %.2f\n\n\t\t\t\t",division);

    while(1)
    {
        printf("\n\t\t\t\tDivide this number again?\n\n\t\t\t\t");
        printf("\n\t\t\t\tPress '1' to yes, '2' to no\n\n\t\t\t\t");
        scanf("%d",&n);
        printf("\t\t\t\t");
        if(n==1)
        {
            printf("\n\t\t\t\tEnter the number\n\n\t\t\t\t");
            scanf("%f",&num);
            division/=num;
            file_w(division,msg);
            printf("\n\t\t\t\tDivision = %.2f\n\n\t\t\t\t",division);
        }
        else if(n==2)
        {
            break;
        }
        else
        {
            printf("Wrong Input!");
        }
    }
}
//basic percentages
void per()
{
    system("cls");
    system ("COLOR 6");
    double num,per,ans;
    char msg[]="Percentage output : ";
    printf("\n\n\t\t\t\t<--------Percentage------->\n\n");
    printf("\n\t\t\t\tEnter the number\n\n\t\t\t\t");
    scanf("%lf",&num);
    printf("\t\t\t\t");
    printf("\n\t\t\t\tEnter percentage\n\n\t\t\t\t");
    scanf("%lf",&per);
    printf("\t\t\t\t");
    ans=num*per/100;
    file_w(ans,msg);
    printf("\n\t\t\t\tPercentage = %.2lf\n\n\t\t\t\t",ans);
    system("Pause");

}
//factorial of a number
void fact()
{
    system("cls");
    system ("COLOR 6");
    int fac=1,i,n;
    char msg[]="Percentage output : ";
    printf("\n\n\t\t\t\t<--------Factorial------->\n\n");
    printf("\n\t\t\t\tEnter the number\n\n\t\t\t\t");
    scanf("%d",&n);
    printf("\t\t\t\t");
    for(i=n; i>1; i--)
    {
        fac*=i;
    }
    file_w(fac,msg);
    printf("\n\t\t\t\t%d Factorial = %d\n\n\t\t\t\t",n,fac);
    system("Pause");
}

// scientific start

void scientific()
{
    system("cls");
    system ("COLOR 02");
    int opt;
    printf("\n\n\t\t\t\t\t\t Chosse an option\n");
    printf("\t\t\t\t\t-------------------------------\n");
    printf("\t\t\t\t\t-------------------------------\n\n");
    printf("\t\t\t\t Press '1' for Logarithm \n\n");
    printf("\t\t\t\t Press '2' for Trigonometry  \n\n");
    printf("\t\t\t\t Press '3' for Square \n\n");
    printf("\t\t\t\t Press '4' for power of a number \n\n");
    printf("\t\t\t\t Press '5' for Square root \n\n");
    printf("\t\t\t\t Press '6' for Equation solver \n\n");
    printf("\t\t\t\t Press '7' for Main menu\n\n");
    printf("\t\t\t\t Press '0' for exit\n\n");

    printf("\t\t\t\t");
    scanf("%d",&opt);

    switch(opt)
    {
    case 1:
        logs();
        scientific();
        break;
    case 2:
        tri();
         scientific();
        break;
    case 3:
        squre();
         scientific();
        break;
    case 4:
        power();
         scientific();
        break;
    case 5:
        sqrts();
         scientific();
        break;
    case 6:
        eq();
         scientific();
        break;
    case 7:
        main();
        break;
    case 0:
        break;
    default:
        scientific();
    }

}
//logarithm starts
void logs()
{
    system("cls");
    system ("COLOR 6");
    double num,res;
    int opt;
    char msg[]="Logarithm output : ";
    printf("\n\n\t\t\t\t<--------Logarithm------->\n\n");
    printf("\n\t\t\t\tEnter the number\n\n\t\t\t\t");
    scanf("%lf",&num);
    printf("\t\t\t\t");
    res = log10(num);
    file_w(res,msg);
    printf("\n\t\t\t\tLogarithm = %.2lf\n\n\t\t\t\t",res);

    while(1)
    {
        printf("\n\t\t\t\tWant to do this operation again?\n\n\t\t\t\t");
        printf("\n\t\t\t\tPress '1' for yes & '2' for no\n\n\t\t\t\t");
        scanf("%d",&opt);
        printf("\t\t\t\t");
        if(opt==1)
        {
            printf("\n\t\t\t\tEnter the number\n\n\t\t\t\t");
            scanf("%lf",&num);
            res = log10(num);
            file_w(res,msg);
            printf("\n\t\t\t\tLogarithm(%.2lf) = %.2lf\n\n\t\t\t\t",num,res);
        }
        else if(opt==2)
        {
            break;
        }
        else
        {
            printf("\nWrong Input!\n");
        }
    }

}
void tri()
{
    system("cls");
    system ("COLOR 6");
    int opt;
    double num,ans,toRad;
    char msg[]="Trigonametry output : ";
    printf("\n\n\t\t\t\t<--------Trigonametry------->\n\n");
    printf("\n\t\t\t\tEnter the degree\n\n\t\t\t\t");
    scanf("%lf",&num);
    printf("\t\t\t\t");
    printf("\n\n\t\t\t\tChoose a Trigonometry Function\n\n\t\t\t\t");

    printf(" press '1' for sin\n\n");
    printf("\t\t\t\t press '2' for cos\n\n");
    printf("\t\t\t\t press '3' for tan\n\n");
    printf("\t\t\t\t press '4' for cosec\n\n");
    printf("\t\t\t\t press '5' for sec\n\n");
    printf("\t\t\t\t press '6' for cot\n\n");
    printf("\t\t\t\t press '0' for exit\n\n");
    printf("\t\t\t\t");
    scanf("%d",&opt);

    toRad=rad(num);

    switch(opt)
    {
    case 1:
        printf("\n\t\t\t\tsin(%lf) = %.2lf\n\n",num,sin(toRad));
        file_w(sin(toRad),msg);
        break;
    case 2:
        printf("\n\t\t\t\tcos(%lf) = %.2lf\n\n",num,cos(toRad));
        file_w(cos(toRad),msg);
        break;
    case 3:
        printf("\n\t\t\t\ttan(%lf) = %.2lf\n\n",num,tan(toRad));
        file_w(tan(toRad),msg);
        break;
    case 4:
        printf("\n\t\t\t\tcosec(%lf) = %.2lf\n\n",num,1/sin(toRad));
        file_w(1/sin(toRad),msg);
        break;
    case 5:
        printf("\n\t\t\t\tsec(%lf) = %.2lf\n\n",num,1/cos(toRad));
        file_w(1/cos(toRad),msg);
        break;
    case 6:
        printf("\n\t\t\t\tcot(%lf) = %.2lf\n\n",num,1/tan(toRad));
        file_w(1/tan(toRad),msg);
        break;
    default :
        printf("\nWrong Input!\n");

    }
    system("Pause");
}

double rad(double num)
{
    system ("COLOR 6");
    return (num*3.1416)/180;
}

void squre()
{
    system("cls");
    system ("COLOR 6");
    double num,ans;
    int opt;
    char msg[]="Squre output : ";
    printf("\n\n\t\t\t\t<--------Squre------->\n\n");
    printf("\n\t\t\t\tEnter the number\n\n\t\t\t\t");
    scanf("%lf",&num);
    printf("\t\t\t\t");
    ans=num*num;
    file_w(ans,msg);
    printf("\n\t\t\t\t%.2lf ^ 2 = %.2lf\n\n\t\t\t\t",num,ans);
    while(1)
    {
        printf("\n\t\t\t\tWant to do this operation again?\n\n\t\t\t\t");
        printf("\n\t\t\t\tPress '1' for yes & '2' for no\n\n\t\t\t\t");
        scanf("%d",&opt);
        printf("\t\t\t\t");
        if(opt==1)
        {
            printf("\n\t\t\t\tEnter the number\n\n\t\t\t\t");
            scanf("%lf",&num);
            printf("\t\t\t\t");
            ans=num*num;
            printf("\n\t\t\t\t %.2lf ^ 2 = %.2lf\n\n\n\t\t\t\t",num,ans);
            file_w(ans,msg);
        }
        else if(opt==2)
        {
            break;
        }
        else
        {
            printf("\nWrong Input!\n");
        }
    }


}

void sqrts()
{
    system("cls");
    system ("COLOR 6");
    double num,ans;
    int opt;
    char msg[]="Squre roots output : ";
    printf("\n\n\t\t\t\t<--------Squre root------->\n\n");
    printf("\n\t\t\t\tEnter the number\n\n\t\t\t\t");
    scanf("%lf",&num);
    printf("\t\t\t\t");
    ans = sqrt(num);
    file_w(ans,msg);
    printf("\n\t\t\t\tsqure root(%.2lf) = %.2lf\n\n\t\t\t\t",num,ans);

    while(1)
    {
        printf("\n\t\t\t\tWant to do this operation again?\n\n\t\t\t\t");
        printf("\n\t\t\t\tPress '1' for yes & '2' for no\n\n\t\t\t\t");
        scanf("%d",&opt);
        printf("\t\t\t\t");
        if(opt==1)
        {
            printf("\n\t\t\t\tEnter the number\n\n\t\t\t\t");
            scanf("%lf",&num);
            printf("\t\t\t\t");
            ans = sqrt(num);
            file_w(ans,msg);
            printf("\n\t\t\t\tsqure root(%.2lf) = %.2lf\n\n\t\t\t\t",num,ans);
        }
        else if(opt==2)
        {
            break;
        }
        else
        {
            printf("\nWrong Input!\n");
        }
    }
}


void eq()
{
    system("cls");
    system ("COLOR 6");
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    int opt;
    char msg[]="Equation output : ";
    printf("\n\n\t\t\t\t<--------Equation Solver------->\n\n");
    printf("\n\t\t\t\tEnter coefficients a, b and c: \n\n\t\t\t\t");
    scanf("%lf", &a);
    printf("\t\t\t\t");
    scanf("%lf",&b);
    printf("\t\t\t\t");
    scanf("%lf",&c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        //passing arguments
        file_w_eq(root1,root2,0.0,0.0,msg);
        printf("\n\t\t\t\troot1 = %.2lf and root2 = %.2lf\n\n\t\t\t\t", root1, root2);
    }


    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);

        file_w_eq(root1,root1,0.0,0.0,msg);
        printf("\n\t\t\t\troot1 = root2 = %.2lf\n\n\t\t\t\t", root1);
    }


    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);

        file_w_eq(0.0,0.0,realPart,imagPart,msg);
        printf("\n\t\t\t\troot1 = %.2lf + %.2lfi and root2 = %.2f - %.2fi\n\n\t\t\t\t", realPart, imagPart, realPart, imagPart);
    }
    while(1)
    {
        printf("\n\t\t\t\tWant to do this operation again?\n\n\t\t\t\t");
        printf("\n\t\t\t\tPress '1' for yes & '2' for no\n\n\t\t\t\t");
        scanf("%d",&opt);
        printf("\t\t\t\t");
        if(opt==1)
        {
            printf("\n\t\t\t\tEnter coefficients a, b and c:\n\n\t\t\t\t");
            scanf("%lf", &a);
            printf("\t\t\t\t");
            scanf("%lf",&b);
            printf("\t\t\t\t");
            scanf("%lf",&c);

            discriminant = b * b - 4 * a * c;

            if (discriminant > 0)
            {
                root1 = (-b + sqrt(discriminant)) / (2 * a);
                root2 = (-b - sqrt(discriminant)) / (2 * a);
                printf("\n\t\t\t\troot1 = %.2lf and root2 = %.2lf\n\n\t\t\t\t", root1, root2);
                file_w_eq(root1,root2,0.0,0.0,msg);
            }


            else if (discriminant == 0)
            {
                root1 = root2 = -b / (2 * a);
                file_w_eq(root1,root1,0.0,0.0,msg);
                printf("\n\t\t\t\troot1 = root2 = %.2lf\n\n\t\t\t\t", root1);
            }


            else
            {
                realPart = -b / (2 * a);
                imagPart = sqrt(-discriminant) / (2 * a);
                file_w_eq(0.0,0.0,realPart,imagPart,msg);
                printf("\n\t\t\t\troot1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi\n\n\t\t\t\t", realPart, imagPart, realPart, imagPart);
            }
        }
        else if(opt==2)
        {
            break;
        }
        else
        {
            printf("\nWrong Input!\n");
        }
    }
}

//power of a number
void power()
{
    system("cls");
    system ("COLOR 6");
    double num,ans;
    int po,opt;
    char msg[]="Power output : ";
    printf("\n\n\t\t\t\t<--------Power------->\n\n");
    printf("\n\t\t\t\tEnter the number\n\n\t\t\t\t");
    scanf("%lf",&num);
    printf("\t\t\t\t");
    printf("\n\t\t\t\tEnter the power\n\n\t\t\t\t");
    scanf("%d",&po);
    printf("\t\t\t\t");
    ans = pow(num,po);
    file_w(ans,msg);
    printf("\n\t\t\t\t %.2lf ^ %d = %.2lf\n\n\n\t\t\t\t",num,po,ans);
    while(1)
    {
        printf("\n\t\t\t\tWant to do this operation again?\n\n\t\t\t\t");
        printf("\n\t\t\t\tPress '1' for yes & '2' for no\n\n\t\t\t\t");
        scanf("%d",&opt);
        printf("\t\t\t\t");
        if(opt==1)
        {
            printf("\n\t\t\t\tEnter the number\n\n\t\t\t\t");
            scanf("%lf",&num);
            printf("\t\t\t\t");
            printf("\n\t\t\t\tEnter the power\n\n\t\t\t\t");
            scanf("%d",&po);
            printf("\t\t\t\t");
            ans = pow(num,po);
            file_w(ans,msg);
            printf("\n\t\t\t\t %.2lf ^ %d = %.2lf\n\n\n\t\t\t\t",num,po,ans);
        }
        else if(opt==2)
        {
            break;
        }
        else
        {
            printf("\nWrong Input!\n");
        }
    }
}

// BMI Calculator starts
void BMI()
{
    float ft,wkg,m,ans,wp;
    int n;
    system("cls");
    system ("COLOR 6");
    printf("\n\n\t\t\t\t<--------BMI------->\n\n");
    int op,value;
    fflush(stdin);
    printf("\n\n\t\t\t\tEnter Your Name : ");
    gets(info[z].name);
    fflush(stdin);
    printf("\n\n\t\t\t\tEnter Your ID : ");
    gets(info[z].id);

    printf("\n\n\t\t\t\tEnter your height in foot : ");
    scanf("%f",&ft);
    info[z].height=ft;
    printf("\n\n\t\t\t\tEnter your weight in kg : ");
    scanf("%f",&wkg);
    info[z].weight=wkg;
    m = ft/3.28;
    ans=wkg/pow(m,2);
    info[z].BMI=ans;
    printf("\n\n\t\t\tYour BMI is: %.2f\n\t\t\t",ans);
    if(ans<18.50)
    {
        printf("\n\t\t\tYou are underweight.You have to gain weight.\n");
    }
    else if(ans>=18.50 && ans<=24.9)
    {
        printf("\n\t\t\tYour BMI is standard! Keep it up.\n");
    }
    else
    {
        printf("\n\t\t\tYou are overweight.You have to loose weight.\n");
    }

    z++;
    system("Pause");

     main();
}

void BMI_history()
{
    system("cls");
    system("Color 6");
    printf("\n\n\t\t\t\tBMI history :\n\n");
    int i;

    for(i=0; i<z; i++)
    {
        printf("\t\t\t\tName : %s\n\n",info[i].name);
        printf("\t\t\t\tID : %s\n\n",info[i].id);
        printf("\t\t\t\tHeight : %.2f\n\n",info[i].height);
        printf("\t\t\t\tWeight : %.2f\n\n",info[i].weight);
        printf("\t\t\t\tBMI : %.2f\n\n\n",info[i].BMI);
    }
    system("Pause");

     main();
}
//file write function Start
void file_w(float inp, char msg[])
{

    FILE *fileWrite;

    fileWrite= fopen("fileName.txt", "a");
    fprintf(fileWrite,"\n\n\t\t\t\t%s %.2f",msg,inp);
    fclose(fileWrite);

}
void file_r()
{
    system("cls");
    printf("\n\n\n\t\t\t\tCalculation History\n\n\t\t\t\t");
    FILE *file;
    char c;
    file=fopen("fileName.txt","r");
    if(file==NULL)
    {
        printf("file not found");
    }
    else
    {
        while(!feof(file))
        {
            c=fgetc(file);
            printf("%c",c);

        }
        fclose(file);
        printf("\n");
        system("Pause");
        main();
    }
}

void file_w_eq(float root1,float root2,float real,float imag, char msg[])
{

    FILE *fileWrite;
   fileWrite= fopen("fileName.txt", "a");
    if(real==0.0 && imag==0.0){
       fprintf(fileWrite,"\n\n\t\t\t\t%s",msg);
      fprintf(fileWrite,"root1 = %.2lf and root2 = %.2lf",root1,root2);
      fclose(fileWrite);
   }
   else if(root1==root2 && real==0.0 && imag==0.0){
       fprintf(fileWrite,"\n\n\t\t\t\t%s",msg);
      fprintf(fileWrite,"root1 = root2 = %.2lf",root1);
      fclose(fileWrite);
   }
   else{
       fprintf(fileWrite,"\n\n\t\t\t\t%s",msg);
      fprintf(fileWrite,"root1 = %.2lf + %.2lfi and root2 = %.2f - %.2fi",real,imag,real,imag);
      fclose(fileWrite);
   }
}
