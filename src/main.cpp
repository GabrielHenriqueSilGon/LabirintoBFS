#include <cstdlib>
#include <utility>
#include <iostream>
#include <string>
#include <iterator>
#include <list>
#include <bits/stdc++.h>
#include "Labirinto.hpp"
using namespace std;

int
main ()
{
  Labirinto j;
  int l, c, n;
  l = 0;
  c = 0;
  cout << "De o tamanho da matriz Labirinto: \n";
  cin >> n;
  j.setN (n);
  j.create (n);
  cout << "Original:" << endl;
  j.mostra (n);

  j.CaminhoBFS(n);

  cout << "Matriz caminhada:" << endl;
  j.grade[n - 1][n - 1] = -1;
  j.mostra (n);

  return 0;
}
