class Solution {
 public:
  bool isAnagram(string firstString, string secondString) {
    if (firstString.length() != secondString.length())
      return false;

    vector<int> charFrequency(26);

    for (int i = 0; i < firstString.length(); ++i) {
      char charFromFirst = firstString[i];
      ++charFrequency[charFromFirst - 'a'];
    }

    for (int i = 0; i < secondString.length(); ++i) {
      char charFromSecond = secondString[i];
      if (charFrequency[charFromSecond - 'a'] == 0)
        return false;
      --charFrequency[charFromSecond - 'a'];
    }

    return true;
  }
};
