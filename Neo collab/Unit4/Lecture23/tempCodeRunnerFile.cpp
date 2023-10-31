main() {
    string str1, str2;
    int n;

    // Input
    cin >> str1 >> str2 >> n;

    // Create MyString objects
    MyString myStr1(str1);
    MyString myStr2(str2);

    // Perform operations and display results
    (myStr1 + myStr2).display();          // Concatenation
    (myStr1 * n).display();               // First string repeated n times
    (myStr2 * n).display();               // Second string repeated n times

    return 0;
}