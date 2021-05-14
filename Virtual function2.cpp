#include<iostream>
using namespace std;
 class anay
 	{ protected:
		string title;
		float rating;
	 public:
		anay(string s, float r)
		{
			title = s;
			rating = r;
		}

		   virtual void display(){};
	};
 class anayYT:public anay
{
	float videoLength;
	    public:
	        anayYT(string s, float r, float vl): anay(s, r)
	{
	        videoLength = vl;
       	}
		        void display(){
				        cout<<"This is an amazing video with title "<<title<<endl;
					cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
					cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
				      }
};
class anayBook:public anay
{
	    int words;
	        public:
	            anayBook(string s, float r, int wc): anay(s, r)
				{
			                words = wc;
				}
		         void display(){
				       cout<<"This is an amazing text tutorial with title "<<title<<endl;
				       cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
				       cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
						            }
};
int main(){
	    string title;
	    float rating, vlen;
            int words;
	    title = " tutorial";
	        vlen = 4.56;
		rating = 4.89;
	        anayYT Video(title, rating, vlen);

              title = " tutorial Text";
              words = 433;
              rating = 4.19;
          anayBook Book(title, rating, words); 
             anay* tuts[2];
	         tuts[0] = &Video;
		 tuts[1] = &Book;

		         tuts[0]->display();
			 tuts[1]->display();

			         return 0;
}
