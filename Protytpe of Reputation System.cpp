#include<bits/stdc++.h>
using namespace std;
#define False false
#define True true
int par,num,no_of_articles;
struct node
{ string domain;
   string grp;
   string community;
   int rep;
};

struct n
{
     int u;//upvotes
      int d;//downvotes
};
vector<struct node> user(4);
vector<struct n>article;


int upvote_article()
{    cin>>par>>num;
       if(article[num].u > article[num].d)
         user[par].rep+=5;
       else
         user[par].rep-=5;
    article[num].u+=1;
}

int devote_article()
{ cin>>par>>num;
   cout<<"Then edit the article otherwise,so do u accept the challenge";
   bool x;
     cout<<"True/False";
     cin>>x;
     if(x==False)
    {for(int i=0;i<4;i++)
     {
         if(user[par].grp == user[i].grp && user[i].domain == "grp-sysad")
         {
              user[i].rep+=5;
         }
     }
     user[par].rep-=5;
    }
    else
    {
        user[par].rep+=5;
        article[num].d +=1;
    }

}

int upvote_comment()
{ cin>>par>>num;
    user[par].rep+=2;
}

int devote_comment()
{ cin>>par>>num;
  user[par].rep-=2;
}
//suggested for improvement
int published()
{  cin>>par>>num;
   for(int i=0;i<4;i++)
   {
        if(user[i].domain == "publisher")
        {
             user[i].rep+=5;
             break;
        }
   }

}

int articlereported()
{ cin>>par>>num;
      cout<<"Then tell the reason for the article otherwise,so do u accept the challenge because it will be givn to publisher";
   bool x;
     cout<<"True/False";
     cin>>x;
     if(x==False)
    {for(int i=0;i<4;i++)
     {
         if(user[par].grp == user[i].grp && user[i].domain == "grp-sysad")
         {
              user[i].rep+=5;
         }
     }
     user[par].rep-=25;
    }
    else
    {
        user[par].rep+=25;
        article[num].d = -1;//-1 indicates the removal
    }
  user[par].rep-=25;
}

int post_comment()
{ cin>>par>>num;
   user[par].rep+=5;
}
int join()
{  cin>>par>>num;
   user[par].rep+=5;
   user[par].domain = "grp-sysad";
}
int draft()
{
     cin>>par>>num;
     user[par].rep+=15;
}
int flag()
{
    cin>>par>>num;
   user[par].rep-=5;
}
int upvote_commentr()
{ cin>>par>>num;
    user[par].rep+=2;
}

int devote_commentr()
{ cin>>par>>num;
  user[par].rep-=2;
}

int response_report()
{
     cin>>par>>num;
     user[par].rep-=5;
}
int publisher()
{
    cin>>par>>num;
    user[par].rep+=5;
}

int theManagerPublisher(string dept)
{ int max1 = INT_MAX,pos=0;
  for(int i=0;i<4;i++)
    { if(user[i].community == dept)
         {
              max1 =  max(max1 , user[i].rep);
              pos = i;
         }
    }
    user[pos].domain = "publisher";
    return pos;
}
int main()
{ //lets say that the article was published by the sysad for the first time
    struct n nnn;
    nnn.d = 0;
    nnn.u = 0;
    article.push_back(nnn);
     struct node nn;
     nn.grp = "none";
     nn.community = "none";
     nn.domain = "none";
     user.push_back(nn);
  //for(int i=0;i<4;i++)
    // cin>>user[i].rep>>user[i].grp>>user[i].domain>>user[i].community;
       user[0].domain = "sysad";
   user[0].grp = "all";
   user[0].community = "all";
   user[0].rep = 0;
     user[1].domain = "author";
   user[1].grp = "cse-algo";
   user[1].community = "cse";
   user[1].rep = 0;
      user[2].domain = "author";
   user[2].grp = "cse-algo";
   user[2].community = "cse";
   user[2].rep = 0;
      user[3].domain = "author";
   user[3].grp = "ece-tcl";
   user[3].community = "ece";
   user[3].rep = 0;
      user[4].domain = "author";
   user[4].grp = "ece-mp";
   user[4].community = "ece";
   user[4].rep = 0;
    while(1)
    {  int n;
         cout<<"case 1: upvote_article()"<<endl<<"case 2: devote_article()"<<endl<<"case 3: upvote_comment();"<<endl<<"case 4: devote_comment();"
         <<endl<<"case 5: published()"<<endl<<"case 6: articlereported();"<<endl<<"case 7: post_comment();"<<endl<<"case 8: join()"<<endl<<
         "case 9: draft();no_of_articles+=1;"<<endl<<"case 10:flag();"<<endl<<"case 11: upvote_commentr();"<<endl<<"case 12: devote_commentr();"<<endl<<
         "case 13: response_report()"<<endl<<"case 14: publisher()"<<endl<<endl;
           cout<<"your option is:"<<endl;
         cin>>n;
         cout<<"The user is:"<<endl;
         cout<<"The article number is:"<<endl;
         switch(n)
         {
         case 1: upvote_article();break;
         case 2: devote_article();break;
         case 3: upvote_comment();break;
         case 4: devote_comment();break;
         case 5: published();break;
         case 6: articlereported();break;
         case 7: post_comment();break;
         case 8: join();break;
         case 9: draft();no_of_articles+=1;break;
         case 10:flag();break;
         case 11: upvote_commentr();break;
         case 12: devote_commentr();break;
         case 13: response_report();break;
         case 14: publisher();break;
         }
    }
    cout<<"The id number is :"<<theManagerPublisher()<<endl;
   return 0;

}



