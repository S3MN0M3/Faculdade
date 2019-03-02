#include <iostream>

using namespace std;

int main()
{
  int alunosTurmaC = 60;
  int alunosTurmaD = 20;
  int totalAlunos = 80;
  float percentualReprovadosC = 0.0;
  float percentualReprovadosD = 0.0;
  float percentualAprovadosD = 0.0;

  print("Digite a percentagem de reprovados na turma C");
  cin >> percentualReprovadosC;

  print("Digite a percentagem de aprovados na turma D");
  cin >> percentualAprovadosD;

  percentualReprovadosD = 100 - percentualAprovadosD;

  int reprovadosC = alunosTurmaC * percentualReprovadosC / 100;
  int reprovadosD = alunosTurmaD * percentualReprovadosD / 100;
  float totalAprovados = totalAlunos - (reprovadosC + reprovadosD);
  float reprovadosTotal = 100 - ((totalAprovados / totalAlunos) * 100);

  cout << reprovadosC;
  cout << reprovadosD;
  cout << reprovadosTotal;
}
