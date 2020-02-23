/*
Comic Book Collection
Justin Wilson
2/22/2020

*/

#include <iostream>
using namespace std;

struct ComicBook
{
    char Title;
    int Issue;
    int YearPublished;
    char Author;
    int Ranking;
    
};


int main()
{
    ComicBook ComicBook1;

    ComicBook1.Title = ComicBook1.Title;
    ComicBook1.Issue = ComicBook1.Issue;
    ComicBook1.YearPublished = ComicBook1.YearPublished;
    ComicBook1.Author = ComicBook1.Author;
    ComicBook1.Ranking = ComicBook1.Ranking;
/*
    ComicBook ComicBook2;

    ComicBook2.Title = 'Full Comic Book Title: ';
    ComicBook2.Issue = 'Issue Number: ';
    ComicBook2.YearPublished = 'Year Published: ';
    ComicBook2.Author = 'Full Author Name: ';
    ComicBook2.Ranking = 'Comic Rating: ';

    ComicBook ComicBook3;

    ComicBook3.Title = 'Full Comic Book Title: ';
    ComicBook3.Issue = 'Issue Number: ';
    ComicBook3.YearPublished = 'Year Published: ';
    ComicBook3.Author = 'Full Author Name: ';
    ComicBook3.Ranking = 'Comic Rating: ';
*/
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


    cout<<"Comic Book 1: "<<endl;
    cout<<ComicBook1.Title;
    cout<<ComicBook1.Issue;
    cout<<ComicBook1.YearPublished;
    cout<<ComicBook1.Author;
    cout<<ComicBook1.Ranking;
/*
    cout<<"Comic Book 2: "<<endl;
    cout<<ComicBook2.Title;
    cout<<ComicBook2.Issue;
    cout<<ComicBook2.YearPublished;
    cout<<ComicBook2.Author;
    cout<<ComicBook2.Ranking;

    cout<<"Comic Book 3: "<<endl;
    cout<<ComicBook3.Title;
    cout<<ComicBook3.Issue;
    cout<<ComicBook3.YearPublished;
    cout<<ComicBook3.Author;
    cout<<ComicBook3.Ranking;
*/

    
    





    return 0;
}