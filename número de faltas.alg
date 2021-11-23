Algoritmo "semnome"

Var
    n1, n2, n3, n4,n5, nota_final:real

Inicio

   escreval("informe as nota:")
   leia(n1,n2,n3,n4)
   escreva("número de faltas:")
   leia(n5)

   nota_final <- (n1+n2+n3+n4)/4

se(nota_final >=7) e (n5 < 8) entao
    escreva("você está reprovado, média=", nota_final)
fimse
    se (nota_final >=7) e (n5 >=8) entao
    escreval ("você está reprovado, média=", nota_final)
    fimse
    
    
    
Fimalgoritmo