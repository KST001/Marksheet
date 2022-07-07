#include<stdio.h>
#include<conio.h>
 main()
{
 int fm,pm,tot,clas,rolno,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11;
 float per;
 char fnam[10],mnam[10],lnam[10],sec[1],scol[10],addrs[10],ans;

 printf("Enter the first name of School:");
 scanf("%s",scol);
 printf("Enter School Address:");
 scanf("%s",addrs);
 printf("Enter First Name: ");
 scanf("%s",fnam);
 printf("Enter Middle Name: ");
 scanf("%s",mnam);
 printf("Enter Last Name: ");
 scanf("%s",lnam);
 printf("Enter Class: ");
 scanf("%d",&clas);
 printf("Enter Roll Number: ");
 scanf("%d",&rolno);
 printf("Enter Section: ");
 scanf("%s",sec);
 printf("Enter The Full Marks Of Subject:");
 scanf("%d",&fm);
 printf("Enter The Pass Marks Of Subject:");
 scanf("%d",&pm);
 printf("Enter Optain Marks\n");
 printf("English: ");
 scanf("%d",&s1);
 printf("Nepali:");
 scanf("%d",&s2);
 printf("Science:");
 scanf("%d",&s3);
 printf("Opt.Maths:");
 scanf("%d",&s4);
 printf("Math:");
 scanf("%d",&s5);
  printf("C-Programming:");
 scanf("%d",&s6);
 printf("Webpage develop:");
 scanf("%d",&s7);
 printf("Engineering Drawing:");
 scanf("%d",&s8);
 printf("Fundamental of Digital:");
 scanf("%d",&s9);
 printf("Fundamental of computer:");
 scanf("%d",&s10);
 printf("Electrical Engineering:");
 scanf("%d",&s11);

 printf("\t\t\t%s Higher Secondary School\n",scol);
 printf("\t\t\t\t  %s,Banke\n",addrs);
 printf("\nName: %s %s %s\n",fnam,mnam,lnam);
 printf("Class: %d\n",clas);
 printf("Roll No: %d\n",rolno);
 printf("Section:'%s'\n",sec);
 printf("\n\t\t\t\tMark Sheet");
 printf("\n S.N  Subject                  \tFull Marks\tPass Marks\tOptain Marks");
 printf("\n 1.   English                  \t%d        \t%d        \t%d",fm,pm,s1);
 printf("\n 2.   Nepali                   \t%d        \t%d        \t%d",fm,pm,s2);
 printf("\n 3.   Science                  \t%d        \t%d        \t%d",fm,pm,s3);
 printf("\n 4.   Opt.Math                 \t%d        \t%d        \t%d",fm,pm,s4);
 printf("\n 5.   Maths                    \t%d        \t%d        \t%d",fm,pm,s5);
 printf("\n 6.   C-Programmin             \t%d        \t%d        \t%d",fm,pm,s6);
 printf("\n 7.   Webpage develop          \t%d        \t%d        \t%d",fm,pm,s7);
 printf("\n 8.   Engineering Drawing      \t%d        \t%d        \t%d",fm,pm,s8);
 printf("\n 9.   Fundamental of digital   \t%d        \t%d        \t%d",fm,pm,s9);
 printf("\n10.   Fundamental of computer  \t%d        \t%d        \t%d",fm,pm,s10);
 printf("\n11.   Electrical Engineering \t%d        \t%d        \t%d",fm,pm,s11);
 tot=s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11;
 printf("\n\n\nTotal Marks: %d\n",tot);
 per=tot/11*100;
 if(per>=80)
 {
 printf("Passed in A+");
 }
 else if(per>=60)
 {
 printf("Passed in A");
 }
 else if(per>=50)
 {
 printf("Passed in B");
 }
 else
 {
 printf("Passed in C");
 }
 printf("\tPercentage:%f");
 getch();
 }
