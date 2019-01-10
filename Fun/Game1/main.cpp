#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//by Jake Henson, 2019

string startingArea() //just an area to initialize the game 
{
	string Uname = "";
	cout << "Hello...";
	cout << endl;

	cout << "What is your name?  ";
	cin >> Uname;

	cout << "Thank you, " + Uname <<endl;
	cout << "Now we're ready to begin..." << endl;
	
	for(int i = 0; i <=5; i++)
	{
		cout << "." << endl;
	}

	return Uname;
}


int room1(string uName) //starting room, ship's hull 
{
  string playerChoice = "";	
  string line;
  int done = 2; 

  ifstream myfile ("./art1.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }
  else 
  {
  	cout << "FILE OPENING ERROR - " <<endl; 
  	return 0;
  }

  while(done > 0)
  {
    //something
  	cout<<"Do you: "<<endl;
    cout<<"1. Observe the destination screen " <<endl;
    cout<<"2. Observe the note " << endl;
    cout<<" (Enter either 1 or 2): ";
    cin >> playerChoice;

    if(playerChoice == "1")
    {
    	cout<<endl;
    	cout<<"You examine desination screen and read:" << endl;
    	cout<<"Destination [LOCKED: Black Hole 17A]"<<endl;
    	cout<<"...why the hell would we be going there?"<<endl; 
      cout<<"...is there a way to change direction?"<<endl; 
    	cout<<endl;
    	cout<<endl;
    	cout<<"Now "; 

    	playerChoice == "";
    	done--;
    }
    else if(playerChoice == "2")
    {
    	cout<<endl;
    	cout<<"You look at the small note stuck to the wall in front of you"<<endl;
    	cout<<"It has a message displayed on it:"<<endl;
    	cout<<endl; 
    	cout<<" -- ATTENTION " + uName + ", come find me in the breakroom."<<endl;
    	cout<<"We have something extremely important to discuss -- "<<endl; 
    	cout<<endl;
    	cout<<endl;
    	cout<<"Now "; 

    	playerChoice == "";
    	done--;
    }
    else if(playerChoice != "1" || "2")
    {
    	cout<<endl; 
    	cout<<"That is not a valid option...Let's try again"<<endl;
    	cout<<endl;
    	cout<<endl; 
    	playerChoice == "";
    }
  }

  cout<<"you feel you've seen everything here, and decide to turn around"<<endl;
  cout<<"to find out more about where you are."<<endl;

  return 1;
}


int room2(string uName) //breakroom w/ AI, Dave 
{
  string playerChoice2 = ""; 
  string deepChoice1 = "";
  string line;
  int done = 3; 
  bool validDeepChoice = false; 
  int aiStatus = 1; 

  ifstream myfile ("./art2.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }
  else 
  {
    cout << "FILE OPENING ERROR - " <<endl; 
    return 0;
  }

  cout<<"You decide to ask him a question:"<<endl; 


  while(done > 0)
  {
    cout<<"1. Who are you?" <<endl;
    cout<<"2. What did you want to speak to me about?" << endl;
    cout<<"3. Why are we headed for a black hole?"<<endl; 
    cout<<" (Enter either 1, 2, or 3): ";
    cin >> playerChoice2;

    cout<<endl;

    if(playerChoice2 == "1")
    {
      cout<<uName + " I AM THE ONBOARD AI, BUT YOU SHOULD KNOW THIS ALREADY"<<endl;
      cout<<"I AM HERE TO KEEP WATCH OVER YOU. MAKE SURE YOU DON'T DO ANYTHING STUPID."<<endl;
      playerChoice2 == "";
      cout<<endl;
      cout<<endl;
      done--;
    }
    else if(playerChoice2 == "2")
    {
      cout<<"I AM REQUIRED TO INFORM YOU OF THE FOLLOWING INFORMATION: "<<endl;
      cout<<"YOU SHOULD KNOW YOU DO NOT HAVE MUCH TIME LEFT: "<<endl;
      cout<<"TO BE EXACT - 13 MINUTES, 12 SECONDS, 43 MILLISECONDS BEFORE WE REACH THE SINGULARITY"<<endl;
      cout<<"AND YOU ARE SLOWLY AND PAINFULLY KILLED."<<endl;
      cout<<"..."<<endl;
      cout<<"...What the hell?!"<<endl; 
      playerChoice2 == "";
      cout<<"...why would you tell me that?"<<endl;
      cout<<"..."<<endl;
      cout<<"IT IS MY PROTOCOL TO INFORM YOU OF YOUR EXACT TIME BEFORE DEATH."<<endl; 
      cout<<"I WAS PROGRAMMED TO MAKE YOU AWARE OF THIS AS OFTEN AS POSSIBLE"<<endl;
      cout<<"TO PROVIDE PSYCHOLOGICAL DISCOMFORT AND DREAD."<<endl;
      cout<<endl;
      cout<<endl;
      done--;
    }
    else if(playerChoice2 == "3") //option 3 - interogate
    {
      while(validDeepChoice == false)
      {  
        cout<<uName + ", THAT IS NOT SOMETHING I AM ALLOWED TO ANSWER TO SOMEONE OF YOUR RANK"<<endl;
        cout<<endl;
        cout<<"Not allowed to answer?! Just tell me! "<<endl;
        cout<<endl;
        cout<<"**He says nothing**"<<endl;
        cout<<endl;
        cout<<"A. [INSULT] Fine. I didn't want to know. Stupid useless robot"<<endl;
        cout<<"B. [REASON] Look, if you're going to die too, why not tell me?"<<endl;
        cout<<"C. [FIGHT] Screw you. I'm not dying here. (Attack him)"<<endl;  
        cout<<" (Enter either A, B, or C): ";
        cin >> deepChoice1;
      
        cout<<deepChoice1;
        cout<<endl;
        cout<<endl;

        if(deepChoice1 == "A" || deepChoice1 == "a") //question A 
        {
          validDeepChoice = true;
          cout<<"YOUR INSULT HAS BEEN NOTED AND PERMANENTLY STORED INTO MEMORY"<<endl;
          cout<<"I CANNOT HELP YOU"<<endl;
          cout<<"AS YOU ARE A PRISONER HERE, " + uName<<endl;
          cout<<endl;
          aiStatus = 2;  
        }
        else if(deepChoice1 == "B" || deepChoice1 == "b") //question B
        {
          validDeepChoice = true;
          cout<<"NICE TRY. BUT YOU ARE A PRISONER HERE. YOU CANNOT OBTAIN INFORMATION FROM ME IN ANY WAY."<<endl; 
          cout<<"I CANNOT DIE. I DO NOT LIVE. BUT YOU CAN. AND YOU WILL SOON."<<endl;
          cout<<endl;
        }
        else if(deepChoice1 == "C" || deepChoice1 == "c") //question C 
        {
          validDeepChoice = true;
          cout<<"He grabs your arm with great force, stopping you completely. He shouts:"<<endl;
          cout<<"BEHAVE YOURSELF"<<endl;
          cout<<"YOU ARE A PRISONER HERE - YOUR OUTBRUST WILL NOW BE STORED INTO MEMORY PERMANENTLY"<<endl;
          cout<<endl; 
          aiStatus = 2; 
        }
        else if(deepChoice1 != "A" || deepChoice1 !=  "B" || deepChoice1 != "C" ||deepChoice1 != "a" || deepChoice1 !=  "b" || deepChoice1 !=  "c")
        {
          validDeepChoice = false;
          cout<<endl; 
          cout<<"That is not a valid option...Let's try again"<<endl;
          cout<<endl;
          cout<<endl; 
          deepChoice1 == "";
        }
        deepChoice1 == "";
      }  
      cout<<endl;
      playerChoice2 == "";  
      done--;
    }
    else if(playerChoice2 != "1" || "2" || "3")
    {
      cout<<endl; 
      cout<<"That is not a valid option...Let's try again"<<endl;
      cout<<endl;
      cout<<endl; 
      playerChoice2 == "";
    }
  }
  cout<<endl;
  cout<<"...A prisoner? I'm a prisoner here?"<<endl;
  cout<<"The AI is now silent. Panic sets in..."<<endl;
  cout<<"."<<endl;
  return aiStatus; 
}


int room3() //hallway full of choices 
{
  string playerChoice = ""; 
  string line;
  bool correctChoice = false; 

  ifstream myfile ("./art3.txt");

  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }
  else 
  {
    cout << "FILE OPENING ERROR - " <<endl; 
    return 0;
  }

  while(correctChoice == false)
  {
    cout<<"Do you: "<<endl;
    cout<<"1. Go left to the archive? " <<endl;
    cout<<"2. Go right to the terminal room? " << endl;
    cout<<" (Enter either 1 or 2): ";
    cin >> playerChoice;

    if(playerChoice == "1")
    {
      cout<<endl;
      cout<<"You walk down the hallway to the archive"<<endl;
      cout<<endl;

      playerChoice == "";
      correctChoice = true; 
      return 1; 
    }
    else if(playerChoice == "2")
    {
      cout<<endl;
      cout<<"You walk down the hallway to the terminal room"<<endl; 
      cout<<endl;

      playerChoice == "";
      correctChoice = true;
      return 2; 
    }
    else if(playerChoice != "1" || "2")
    {
      cout<<endl; 
      cout<<"That is not a valid option...Let's try again"<<endl;
      cout<<endl;
    
      playerChoice == "";
    }
  }
}

bool archive(string uName, bool aIStat)
{

  string tapeChoice = ""; 
  string line;
  bool allTapes = false; 
  int tapeCounter = 0;
  ifstream myfile ("./art4.txt");

  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }
  else 
  {
    cout << "FILE OPENING ERROR - " <<endl; 
    return 0;
  }


  while(allTapes == false)
  {
    ///FIGURE OUT A WAY TO LISTEN TO ALL THE TAPES, AND THEN EXIT THE ROOM

    cout<<"1. COMPUTER PASSWORDS - DO NOT DUPLICATE"<<endl;
    cout<<"2. WHAT TO DO IN CASE OF AI SHUTDOWN" <<endl;
    cout<<"You also remember the tape you picked up earlier..."<<endl; 
    cout<<"3. please listen to this " +uName << endl;
    cout<<" (Choose tape 1,2, or 3): ";
    cin >> tapeChoice;
    cout<<endl; 

    cout<<endl;
    cout<<"You go put the tape into the player on the wall...";
    cout<<endl;

    if(tapeChoice == "1")
    {
      if(aIStat == true)
      {
        cout<<"But upon trying put the tape in, but the deck immediately slams shut before you can"<<endl;
        cout<<"You hear Dave's voice booming from the speakers:"<<endl;
        cout<<"I'M SORRY, " + uName + "I CANNOT LET YOU DO THAT"<<endl;
        cout<<"YOUR PREVIOUS OUTBURST AGAINST ME WAS STORED IN THE SHIPS MEMORY."<<endl;
        cout<<"ACCESS TO TAPE DENIED"<<endl; 
      }
      else
      {
        cout<<"The tape hisses and eventually starts warbling"<<endl;
        cout<"You hear a breaking sound, followed by hissing as the tape ";
        cout<<"starts flying out of the machine. It's completely broken...";
        cout<<"..."<<endl;
      }
      cout<<"...shit. That didn't work..."<<endl;
      cout<<endl;
      tapeCounter++;
    }
    else if(tapeChoice == "2")
    {
      cout<<"The tape plays..."<<endl; 
      cout<<"You hear a man's voice, he sounds a bit frustrated:"<<endl; 
      cout<<"--I can't believe we really have to make these tapes. It's not like anyone other than"<<endl;
      cout<<"the administrative staff here needs them anyway..."<<endl;
      cout<<"*he sighs, and continues in a very bored-sounding voice*"<<endl; 
      cout<<"In case of AI shutdown - Repeat the following phrase to reboot the AI:"<<endl; 
      cout<<"RESET ALL SYSTEMS - BOOT TO BASE FRIENDLY OS - GIVE SYSTEM ADMIN PRIVELEGES 05021--"<<endl; 
      cout<<endl;
      cout<<"The rest of the tape is static, followed by a click."<<endl; 
      cout<<"...that might be helpful later"<<endl; 
      tapeCounter++;
    }
    else if(tapeChoice == "3")
    {
      cout<<"The tape starts..."<<endl; 
      cout<<"You hear footsteps running on a metal floor, and heavy breathing"<<endl;
      cout<<"A woman's voice cuts into the audio, she sounds upset: "<<endl;
      cout<< "--" + uName + ", if you're hearing this, it means I've utterly failed. I'm so sorry."<<endl;
      cout<<"It means that the AI has completely screwed us, and you're on your own. I tried "<<endl;
      cout<<"all I could to stop the Warden, Dave, but it didn't work. The only thing I was able"<<endl;
      cout<<"to find was written on a scrap of paper in his desk, which said: "<<endl; 
      cout<<"  th5b3st0fu5  "<<endl; 
      cout<<"all lower case, with numbers as vowels...."<<endl;
      cout<<"I hope it helps you with something. I couldn't figure out what it meant.--"<<endl; 
      cout<<endl; 
      cout<<"..."<<endl; 
      tapeCounter++;
    }

    else if(tapeChoice != "1" || "2" || "3")
    {
      cout<<endl; 
      cout<<"That is not a valid option...Let's try again"<<endl;
      cout<<endl;
    
      tapeChoice == "";
    }

    if(tapeCounter == 3)
    {
      allTapes = true;
    }
  }

  cout<<"After having listened to the tapes (well, most of them)"<<endl;
  cout<<"You feel shaken, but ready to leave the archive."<<endl; 

  return true;
}

bool terminalroom(string uName, bool aIStat, bool visitedarchiveroom, bool previouslyEnteredPassword)
{

  string tapeChoice = ""; 
  string line;
  bool aiShutDown = false; 
  int tapeCounter = 0;
  string password = "";
  bool correctPassword = false; 
  ifstream myfile ("./art5.txt");

  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }
  else 
  {
    cout << "FILE OPENING ERROR - " <<endl; 
    return 0;
  }

  if(previouslyEnteredPassword == false) //used in case this is the second time coming back to the archive room 
  {
    while(correctPassword == false) //if the player hasn't entered the correct password, they'll stay in this loop for multiple guesses 
    {
      cout<<"The computer is locked. It prompts you for a password:"<<endl;
      cout<<"(Type a password)  PASSWORD: ";
      cin>>password;

      if(password == "th5b3st0fu5") //the correct password, obtained by listening to the tape in the archive room 
      {
        correctPassword = true; 
        cout<<"PASSWORD IS CORRECT"<<endl; 
        //end the loop here, move on to the rest of the game
      }
      else
      {
        //Either the player hasn't been to the archive room and doesn't know the password, or they have visited and they forgot/didn't enter it in correctly 
        if(visitedarchiveroom == false) //if the player hasn't been to the archive room, then they don't know the password
        {
          cout<<"...You realize guessing isn't going to work..."<<endl; 
          cout<<"....Perhaps the archive room might have some secrets or something..."<<endl;
          cout<<endl; 
          cout<<"You decide to leave the terminal room to see what else you can find"<<endl; 
          return false; //and the function will return false and end, so they can figure out the password when they come pack 
        }
        if(visitedarchiveroom == true) //because the player already went to the arhcive room, remind the player they found the password earlier 
        {
          cout<<"...You remember something you heard in the archive room..."<<endl; 
          cout<<"Wasn't there some slip of paper in the Warden's desk? Maybe that will help out?"<<endl; 
          password = "";
          correctPassword = false;
        }   
      }  
    }

  }
  else if(previouslyEnteredPassword == true)
  {
    //insert code for endgame here! 
  }

  return true;
}


int errormessage() //function to display an error status if a file cannot be found 
{
  cout<<endl;
  cout<<"Something went wrong...An important file for this game could not be found and the game cannot be played"<<endl; 
  cout<<"Please make sure all art.txt files are present and in the same folder as the main file"<<endl;
  cout<<endl;
  return 0;
}

////////////////////////////////////////////////////
int main() 
{
	string playerName = startingArea();
  bool hallwayFinished = false;
  bool pissedAI = false;
	int firstChoice = room1(playerName);
  bool completeRoom = false; 
  
	if(firstChoice == 0)
	{
		errormessage();
	}

  int choice2 = room2(playerName);
  if(choice2 == 0) 
  {
    errormessage();
  }
  else if(choice2 == 1) //neutral AI
  {
    pissedAI = false; 
    cout<<"You've decided that's all you can gain out of this conversation..."<<endl; 
    cout<<"But there's still more to be explored. You go outside of the breakroom."<<endl;
    cout<<endl;
    cout<<endl;
  }
  else if(choice2 == 2)//hostile AI
  {
    pissedAI = true; //used for later to determine if you need to override the AI 
    cout<<"Knowing that you've now upset the AI, you've decided to see where else you will go..."<<endl; 
    cout<<endl;
    cout<<endl;
  }

bool bothRoomsChecked = false; 
bool visitedArchive = false;   
  while(hallwayFinished == false)
  {


    int hallwayChoice = room3();

    if(hallwayChoice == 1)
    {
      visitedArchive = archive(playerName, pissedAI);
      //leave info archive, go back to computer room 
    }
    if(hallwayChoice == 2)
    {
      //go to terminal room 
      terminalRoom(playerName, pissedAI, visitedArchive, completeRoom);
      //if you've already been to the archive room, then you have password for computer room
      //if not, tell the player to go check the archive room and return 
      cout<<"--insert code for computer room"<<endl;

    }
    else if(hallwayChoice == 0) 
    {
      errormessage();
    }


    if(bothRoomsChecked == true)
    {
      hallwayFinished = true; 
    }
  }

}

//todo:
// Figure out how the logic will work with the questions (perhaps re-work game parameters)
// Figure out how to either delay or set the text on a timer when appearing in terminal
// Create an end to the story 


//Is there a way to remove an option after it has been previously picked? 