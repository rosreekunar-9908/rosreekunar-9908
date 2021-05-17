- 👋 Hi, I’m @rosreekunar-9908
- 👀 I’m interested in ...
- 🌱 I’m currently learning ...
- 💞️ I’m looking to collaborate on ...
- 📫 How to reach me ...
//Assignment 1
#include <stdio.h>
#include <cs50.h>
int main (void)
{
  string name=get_string("Enter your name ");
  float kg=get_float("Enter your weight (in kg) ");
  float m=get_float("Enter the height (in m) ");
  float bmi=kg/(m*m);
  if (bmi<18.5)
  printf("%s\t%f\t Underweight",name,bmi);
  else if (bmi<24.9)
  printf("%s\t%f\t Normal",name,bmi);
  else if (bmi<29.9)
  printf("%s\t%f\t Overweight",name,bmi);
  else if (bmi>30)
  printf("%s\t%f\t Obese",name,bmi);
  else
  printf ("Invalid bmi");
  printf ("\n");
 }

<!---
rosreekunar-9908/rosreekunar-9908 is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
