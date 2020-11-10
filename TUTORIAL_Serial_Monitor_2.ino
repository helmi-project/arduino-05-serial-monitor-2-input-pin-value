/*
   TUTORIAL SERIAL MONITOR ARDUINO 
   MENAMPILKAN NILAI DARI SEBUAH PIN
*/

   
void setup() {
  Serial.begin(115200);//memulai inisiasi komunikasi serial dengan baud rate 115200 bps
  Serial.println("Mencoba Serial Monitor 2");
  pinMode(A5,INPUT); //set pin Analog 5 atau A5 menjadi input
}

void loop() {
  int nilai = analogRead(A5);
  Serial.print("Nilai dari A5 :");
  Serial.println(nilai);
  delay(1000);
}
