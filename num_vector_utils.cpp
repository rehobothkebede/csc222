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
