#include <string>
#include <vector>
using namespace std;

string render_num_vector(const vector<int>& vec) {
	string s = "";
	if(vec.size()==0){
		return s;
	} 
	for(int i = 0; i<vec.size(); i++){
		s+= to_string(vec[i]) + " ";
	}
	s.erase(s.length()-1,1);
	return s;
}
int num_vector_sum(const vector<int>& vec){
	int sum = 0;
	if(vec.size()==0){
		return sum;
	}
	for(int i = 0; i < vec.size(); i++){
		sum += vec[i];
	}
	return sum;
}
int num_vector_product(const vector<int>& vec){
	int prod = 1;
	if(vec.size()==0){
		return 0;
	}
	for(int i = 0; i<vec.size(); i++){
		prod *= vec[i];		
	} 
	return prod;
}
vector<int> only_evens(const vector<int>& vec){
	vector<int> even;
	if(vec.size()==0){
		return even;
	}
	for(int i=0; i<vec.size(); i++){
		if(vec[i]%2==0){
			even.push_back(vec[i]);
		}	
	}
	return even;
}
vector<int> only_odds(const vector<int>& vec){
	vector<int> odds;
	if(vec.size()==0){
		return odds;
	}
	for(int i=0; i<vec.size(); i++){
		if(vec[i]%2!=0){
			odds.push_back(vec[i]);
		}
	}
	return odds;
}
vector<int> nums_between(const vector<int>& vec,int low,int high){
	vector<int> bet;
	if(vec.size()==0){
		return bet;
	}
	for(int i=0; i<vec.size(); i++){
		if(low<=vec[i] && vec[i]<=high){
			bet.push_back(vec[i]);
		}
	}
	return bet;
}
double num_vector_sum(const vector<double>& vec){
	double sum = 0;
	if(vec.size()==0){
		return 0;
	}
	for(int i = 0; i < vec.size(); i++){
		sum+=vec[i];
	}
	return sum;
}
double num_vector_mean(const vector<double>& vec){
	if(vec.size()==0){
		return 0.0;
	}
	return (num_vector_sum(vec))/(vec.size());
}
