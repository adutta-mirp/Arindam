void rightLose() {
      
    displayScores();
reset(0);

}

void leftLose() {

    displayScores();
    reset(1);
  

}
void reset(int score){

       ballX=displayWidth/2;
      ballY = displayHeight/2;
    ballVx=0.1*BALL_VELOCITY;
    ballVy=5;
    
      if (score == 0)
   leftScore+=1; 
     if (score == 1)
   rightScore+=1;
  }