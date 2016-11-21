#define left1 4
#define left2 5
#define right1 6
#define right2 7
#define sensor_interno_left 0
#define sensor_interno_right 1
#define sensor_externo_left 2
#define sensor_externo_right 3
#define delay_curva_leve 100

int val_sensor;
int val_sensor_correcao;

void setup()
{
  Serial.begin(9600);
  //Define os pinos como saida
 pinMode(left1, OUTPUT);
 pinMode(left2, OUTPUT);
 pinMode(right1, OUTPUT);
 pinMode(right2, OUTPUT);
}

void loop(){
   val_sensor = analogRead(sensor_interno_left);
   val_sensor_correcao = (val_sensor * 5) / 1024;
   if(val_sensor_correcao > 2)
   {
      virar_esquerda();
      delay(delay_curva_leve);
      acelerar();
   }
   
   va_sensor = analogRead(sensor_interno_right);
   val_sensor_correcao = (val_sensor * 5) / 1024;
   if(val_sensor_correcao > 2)
   {
      virar_direita();
      delay(delay_curva_leve);
      acelerar();
   }
}

void acelerar(){
  //RODA ESQUERDA
  digitalWrite(left1, LOW); 
  digitalWrite(left2, HIGH);
  // RODA DIREITA
  digitalWrite(right1, HIGH); 
  digitalWrite(right2, LOW);  
}

void desacelerar(){
  //RODA ESQUERDA
  digitalWrite(left1, HIGH); 
  digitalWrite(left2, LOW);
  // RODA DIREITA
  digitalWrite(right1, LOW); 
  digitalWrite(right2, HIGH);  
}

void virar_esquerda(){
  //RODA ESQUERDA
  digitalWrite(left1, LOW); 
  digitalWrite(left2, LOW);
  // RODA DIREITA
  digitalWrite(right1, HIGH); 
  digitalWrite(right2, LOW);  
}

void virar_direita(){
 //RODA ESQUERDA
  digitalWrite(left1, LOW); 
  digitalWrite(left2, HIGH);
  // RODA DIREITA
  digitalWrite(right1, LOW); 
  digitalWrite(right2, LOW);   
}

void parar(){
  //RODA ESQUERDA
  digitalWrite(left1, LOW); 
  digitalWrite(left2, LOW);
  // RODA DIREITA
  digitalWrite(right1, LOW); 
  digitalWrite(right2, LOW);  
}
