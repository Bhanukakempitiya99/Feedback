#include <iostream>
#include "Feedback.h"
using namespace std;

//default constructor
Feedback::Feedback()
{

}

Feedback::Feedback(int Fid, string Ftitle, string Fdis)
{
  Fid = Fid;
  FeedbackTitle = Ftitle;
  FeedbackDis = Fdis;
}

Feedback::viewFeedback()
{
  cout << "======================||Feedback||=======================" << endl; 
  cout << "Feedback ID : " << Fid << endl;
  cout << "Feedback Title : " << Ftitle << endl;
  cout << "Feedback Discription : " << Fdis << endl;  
}

void Feedback::checkReply();

Feedback::~Feedback()
{
  cout << "Destructor called!" << endl;
}