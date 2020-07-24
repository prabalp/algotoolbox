#include <iostream>
#include <vector>

using std::vector;
// using namespace std;

// creating the structure
struct weightvaluepair{
  int weight, value;
  double vw;
};


// the reqired function
double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
  // write your code here
  n=values.size();
  vector<weightvaluepair> triplets;
  for(unsigned long long int i=0;i<n;i++){
    weightvaluepair k;
    k.weight = weights[i];
    k.value = values[i];
    k.vw = values.at(i) * 1.0 / weights.at(i);
    triplets.push_back(k);
  }

  // unable to understant this part
   std::sort(triplets.begin(), triplets.end(), [](const weightValuePair &a, const weightValuePair &b) -> bool {
    return a.vw > b.vw;
  });
  
  
  
  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
