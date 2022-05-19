#ifndef __LABIRINTO_HPP
#define __LABIRINTO_HPP
#include <string>
#include <utility>
#define MAXTAM 10
using namespace std;


class Labirinto
{

public:
  int **grade;
  void create (int v);

  void setN (int n);
  void setGrade (int l, int c);
  void mostra (int n);
  pair <int,int> Proximo (pair <int,int> local, int n);
  void CaminhoBFS(int n);

};

#endif
