/*
 * Auhor : Amol Kahat
 * Email : amolkahat@gmail.com
 *
 * This program will increase led light.
 * Once it reach to the 255 value it will
 * reset to 0 ang again start it.
 */
void setup() {
  
  pinMode(3, OUTPUT);
  Serial.begin(9600);
  Serial.flush();
 
}

void loop() {
  
  int cnt=0;
  while(true){
    if(cnt>=0 and cnt <= 255){
      cnt++;
      analogWrite(3,cnt);
      delay(100);
    }
    if(cnt == 255){
      cnt = 0;
    }
  }

}
