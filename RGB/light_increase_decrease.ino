/*
 * Auhor : Amol Kahat
 * Email : amolkahat@gmail.com
 *
 * This program will increase led light.
 * Once it reach to the 255 value it will
 * it will decrease it again.
 */

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  Serial.begin(9600);
  Serial.flush();

}

void loop() {
  int cnt = 0;
  boolean increase = true;
  while (true) {
    if(increase){
      cnt++;
      analogWrite(3, cnt);
      delay(10);
      if(cnt == 255){
        increase = false;
      }
    }else{
      cnt--;
      analogWrite(3, cnt);
      delay(10);
      if(cnt == 0){
        increase = true;
      }
    }
  }
}
