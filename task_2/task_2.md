# Übung 2
Es soll ein Programm geschrieben werden, welches über den Pin A4 ein digitlaes Signal einliest.
Die Werte welche eingelesen werden, sollen in eine Vektor-Variable (Liste/Array) geschrieben werden, welche nur positive Werte 
halten kann. Diese heißt "spannungen" und soll 10 Werte halten können. 

Die Variable um einen Wert zwischenzuspeichern soll "read_value" heißen.
Um dies zu garantieren muss überprüft werden ob der eingelesene Wert auch wirklich größer 0 ist.
Sollte der Wert nicht größer als 0 sein so wird stattdessen immer der Wert 10 gespeichert.

Nach dem Einlesen eines Wertes soll 1 Sek gewartet werden bis die Schleife erneut einen Wert einliest. 

Nach dem Speichern aller werte in die Vektor-Variable sollen 2 Sekunden gewartet werden.

Danach sollen alle Werte auf die Konsole ausgegeben werden.

Die Beschaltung des Arduino-Uno wird als korrekt angenommen.

## Hilfestellung

### Serialer Ausgang
Um auf die Konsole Sachen auszugeben wird Serial verwendet.
Starten der Seriellen Ausgabe
```
Serial.beginn(9600);
```

Ausgabe auf die Konsole
```
Serial.println();
```

