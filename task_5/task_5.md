# Übung 5 - Flakenzählung mit Verlauf

## Aufgabenstellung

Schreibe ein C-Programm, welches alle 200 Millisekunden eine digitale Flanke einliest über den Pin 12 und in die lokale `int` Variable `flag` speichert.
Der eingelesene Wert soll in die Vektor-Variable `flags_history` gespeichert werden.
Laufend soll die Liste geshiftet werden.
Bei jedem durchlauf sollen die letzten zwei gespeicherten Flanken analysiert werden.
Wenn es eine aufsteigende Flanke ist soll die Variable `rising_flags` hochgezählt werden, bei Absteigenden die Variable `falling_flags`.

Die Beschaltung des Arduino wird als korrekt angenommen.
