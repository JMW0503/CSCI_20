/*
Comic Book Collection
Justin Wilson
2/23/2020
a program that allows the user to input some metadata for three (3) of their most prized comic books. 
The user must enter the following information for each comic book:

Full Comic Book Title
Issue Number
Year Published
Full Author Name
Comic Ranking

After all the information has been entered, display all of the comic book information back to the terminal, grouped appropriately.
*/
#include <iostream>
using namespace std;

struct ComicBook
{
    string Title;
    string Issue;
    string YearPublished;
    string Author;
    string Ranking;
    
};


int main()
{
    ComicBook ComicBook1 = {};
    
    cout<<"Comic Book 1: "<<endl;
    cout<<"Full Comic Book Title: "<<ComicBook1.Title;
    cin>>ComicBook1.Title;
    
    cout<<"Issue Number: "<<ComicBook1.Issue;
    cin>>ComicBook1.Issue;

    cout<<"Year Published: "<<ComicBook1.YearPublished;
    cin>>ComicBook1.YearPublished;

    cout<<"Full Author Name: "<<ComicBook1.Author;
    cin>>ComicBook1.Author;

    cout<<"Comic Rating: "<<ComicBook1.Ranking;
    cin>>ComicBook1.Ranking;
    cout<<endl<<endl;

    ComicBook ComicBook2 = {};
    
    cout<<"Comic Book 2: "<<endl;
    cout<<"Full Comic Book Title: "<<ComicBook2.Title;
    cin>>ComicBook2.Title;
    
    cout<<"Issue Number: "<<ComicBook2.Issue;
    cin>>ComicBook2.Issue;

    cout<<"Year Published: "<<ComicBook2.YearPublished;
    cin>>ComicBook2.YearPublished;

    cout<<"Full Author Name: "<<ComicBook2.Author;
    cin>>ComicBook2.Author;

    cout<<"Comic Rating: "<<ComicBook2.Ranking;
    cin>>ComicBook2.Ranking;
    cout<<endl<<endl;

    ComicBook ComicBook3 = {};
    
    cout<<"Comic Book 3: "<<endl;
    cout<<"Full Comic Book Title: "<<ComicBook3.Title;
    cin>>ComicBook3.Title;
    
    cout<<"Issue Number: "<<ComicBook3.Issue;
    cin>>ComicBook3.Issue;

    cout<<"Year Published: "<<ComicBook3.YearPublished;
    cin>>ComicBook3.YearPublished;

    cout<<"Full Author Name: "<<ComicBook3.Author;
    cin>>ComicBook3.Author;

    cout<<"Comic Rating: "<<ComicBook3.Ranking;
    cin>>ComicBook3.Ranking;
    cout<<endl<<endl;

    
    cout<<"Comic Book 1: "<<endl;
    cout<<"Full Comic Book Title: "<<ComicBook1.Title<<endl;
    cout<<"Issue Number: "<<ComicBook1.Issue<<endl;
    cout<<"Year Published: "<<ComicBook1.YearPublished<<endl;
    cout<<"Full Author Name: "<<ComicBook1.Author<<endl;
    cout<<"Comic Rating: "<<ComicBook1.Ranking<<endl<<endl;
    
  
    cout<<"Comic Book 2: "<<endl;
    cout<<"Full Comic Book Title: "<<ComicBook2.Title<<endl;
    cout<<"Issue Number: "<<ComicBook2.Issue<<endl;
    cout<<"Year Published: "<<ComicBook2.YearPublished<<endl;
    cout<<"Full Author Name: "<<ComicBook2.Author<<endl;
    cout<<"Comic Rating: "<<ComicBook2.Ranking<<endl<<endl;
    

    cout<<"Comic Book 3: "<<endl;
    cout<<"Full Comic Book Title: "<<ComicBook3.Title<<endl;
    cout<<"Issue Number: "<<ComicBook3.Issue<<endl;
    cout<<"Year Published: "<<ComicBook3.YearPublished<<endl;
    cout<<"Full Author Name: "<<ComicBook3.Author<<endl;
    cout<<"Comic Rating: "<<ComicBook3.Ranking<<endl;

    
    return 0;
}