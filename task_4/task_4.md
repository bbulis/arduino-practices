# Übung 4 - Messwertverlauf

## Aufgabenstellung

Schreibe ein Programm, welches immer einen analogen Wert über den Pin A4 einliest. Dieser Wert wird in die lokale `int` Variable `voltage` gespeichert.

Ebenso wird der Wert in eine `int` Liste `voltage_history` gespeichert. Diese Liste kann maximal 10 Werte speichern.

!["Array shifting"](array-shift.jpeg "Array shifting")

Am Ende von jedem Durchlauf sollen alle Werte der Liste nacheinander ausgegeben werden.
Zuletzt wird noch zwei Sekunden gewartet bis der nächste Durchlauf startet.

Die Beschaltung des Arduino wird als korrekt angenommen.
