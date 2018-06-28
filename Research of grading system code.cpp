#include<bits/stdc++.h>
using namespace std;

int grading(vector<int>select , vector<int>Upvote , vector<int>Downvote ,vector<int>view,int numberOfArticles){
    int numberOfSelect = select.size();
    int bankOfPoints = 5*numberOfSelect;
    vector<float>articles;
    vector<int>EqualArray;
    vector<int>NonEqualArray;
    for(int i=0;i<select.size();i++)
    { float x = (Upvote[select[i]]+Downvote[select[i]] )/ (view[select[i]]);
        if( x<=1 && x>=0.75 )
        {
            EqualArray.push_back(select[i]);
        }
        else
        {
            NonEqualArray.push_back(select[i]);
        }
    }
    for(int i=0;i<numberOfArticles;i++)
    {
        articles.push_back(0);
    }
    for(int i=0;i<EqualArray.size();i++)
    {   if(EqualArray.size())
            articles[EqualArray[i]] = (0.7*bankOfPoints)/EqualArray.size();
    }
    for(int i=0;i<NonEqualArray.size();i++)
    {
        if(NonEqualArray.size())
            articles[NonEqualArray[i]] = (0.1*bankOfPoints)/NonEqualArray.size();
    }
    cout<<endl<<"The points are : " ;
    for(int i=0;i<numberOfArticles;i++)
        cout<<articles[i]<<" ";
}

int selectPositiveArticles(vector<int>Upvote, vector<int> Downvote,int numberOfArticles,vector<int>view){
	vector<int>select;
	select.push_back(0);
	int k=0;
	for(int i=1;i<numberOfArticles;i++)
		{  if(Downvote[i] == Downvote[select[select.size()-1]])
                {
                    if(Upvote[i] - Upvote[select[select.size()-1]] > 0)
                    {
                        select.push_back(i);
                    }
                }
		    else if( ((Upvote[i] - Upvote[select[select.size()-1]]) / abs(Downvote[i] - Downvote[select[select.size()-1]]) > 1))
				{	select.push_back(i);
				}
		}

		cout<<"The selected ones are"<<endl;
	for(int i=0;i<select.size();i++)
		cout<<select[i] + 1<<" ";
    grading(select ,Upvote , Downvote ,view,numberOfArticles);
}

int main(){
	vector<int>Upvote;
 	vector<int>Downvote;
 	vector<int>view;
  	int numberOfArticles;
  	cout<<"Enter The number of articles : ";
  	cin>>numberOfArticles;
  	int x;
  	for(int i=0;i<numberOfArticles;i++)
		{ 	cout<<"The values of (Upvote,Downvote,View)"<<i+1<<" article should be entered : ";
			cin>>x;
			Upvote.push_back(x);
			cin>>x;
			Downvote.push_back(x);
			cin>>x;
			view.push_back(x);
	  		cout<<endl;
		}
	/*for(int i=1;i<numberOfArticles;i++)
		{ Upvote[i] = Upvote[i] + Upvote[i-1];
		  Downvote[i] = Downvote[i] + Downvote[i-1];
		}*/
    if(numberOfArticles!=1)
        selectPositiveArticles(Upvote,Downvote,numberOfArticles,view);
    else
        cout<<0;


}
