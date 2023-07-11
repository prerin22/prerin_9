#include<stdio.h>
struct student{
	int Roll;
    char Name[50];
    float Chemistry;
    float Mathematics;
    float Physics;
    float Total;
    float Percentage;
};

int main(){
	struct student s1;
	struct student s2;
	struct student s3;
	struct student s4;
	struct student s5;
	
 printf("\nEnter the detail of student 5 \n");
printf("Enter the Roll no :");
scanf("%d",&s1.Roll);
printf("Enter the Name of :");
    scanf("%s",&s1.Name);
printf("the marks of Chemistry:");
scanf("%f",&s1.Chemistry);
printf(" the marks of Mathematics:");
scanf("%f",&s1.Mathematics);
printf("the marks of Physics:");
scanf("%f",&s1.Physics);
s1.Total=s1.Chemistry+s1.Mathematics+s1.Physics;
s1.Percentage=(s1.Total/300)*100;
printf("\n%s(%d)\n",s1.Name,s1.Roll);
printf("Chemistry = %.2f\n",s1.Chemistry);
printf("Mathematics = %.2f\n",s1.Mathematics);
    printf("Physics = %.2f\n",s1.Physics);
printf("Total marks = %.2f\n",s1.Total);
printf("Percentage = %.2f\n",s1.Percentage);
	
	
printf("\nEnter the detail of student 2 \n");
printf("Enter the Roll no :");
scanf("%d",&s2.Roll);
printf("the Name of the student:");
    scanf("%s",&s2.Name);
printf("the marks of Chemistry :");
scanf("%f",&s2.Chemistry);
printf("the marks of Mathematics:");
scanf("%f",&s2.Mathematics);
printf("the marks of Physics:");
scanf("%f",&s2.Physics);
s2.Total=s2.Chemistry+s2.Mathematics+s2.Physics;
s2.Percentage=(s2.Total/300)*100;
printf("\n%s(%d)\n",s2.Name,s2.Roll);
printf("Chemistry = %.2f\n",s2.Chemistry);
printf("Mathematics = %.2f\n",s2.Mathematics);
    printf("Physics = %.2f\n",s2.Physics);
printf("Total marks = %.2f\n",s2.Total);
printf("Percentage = %.2f\n",s2.Percentage);


printf("\nEnter the detail of student 3 \n");
printf("Enter the Roll no :");
scanf("%d",&s3.Roll);
printf(" the Name of the student:");
scanf("%s",&s3.Name);
printf("the marks of Chemistry :");
scanf("%f",&s3.Chemistry);
printf("the marks of Mathematics:");
scanf("%f",&s3.Mathematics);
printf("the marks of Physics:");
scanf("%f",&s3.Physics);
s3.Total=s3.Chemistry+s3.Mathematics+s3.Physics;
s3.Percentage=(s3.Total/300)*100;
printf("\n%s(%d)\n",s3.Name,s3.Roll);
printf("Chemistry = %.2f\n",s3.Chemistry);
printf("Mathematics = %.2f\n",s3.Mathematics);
    printf("Physics = %.2f\n",s3.Physics);
printf("Total marks = %.2f\n",s3.Total);
printf("Percentage = %.2f\n",s3.Percentage);




printf("\nEnter the detail of student 4 \n");
printf("Enter the Roll no:");
scanf("%d",&s4.Roll);
printf("the Name of the student:");
    scanf("%s",&s1.Name);
printf("the marks of Chemistry :");
scanf("%f",&s4.Chemistry);
printf("Ente the marks of Mathematics:");
scanf("%f",&s4.Mathematics);
printf("the marks of Physics:");
scanf("%f",&s4.Physics);
s4.Total=s4.Chemistry+s4.Mathematics+s4.Physics;
s4.Percentage=(s4.Total/300)*100;
printf("\n%s(%d)\n",s1.Name,s4.Roll);
printf("Chemistry = %.2f\n",s4.Chemistry);
printf("Mathematics = %.2f\n",s4.Mathematics);
    printf("Physics = %.2f\n",s4.Physics);
printf("Total marks = %.2f\n",s4.Total);
printf("Percentage = %.2f\n",s4.Percentage);



printf("\nEnter the detail of student 5 \n");
printf("Enter the Roll no:");
scanf("%d",&s5.Roll);
printf("the Name of the student:");
    scanf("%s",&s5.Name);
printf("the marks of Chemistry :");
scanf("%f",&s5.Chemistry);
printf("the marks of Mathematics:");
scanf("%f",&s5.Mathematics);
printf("the marks of Physics:");
scanf("%f",&s5.Physics);
s5.Total=s5.Chemistry+s5.Mathematics+s5.Physics;
s5.Percentage=(s5.Total/300)*100;
printf("\n%s(%d)\n",s5.Name,s5.Roll);
printf("Chemistry = %.2f\n",s5.Chemistry);
printf("Mathematics = %.2f\n",s5.Mathematics);
    printf("Physics = %.2f\n",s5.Physics);
printf("Total marks = %.2f\n",s5.Total);
printf("Percentage = %.2f\n",s5.Percentage);

}
