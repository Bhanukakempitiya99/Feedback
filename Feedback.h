#include <iostream>
using namespace std;

class Feedback
{
  private:
    int FeedbackId;
    string FeedbackTitle;
    string FeedbackDis;

  public:
    Feedback();//default constructor
    void viewFeedback();
    void checkReply();
    ~Feedback();//destructor

    //setters
    void setFid(int FeedbackId)
    {
      FeedbackId = FeedbackId;
    }

    void setFeedbackTitle(string FeedbackTitle)
    {
      FeedbackTitle = FeedbackTitle;
    }

    void setFeedbackDis(string FeedbackDis)
    {
      FeedbackDis = FeedbackDis;
    }

  //getters
    int getFid ()
    {
      return Fid;
    }

    string getFeedbackTitle()
    {
      return FeedbackTitle;
    }

    string getFeedbackDis()
    {
      return FeedbackId;
    }

};