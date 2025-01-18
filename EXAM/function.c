int reverseNumber(int num, int rev)
{
    while (num != 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}