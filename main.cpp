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
  
  TString s5("ad ghhth 3434 ");
  char** res;
  res = s5.Split(' ');
  for (int i = 0; i < 3; i++)
  {
    cout << res[i]<<endl;
  }
  

  //TString s1("abaa");
  //TString s2("aaa");

  //cout << (s1 > s2);

  //TString s1("abs");
  //TString s2;
  //s2 = s1.Mult(3);
  //cout << s2;

  //TString s("ff���������fg");
  //cout << s.MasSymvol();

  return 0;
}