/////// There's still something wrong with this code and I can't figure it out. It shuffles the numbers but it doesn't display 10 of them. I can get it to display 8 or 9 on most of the times that I compile it but
/////// I don't know why it won't display all 10 everytime. 


#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

template<typename T>
void shuffle(vector<T>& v)
{
	vector<T>firstHalf;
	vector<T>secondHalf;
	int newnum;

	for (int i = 0; i<v.size() ; i++) {
		if (i < v.size() / 2)
		{
			cin >> v[i];
			firstHalf.push_back(v[i]);
		}
		else
		{
			cin >> v[i];
			secondHalf.push_back(v[i]);
		}
	}
	v.clear();
	



	do {
		int deck = rand() % 2; //choose either the first half or second half
		T card;  //Declare a variable to hold the randomly chosen item
		if (deck == 0 || secondHalf.size() == 0) {
			card = firstHalf[firstHalf.size() - 1];
			firstHalf.pop_back(); // Take the card off the deck

		}
		else{
			card = secondHalf[secondHalf.size() - 1];
			secondHalf.pop_back(); // Take the card off the deck
		}
		v.push_back(card);//put the card in the main deck
	} while (firstHalf.size() > 0 && secondHalf.size() > 0);
	
}

int main(){
	srand(time(NULL));
	vector<int>v(10);

	 
	 shuffle(v); 
	 for (int i = 0; i < v.size(); i++){
		 cout << v[i] << " ";
	 }
}