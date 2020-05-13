string partitionArray(int k,vector<int> numbers){
set<int> s(numbers.begin(), numbers.end());
if (s.size()>k){
  return "Yes";
}
else{
  return "No";
}

}
