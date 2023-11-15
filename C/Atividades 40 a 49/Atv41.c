#include <stdio.h>
#include <string.h>

int main()
{
  float N1, N2, N3, MediaDosExecicos;
  char comceito[2];
  
  printf("Escreva as totas N1, N2, N3\n");
  scanf("%f", &N1);
  scanf("%f", &N2);
  scanf("%f", &N3);
  
  MediaDosExecicos = N1+N2+N3;
  
  float MediaDeAproveitamento = (N1+N2*2+N3*3+MediaDosExecicos)/7;
  
  if(MediaDeAproveitamento >= 9.0){
      strcpy(comceito, "A");
      
  }else if(MediaDeAproveitamento>= 7.5 && MediaDeAproveitamento>9.0){
        strcpy(comceito, "B");
  }else if(MediaDeAproveitamento>= 6.0 && MediaDeAproveitamento>7.5){
        strcpy(comceito, "C");
  }else{
        strcpy(comceito, "D");
  }
  
  printf("sua media de aproveitamento deu o resultado sequinte: %s", comceito);
}
