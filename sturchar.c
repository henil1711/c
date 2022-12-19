#include <stdio.h>
#include <string.h>

struct student
{
  char name[100];
  int age;
  int marks;
  float percentage;
};

int main()
{
  int n;
  printf("enter number of student :");
  scanf("%d", &n);

  struct student s[n];
  {
    for (int i = 0; i < n; i++)
    {
      printf("enter details for student %d:\n", i + 1);
      printf("enter your fullname :");
      scanf("%s", s[i].name);
      printf("enter your age :");
      scanf("%d", &s[i].age);
      printf("enter your marks :");
      scanf("%d", &s[i].marks);
      printf("enter your percentage :");
      scanf("%f", &s[i].percentage);
    }
    printf("____________________________\n");
    printf("| Name \t| Age \t| Marks \t| Perc \t|\n");
    printf("____________________________\n");
    for (int i = 0; i < n; i++)
    {
      printf("| %s \t| %d \t| %d \t| %f \t|\n", s[i].name, s[i].age, s[i].marks, s[i].percentage);
      printf("----------------------------\n");
    }
  }
}
