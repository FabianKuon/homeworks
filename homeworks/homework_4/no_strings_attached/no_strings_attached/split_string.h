#pragma once
#include <string>
#include <vector>

using namespace std;

[[nodiscard]] vector<string> 
split(const string& str, const string& delimiter);

[[nodiscard]] vector<string> 
split(const string& str, const string& delimiter, int number_of_chunks_to_keep);