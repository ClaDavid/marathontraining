#include <iomanip>
#include <iostream>
#include <queue> 

using namespace std; 
   
int main(){ 
   int n; 
   
   while(cin >> n){ 
      
      if(n == 0) return 0; 
      
      double valorTotal = 0.00; 
      
      priority_queue<float> compras; 
      priority_queue<float> vendas; 
      
      while(n > 0){
         
         char proposta;
         float valorProposta;
         
         cin >> proposta >> valorProposta;
         
         //parte da compra
         if(proposta == 'C'){
            
            if(!vendas.empty()){ 
               
               float diferenca = valorProposta + vendas.top(); 
               
               if(diferenca >= 0.0){ 
                  valorTotal += diferenca; 
                  vendas.pop(); 
               } 
               else{ 
                  compras.push(valorProposta); 
               } 
            } 
            
            else{ 
               compras.push(valorProposta); 
            } 
         }
         
         //parte da venda
         else{
            
            if(!compras.empty()){ 
               
               float diferenca = compras.top() - valorProposta; 

               if(diferenca >= 0.0) { 
                  valorTotal += diferenca; 
                  compras.pop(); 
               }
               
               else{ 
                  vendas.push(-valorProposta); 
               } 
            }
            
            else{ 
               vendas.push(-valorProposta); 
            } 
         } 
         
         n--; 
      }
      cout << fixed << setprecision(2) << valorTotal << endl;
   } 
   return 0; 
} 