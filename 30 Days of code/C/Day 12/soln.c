#include <iostream>
#include <vector>

using namespace std;

class Person {
	protected:
		string firstName;
		string lastName;
		int id;

	public:
		Person(string firstName, string lastName, int identification) {
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}

		void printPerson() {
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
};

class Student : public Person {
	private:
		vector<int> testScores;  

	public:
  		// Write your constructor
		Student(string firstName, string lastName, int identification, vector<int> testScores)
		  : Person(firstName, lastName, identification) {
			this->testScores = testScores;
		}
  
  		// Write char calculate()
		char calculate() {
			char ret;
			int avg = 0;

			for(int i = 0; i < testScores.size(); i++) {
				avg += testScores[i];
			}

			avg = avg / testScores.size();

			if(avg >= 90) {
				ret = 'O';
			} else if(avg >= 80) {
				ret = 'E';
			} else if(avg >= 70) {
				ret = 'A';
			} else if(avg >= 55) {
				ret = 'P';
			} else if(avg >= 40) {
				ret = 'D';
			} else {
				ret = 'T';
			}

			return ret;
		}

};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;

	cin >> firstName >> lastName >> id >> numScores;

  	vector<int> scores;

  	for(int i = 0; i < numScores; i++) {
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}

	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();

	cout << "Grade: " << s->calculate() << "\n";

	return 0;
}
