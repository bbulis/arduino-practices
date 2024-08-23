# Übung 3

Es soll ein Programm geschrieben werden, welches über die Pins A4 und A5 zwei analoge Signale einliest. Diese werden in die Varibalen signal_1 und signal_2 gespeichert.

Die Werte von Pin A4 sollen in die Vektor-Variable signal_1_history gespeichert werden, welche maximal 10 Werte beinhalten kann.
Bei jedem Durchlaufen sollen die 10 Werte aus der Vektor-Variable ausgegeben werden.
Bei jeder Ausgabe wird der gespeicherte Wert von signal_2 ebenso ausgegeben.

Die Ausgabe erfolgt durch den Serial Anschluss.

Bei jedem Durchlaufen sollen 10 Sekunden gewartet werden

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
