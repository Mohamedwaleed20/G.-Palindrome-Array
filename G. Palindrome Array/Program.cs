// See https://aka.ms/new-console-template for more information
int n = int.Parse(Console.ReadLine());
int[] arr = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();

bool isPalindrome = true;
for (int i = 0; i < n / 2; i++)
{
    if (arr[i] != arr[n - i - 1])
    {
        isPalindrome = false;
        break;
    }
}

Console.WriteLine(isPalindrome ? "YES" : "NO");
