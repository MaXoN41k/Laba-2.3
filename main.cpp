#include <iostream>
#include "String.h"
#include <locale.h>
using namespace std;

int main()
{
  setlocale(LC_ALL, "Rus");
  //TString s(10,'c');
  //cout << s <<endl;
  //TString s1(s);
  //cout << s1 <<endl;
  //TString s2("baeff");
  //cout << s2 <<endl;
  //TString s3;
  //s3 = s1+s2;
  //cout << s3 << endl;
  //TString s4("ddd");
  //cin >> s4;
  //cout << s4;

  //return 0;
  //int a;
  //
  //a = s3.StrPos("aefff");
  //cout << a << endl;
  //try
  //{
  //  cout << s3[a] << endl;
  //}
  //catch (out_of_range &ex)
  //{
  //  cout << ex.what() << endl;
  //}
  
  //TString s5("adaaaghhtha3434");
  //char** res;
  //int l=0;
  //res = s5.Split('a',l);
  //for (int i = 0; i < l; i++)
  //{
  //  cout << res[i]<<endl;
  //}
  

  //TString s1("abaa");
  //TString s2("aaa");

  //cout << (s1 > s2);

  //TString s1("abs");
  //TString s2;
  //s2 = s1.Mult(3);
  //cout << s2;

  //TString s("ffàààòòòòòòfg");
  //cout << s.MasSymvol();

  int d = 0;
  TString s("asfggasgffgas44");
  int* a;
  a = s.CharPositions("as",d);
  for (int i = 0; i < d; i++)
  {
    cout << a[i]<<endl;
  }

  return 0;
}