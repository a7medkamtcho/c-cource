char ch;
fstream fin("file", fstream::in);
while (fin >> noskipws >> ch) {
    cout << ch; // Or whatever
}
