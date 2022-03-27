/* YourDuinoStarter Example: Sketch Template
 - WHAT IT DOES
 - V1.00 16/3/2022
 */
/*-----( Declare Constants and Pin Numbers )-----*/
int SEN_LdrOut = A8;

/*-----( Declare Variables )-----*/
int Val_OutLdr = 0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  Read_Sen_OutLDR_Loop();
  Print_Serial_loop();
}

void Read_Sen_OutLDR_Loop() {
  DelayTimer(1000000); //Wait 250millisec
  
  Val_OutLdr = analogRead(SEN_LdrOut) ;
  Val_OutLdr =   map(Val_OutLdr, 150, 1030, 0, 100);
}

void Print_Serial_loop(){
  Serial.print(F("LDR Value is: ")); Serial.println(Val_OutLdr);
}

void DelayTimer(long int DelayValue){
  long int DelayTime = micros();
  do {    
  }while (micros()-DelayTime < DelayValue);
}
