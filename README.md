
# Η εγκατάσταση ολοκληρώθηκε

<wsl>
Ενα τελευταίο βήμα: πρέπει να εγκαταστήσετε το C/C++ extension __μέσα στο WSL__.
Για να το κάνετε αυτό:

- Πατήστε Ctrl-Shift-X για να δείτε τα extensions (ή View / Show Extensions)

- Αν κάτω από το C/C++ extension υπάρχει ένα __πράσινο κουμπί "Install in WSL"__ τότε
  - Πατήστε το
  - Μόλις ολοκληρωθεί πατήστε το κουμπί "Reload Required" που θα εμφανιστεί
</wsl>

# Οδηγίες χρήσης

<macos>
- Με Command-Shift-E (View / Explorer) εμφανίζονται όλα τα αρχεία που υπάρχουν στο Documents/c_programs directory.
</macos>
<!macos>
- Με Ctrl-Shift-E (View / Explorer) εμφανίζονται όλα τα αρχεία που υπάρχουν στο Documents/c_programs directory.
</!macos>

- Κάντε κλικ στο example.c για να το ανοίξετε.

- Με Ctrl-` (View / Terminal) εμφανίζεται το τερματικό, στο οποίο μπορείτε να κάνετε μόνοι σας compile.

<macos>
- Με Ctrl-Shift-B (Terminal / Run Build Task) κάνετε αυτόματα compile το αρχείο που είναι ανοικτό εκείνη τη στιγμή.
</macos>
<!macos>
- Με Command-Shift-B (Terminal / Run Build Task) κάνετε αυτόματα compile το αρχείο που είναι ανοικτό εκείνη τη στιγμή.
</!macos>
  - Αν υπάρχουν errors εμφανίζονται με κόκκινη γραμμή μέσα στον κώδικα.
  - Αν δεν υπάρχουν errors το πρόγραμμα εκτελείται αφού μεταγλωτιστεί.

- Με F5 εκτελείτε το τρέχον αρχείο στον debugger. Η εκτέλεση διακόπτεται στην αρχή της main και μπορείτε να
  τη συνεχίσετε γραμμή-γραμμή, να βάλετε breakpoints, κλπ.

- Περισσότερες επιλογές για μεταγλώτιση/εκτέλεση υπάρχουν στο Terminal / Run task (πχ για προγράμματα που
  αποτελούνται από πολλά αρχεία .c).