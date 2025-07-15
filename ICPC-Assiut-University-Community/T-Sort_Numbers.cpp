#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int a, b, c;
  std::cin >> a >> b >> c;

  std::vector<int> nums = {a, b, c};
  std::sort(nums.begin(), nums.end());

  // First Output: Ascending order
  for (int num : nums)
  {
    std::cout << num << std::endl;
  }

  // Blank line
  std::cout << std::endl;

  // Second Output: Original order
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;

  return 0;
}