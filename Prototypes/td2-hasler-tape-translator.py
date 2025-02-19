import pandas as pd

def read_dat(dateipfad):
    try:
        spaltennamen = ['Zeit', 'Geschwindigkeit'] + [f'Spalte{i}' for i in range(3, 21)]
        daten = pd.read_csv(dateipfad, delimiter='\t', header=None, names=spaltennamen)
        ausgabe_dateipfad = "C:/temp/ausgabe.txt" 
        with open(ausgabe_dateipfad, 'w') as f:
            f.write(daten[['Zeit', 'Geschwindigkeit']].to_string(index=False))
        print(f"Die Daten wurden erfolgreich in {ausgabe_dateipfad} geschrieben.")
    except Exception as e:
        print(f"Es gab einen Fehler beim Einlesen der Datei: {e}")

read_dat(r'C:\Users\bravura\Documents\TTSK\TrainDriver2\Tapes\Tape_2024-04-08_19-06-56.dat')

