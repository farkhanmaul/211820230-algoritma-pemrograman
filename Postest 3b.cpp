#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? x;
   ?? y;
   ?? i;
   ?? pangkat;

   raptor_prompt_variable_zzyz ="Masukkan x : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x;
   raptor_prompt_variable_zzyz ="Masukkan y : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y;
   i =0;
   pangkat =1;
   if (y>0)
   {
      while (!(i>=y))
      {
         i =i+1;
         pangkat =pangkat*x;
      }
      cout << "Hasilnya : "+pangkat << endl;   }
   else
   {
      while (!(i<=y))
      {
         i =i-1;
         pangkat =pangkat*(1/x);
      }
      cout << "Hasilnya : "+pangkat << endl;   }

   return 0;
}
