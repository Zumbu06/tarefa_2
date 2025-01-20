Atividade: Controle de pinos GPIO da ferramenta educacional BitDogLab<br>  

Membros da Equipe:<br>   

Helga Maria<br>  

Laisa França<br>  

Cauã Brizolara<br>   
 
Marcos Silveira<br>   

Juliano Neves<br>   
 
Rian Barroso - Lider da Semana<br> <br>  

Descrição Geral: <br>
O projeto implementa o controle de LEDs e um buzzer em uma placa Raspberry Pi Pico, permitindo interação através de um botão. Ele funciona tanto no simulador Wokwi integrado ao VS Code quanto em uma placa física. <br>

Funcionamento: <br>
O botão é configurado para registrar os cliques do usuário. Cada vez que o botão é pressionado, o sistema alterna entre diferentes estados de iluminação dos LEDs: <br> 

1º Pressionamento: Liga o LED verde (GPIO11). 

2º Pressionamento: Liga o LED azul (GPIO12). 

3º Pressionamento: Liga o LED vermelho (GPIO13). 

4º Pressionamento: Liga todos os LEDs (luz branca). 

5º Pressionamento: Desliga todos os LEDs. 

6º Por fim, o buzzer (GPIO21) é acionado, emitindo efeito sonoro. 
 
