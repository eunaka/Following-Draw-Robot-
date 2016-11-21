int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
char ligar = 0;
int controle=0;
  
void setup()
{
  Serial.begin(9600);
  //Define os pinos como saida
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
}

void loop(){
  if(Serial.available()){
    ligar = Serial.read();
    Serial.println(ligar);
    if(ligar == 'w'){
      controle = 1;
      acelerar();
    }
    else if(ligar == 'a'){
      controle = 1;
      virar_esquerda();
    }
    else if(ligar == 'd'){
      controle = 1;
      virar_direita();
    }
    else if(ligar == 's'){
      controle = 1;
      desacelerar();
    }
    else {
    controle =1;
    parar();
    }
  }
  if(controle == 1){
   // delay(2000);
    controle = 0;
  }
  
 //s parar();
  //acelerar();
}

void acelerar(){
  //RODA ESQUERDA
  digitalWrite(IN1, LOW); 
  digitalWrite(IN2, HIGH);
  // RODA DIREITA
  digitalWrite(IN3, HIGH); 
  digitalWrite(IN4, LOW);  
}

void desacelerar(){
  //RODA ESQUERDA
  digitalWrite(IN1, HIGH); 
  digitalWrite(IN2, LOW);
  // RODA DIREITA
  digitalWrite(IN3, LOW); 
  digitalWrite(IN4, HIGH);  
}

void virar_esquerda(){
  //RODA ESQUERDA
  digitalWrite(IN1, LOW); 
  digitalWrite(IN2, LOW);
  // RODA DIREITA
  digitalWrite(IN3, HIGH); 
  digitalWrite(IN4, LOW);  
}

void virar_direita(){
 //RODA ESQUERDA
  digitalWrite(IN1, LOW); 
  digitalWrite(IN2, HIGH);
  // RODA DIREITA
  digitalWrite(IN3, LOW); 
  digitalWrite(IN4, LOW);   
}

void parar(){
  //RODA ESQUERDA
  digitalWrite(IN1, LOW); 
  digitalWrite(IN2, LOW);
  // RODA DIREITA
  digitalWrite(IN3, LOW); 
  digitalWrite(IN4, LOW);  
}

void ler_pista(){
 //Adicionar sensores
 //A partir do status deles, executar algum movimento 
}

void wait(){
//Espera o tempo para o robô ultrapassar
//completamente a linha de chegada
//AJUSTAR O TEMPO
delay(3000);
//paramos o robô
parar();
//esperamos o tempo pedido pela organização
delay(10000);
}

