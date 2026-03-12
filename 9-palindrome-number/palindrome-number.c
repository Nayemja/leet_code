bool isPalindrome(int x) {
    
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    long long reverse = 0;
    int original = x;
    int reminder;

    while (x != 0) {
        reminder = x % 10;
        reverse = reverse * 10 + reminder;
        x /= 10;
    }

    return (reverse == original);
}