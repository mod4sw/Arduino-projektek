/*
Tobb forrasfajl egy projektben, fuleken;
pont, mint Processingben.
Huszar Attila keresere.

Uj ful letrehozasa: Ctrl + Shift + N billentyukombinacio (majd nevet is kell neki adni!)
vagy a fajlok nevevel egy sorban, jobb szelen a [V] gombra kattintva "Uj ful" / "New tab"
*/
int peldaSzam;

void setup() {
  peldaSzam = 5;
  Serial.begin(9600);
  Serial.println(peldaSzubrutin(peldaSzam));
}

void loop() {
  
}
