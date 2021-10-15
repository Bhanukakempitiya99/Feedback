#include <iostream>
#include "Feedback.h"
using namespace std;

int main(){
  Feedback feedback1;
  feedback1.setFid(1);
  feedback1.setFeedbackTitle("Rating");
  feedback1.setFeedbackDis("5 star Ratings");
  feedback1.viewFeedback();


  Feedback  feedback2;
  feedback2.setFid(2);
  feedback2.setFeedbackTitle("Recomendation");
  feedback2.setFeedbackDis("Highly recommended for students.");
  feedback2.viewFeedback();
}