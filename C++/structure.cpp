#include <iostream>
#include <iomanip>
using namespace std;
typedef struct employee
{
    int eId;
    string field;
    float salary;
}e1;

int main(){
  e1 sameer;
  sameer.eId = 1451;
  sameer.field = "MARKETING MANAGER";
  sameer.salary = 120000;
  e1 fahad;
  fahad.eId = 3424;
  fahad.field = "DEVELOPER";
  fahad.salary = 300000;
  e1 rashid;
  rashid.eId = 2323;
  rashid.field = "SWEEPER";
  rashid.salary = 25000;
  cout<<"FAHAD'S EID IS : "<<fahad.eId<<endl;
  cout<<"FAHAD IS A : "<<fahad.field<<endl;
  cout<<"FAHAD'S SALARY IS : "<<fahad.salary<<endl;
  cout<<"SAMEER'S EID IS : "<<sameer.eId<<endl;
  cout<<"SAMMER IS A : "<<sameer.field<<endl;
  cout<<"SAMEER'S SALARY IS : "<<sameer.salary<<endl;
  cout<<"RASHID'S EID IS : "<<rashid.eId<<endl;               
  cout<<"RASHID IS A : "<<rashid.field<<endl; 
  cout<<"RASHID'S SALARY IS : "<<rashid.salary<<endl;
  return 0;           
  
}
