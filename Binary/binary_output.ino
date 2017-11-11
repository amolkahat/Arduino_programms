
int pin[] ={1, 2, 4, 7};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(pin[i], OUTPUT);
  }
}

void loop() {
   
  int s_no = 1, no = 1, rem;
  int cnt = 0;
  while(s_no <= 15){
    cnt = 0; 
    no = s_no;
    while(no > 0){
      rem = no%2;
      if(rem == 1){
        digitalWrite(pin[cnt], HIGH);
      }
      if(rem == 0){
        digitalWrite(pin[cnt], LOW);
      }
      cnt += 1;
      no = no / 2;
    }
    delay(3000);

    s_no += 1;
    for(int i=0; i< 4; i++){
      digitalWrite(pin[i], LOW);
    }
  }
}
