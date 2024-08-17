# Übung 1 - if-Anweisungen
Schreibe ein Programm, welches über den digitalen Pin 13 eine LED Ansteuern kann. Die Nummer für diesen Pin soll in die Variable "led_pin" gespeichert 
werden und an allen nötigen Stellen verwendet werden. 
Die LED soll entweder angeschalten oder ausgeschalten werden. Der Status der LED soll in die Variable "led_status" gespeichert werden. Initial soll diese 
Variable den Wert "LOW" sein.
Beginnt der loop-Block, soll die LED geschlaten werden. Danach eine Wartezeit von 3 Sekunden. Nach dieser Wartezeit wird die Variable umgeschalten. Danach 
wartet das Programm nochmal 5 Sekunden.
Die Beschlatung des Arduino-Uno wird als korrekt angenommen.

## Hilfestellung
### Schreiben auf einen Pin
```
digitalWrite()
```

### Zeitumrechnung
1 sek = 1000 Millisek
