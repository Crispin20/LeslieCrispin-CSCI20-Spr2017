//Leslie Crispin 
// 3-7-17
// lab25:  the user inputs book title, author, copyright, genre, and age group for five books.  the program then out puts the name and information given.
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

class Books{   // class for books
    public:
        void SetBook_Title(string title);  // folowing are the mutators
        void SetAuthorOfBook(string Authorname);
        void SetCopy_RightBook(string copyRight);
        void SetGenreBook(string genre);
        void SetAgeGroup(string AgeGroupBook);
        
        string GetBook_Title() const; // following are the assessor
        string GetAuthorOfBook() const;
        string GetCopy_RightBook() const;
        string GetGenreofBook() const;
        string GetAgeGroupBook() const;

    private:
        string bookTitleName;
        string authorBookName;
        string copyRightBook;
        string genreOfBook;
        string ageGroupBook;
};

void Books::SetBook_Title(string title) {
    bookTitleName = title;
}

void Books::SetAuthorOfBook(string authorName) {
    authorBookName = authorName;
}
    
void Books::SetCopy_RightBook(string copyRight) {
    copyRightBook = copyRight;
}
        
void Books::SetGenreBook(string genre) {
    genreOfBook = genre;
}
        
void Books::SetAgeGroup(string AgeGroupBook) {
    ageGroupBook = AgeGroupBook;
}

string Books::GetBook_Title() const {
    return bookTitleName;
}

string Books::GetAuthorOfBook() const {
    return authorBookName;
}

string Books::GetCopy_RightBook() const {
    return copyRightBook;
}
string Books::GetGenreofBook() const {
    return genreOfBook;
}
string Books::GetAgeGroupBook() const {
    return ageGroupBook;
}


int main(){
    Books bookInfo;
    
 
    string book1; // booktitle
    string author1; // author of the book 
    string copyRight1; // copyright year
    string genre1; // genre of the book 
    string ageGroup1; // age group of the book

    cout << "Enter Title of the Book One: ";
    getline (cin, book1); 
    bookInfo.SetBook_Title(book1);
    
    cout << "Enter Book author: ";
    getline (cin, author1); 
    bookInfo.SetAuthorOfBook(author1);
    
    cout  << "Enter book's year of CopyRight: ";
    getline (cin, copyRight1);
    bookInfo.SetCopy_RightBook(copyRight1);
    
    cout << "Enter Genre: ";
    getline (cin, genre1);
    bookInfo.SetGenreBook(genre1);
    
    cout << "Enter the age group: ";
    getline (cin, ageGroup1);
    bookInfo.SetAgeGroup(ageGroup1);
    

    string book2;
    string author2;
    string copyRight2;
    string genre2;
    string ageGroup2;
    
    cout << endl << "Enter Title of the Book two: ";
    getline (cin, book2); 
    bookInfo.SetBook_Title(book2);
    
     cout << "Enter Book Author: ";
     getline (cin, author2); 
     bookInfo.SetAuthorOfBook(author2);
    
 
    cout << "Enter book's year of CopyRight: ";
    getline (cin, copyRight2);
    bookInfo.SetAgeGroup(ageGroup2);
    
    cout << "Enter Genre: ";
    getline (cin, genre2);
    bookInfo.SetGenreBook(genre2);
    
    cout << "Enter the age group: ";
    getline (cin, copyRight2);
    bookInfo.SetCopy_RightBook(copyRight2);
    

   string book3;
   string author3;
   string copyRight3;
   string genre3;
   string ageGroup3;

    cout << endl <<"Enter Title of the Book Three: ";
    getline (cin, book3);
    bookInfo.SetBook_Title(book3);
    
    cout << "Enter Book author: ";
    getline (cin, author3); 
    bookInfo.SetAuthorOfBook(author3);
    
    cout << "Enter book's year of CopyRight: ";
    getline (cin, copyRight3);
    bookInfo.SetCopy_RightBook(copyRight3);
    
    cout << "Enter Genre: ";
    getline (cin, genre3);
    bookInfo.SetGenreBook(genre3);
    
    cout << "Enter the age group: ";
    getline (cin, ageGroup3);
    bookInfo.SetAgeGroup(ageGroup3);
    
    
    string book4;
    string author4;
    string copyRight4;
    string genre4;
    string ageGroup4;
    
    cout << endl << "Enter Title of the Book Four: ";
    getline (cin, book4);
    bookInfo.SetBook_Title(book4);
    
    cout << "Enter Book author: ";
    getline (cin, author4); 
    bookInfo.SetAuthorOfBook(author4);
    
    cout << "Enter book's year of CopyRight: ";
    getline (cin, copyRight4);
    bookInfo.SetCopy_RightBook(copyRight4);
    
    cout << "Enter Genre: ";
    getline (cin, genre4);
    bookInfo.SetGenreBook(genre4);
    
    cout << "Enter the age group: ";
    getline (cin, ageGroup4);
    bookInfo.SetAgeGroup(ageGroup4);
    
    string book5;
    string author5;
    string copyRight5;
    string genre5;
    string ageGroup5;

    cout << endl << "Enter Title of the Book Five: ";
    getline (cin, book5);
    bookInfo.SetBook_Title(book5);
    
    cout << "Enter Book author: ";
    getline (cin, author5); 
    bookInfo.SetAuthorOfBook(author5);
    
    cout << "Enter book's year of CopyRight: ";
    getline (cin, copyRight5);
    bookInfo.SetCopy_RightBook(copyRight5);
    
    cout << "Enter Genre: ";
    getline (cin, genre5);
    bookInfo.SetGenreBook(genre5);
    
    cout << "Enter the age group: ";
    getline (cin, ageGroup5);
    bookInfo.SetAgeGroup(ageGroup5);
    
    

    cout << endl << endl << "Book one: "  << bookTitleName << ", Author: " << author1 << ", CopyRight year: " << copyRight1 << ", Genre: " << genre1 << ", Age Group: " << ageGroup1;
    cout << endl << endl << "Book two: "  << book2 << ", Author: " << author2 << ", CopyRight year: " << copyRight2 << ", Genre: " << genre2 << ", Age Group: " << ageGroup2;
    cout << endl << endl << "Book three: "  << book3 << ", Author: " << author3 << ", CopyRight year: " << copyRight3 << ", Genre: " << genre3 << ", Age Group: " << ageGroup3;
    cout << endl << endl << "Book four: "  << book4 << ", Author: " << author4 << ", CopyRight year: " << copyRight4 << ", Genre: " << genre4 << ", Age Group: " << ageGroup4;
    cout << endl << endl << "Book five: "  << book5 << ", Author: " << author5 << ", CopyRight year: " << copyRight5 << ", Genre: " << genre5 << ", Age Group: " << ageGroup5;
    
    return 0;
}