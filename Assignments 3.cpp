#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

// 1. Sum of two integers
int sum(int x, int y) {
    return x + y;
}

// 2. Count vowels in a string
int countVowels(const string& s) {
    int count = 0;
    for (char c : s) {
        c = tolower(c);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            count++;
    }
    return count;
}

// 3. Average of integers in a list
double average(const vector<int>& nums) {
    int total = 0;
    for (int n : nums)
        total += n;
    return nums.empty() ? 0 : (double)total / nums.size();
}

// 4. Remove vowels from a sentence
string removeVowels(const string& s) {
    string result;
    for (char c : s) {
        char lower = tolower(c);
        if (!(lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u'))
            result += c;
    }
    return result;
}

// 5. Longest string in a list
string longestString(const vector<string>& words) {
    string longest = "";
    for (const string& w : words) {
        if (w.length() > longest.length())
            longest = w;
    }
    return longest;
}

// 6. Median of integers
double median(vector<int> nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    if (n % 2 == 0)
        return (nums[n/2 - 1] + nums[n/2]) / 2.0;
    else
        return nums[n/2];
}

// 7. Remove even numbers from a list
vector<int> removeEven(const vector<int>& nums) {
    vector<int> result;
    for (int n : nums) {
        if (n % 2 != 0)
            result.push_back(n);
    }
    return result;
}

// 8. Sort strings alphabetically
vector<string> sortStrings(vector<string> words) {
    sort(words.begin(), words.end());
    return words;
}

// 9. Sum of all integers in a list
int sumList(const vector<int>& nums) {
    int total = 0;
    for (int n : nums)
        total += n;
    return total;
}

// 10. Reverse all strings in a list
vector<string> reverseStrings(vector<string> words) {
    for (string& w : words)
        reverse(w.begin(), w.end());
    return words;
}

int main() {
    // Sample data
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<string> words = {"apple", "banana", "kiwi", "orange"};
    string sentence = "Hello World";

    cout << "Sum of 3 and 5: " << sum(3, 5) << endl;
    cout << "Vowel count: " << countVowels(sentence) << endl;
    cout << "Average: " << average(numbers) << endl;
    cout << "Sentence without vowels: " << removeVowels(sentence) << endl;
    cout << "Longest string: " << longestString(words) << endl;
    cout << "Median: " << median(numbers) << endl;

    vector<int> oddNumbers = removeEven(numbers);
    cout << "Odd numbers: ";
    for (int n : oddNumbers) cout << n << " ";
    cout << endl;

    vector<string> sortedWords = sortStrings(words);
    cout << "Sorted strings: ";
    for (string w : sortedWords) cout << w << " ";
    cout << endl;

    cout << "Sum of list: " << sumList(numbers) << endl;

    vector<string> reversedWords = reverseStrings(words);
    cout << "Reversed strings: ";
    for (string w : reversedWords) cout << w << " ";
    cout << endl;

    return 0;
}
