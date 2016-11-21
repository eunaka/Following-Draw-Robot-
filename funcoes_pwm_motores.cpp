#define pwm_fixo_left 128
#define pwm_fixo_right 128

void virar_esquerda(char pwm_var){
  //RODA ESQUERDA
  analogWrite(left1, pwm_fixo_left - pwm_var);
  analogWrite(left2, pwm_fixo_left - pwm_var);
  //digitalWrite(left1, LOW); 
  //digitalWrite(left2, LOW);
  // RODA DIREITA
  analogWrite(right1, pwm_fixo_righ + pwm_var);
  analogWrite(right2, 0);
  //digitalWrite(right1, HIGH); 
  //digitalWrite(right2, LOW);  
}

void virar_direita(char pwm_var){
 //RODA ESQUERDA
  analogWrite(left1, 0);
  analogWrite(left2, pwm_fixo_left + pwm_var);
  //digitalWrite(left1, LOW); 
  //digitalWrite(left2, HIGH);
  // RODA DIREITA
  analogWrite(right1, pwm_fixo_right - pwm_var);
  analogWrite(right2, pwm_fixo_right - pwm_var);
  //digitalWrite(right1, LOW); 
  //digitalWrite(right2, LOW);   
}

void acelerar(){
  //RODA ESQUERDA
  analogWrite(left1, 0);
  analogWrite(left2, pwm_fixo_left);
  //digitalWrite(left1, LOW); 
  //digitalWrite(left2, HIGH);
  // RODA DIREITA
  analogWrite(right1, pwm_fixo_right);
  analogWrite(right2, 0);
  //digitalWrite(right1, HIGH); 
  //digitalWrite(right2, LOW);  
}

