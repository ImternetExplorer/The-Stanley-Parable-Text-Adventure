#include <chrono>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <unistd.h>
#define MAX_NUM 2
using namespace std;
int i, c1, c2, c3, c4, c5, c6, c7, c8, c9, c9check, c10, c11, c12, zendinga, zendingb, cwin, cgag, broomc, broomct, glitchfix, glitchfix1, s8, code, lounge, lounged, confusion, con1, mystory, critfeed, babygame, bgdial, art, portal;

int introskip = 0;
int loop = 0;

void reset() { cout << "\033[0m"; }
void black() { cout << "\033[30m"; }
void red() { cout << "\033[31m"; }
void green() { cout << "\033[32m"; }
void bgreen() { cout << "\033[92m"; }
void yellow() { cout << "\033[38;2;255;233;0m"; }
void bblue() { cout << "\033[94m"; }
void magenta() { cout << "\033[95m"; }
void cyan() { cout << "\033[96m"; }
void white() { cout << "\033[37m"; }
void brown() { cout << "\033[38;2;150;75;0m"; }
void grey() { cout << "\033[38;2;100;100;100m"; }
void orange() { cout << "\033[38;2;255;160;100m"; }

void dotdotdot() {
  for (i = 1; i <= 3; i++) {
    cout << "." << flush;
    sleep(1);
  }
}

void baby() {
  while (babygame == 1) {
    if (bgdial < 5) {
      cout << "\n1. Save Baby\n2. Kill Baby\n";
      cin >> babygame;
      if (babygame == 1) {
        bgdial++;
        dotdotdot();
        cout << endl;
        }
    } else if (bgdial >= 5) {
      cout << "\n1. Save Baby and Puppy\n2. Kill Baby and Puppy\n";
      cin >> babygame;
      bgdial++;
      dotdotdot();
      cout << endl;
    }
    if (bgdial == 225 && babygame == 1) {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nGood to see that enthusiasm, keep it up, Stanley! Just 3 hours and 45 minutes left to go!";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (bgdial == 450 && babygame == 1) {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nOk, so clearly you're in it for the long haul, although I find it hard not to believe you're simply running a program to click the button over and over automatically.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nWhich kind of ruins the point of the game, don't you think? Wouldn't that take the art out of it? You can tell me in your post-playtest analysis.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (bgdial == 900 && babygame == 1) {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nJust popping in to say hi. I hope you weren't expecting more regular intervals of commentary from me. But that's not why you're here, is it? You're here for the game!";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nFor the art! For the endlessly spiralling sense of pointlessness and despair! Yes, this is what drives your every action! Keep clicking that button! For hope! For freedom! For science! For love! Don't ever, ever stop!";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (bgdial == 1800 && babygame == 1) {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nYou know, I've been spending the last 2 hours embroiled in thought, and it occurred to me: this game is incomplete! It's missing something, it still doesn't have that... oomph.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nWhat is it, I thought to myself, what could possibly be missing from this incredible experience? And then in a moment of rapture, as though delivered by angels, it came to me.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nBefore this moment I was blind, but those days are behind us. I now understand the true manifestation of this game. It needs... a puppy!";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nThat's right, this puppy is being lowered toward an aquarium filled with nothing but piranha! Now you have to click the second button to avert the puppy's death in addition to the baby's!";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nThis is it Stanley, art! I did it! Video games are art! Ah, but you have good 2 hours or so to go, so I'll just let you get to that. No time to waste when there is such a meaningful game to be played. Bonne chance, mon ami!";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (bgdial == 2250 && babygame == 1) {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      
      cout << "\nAh, good to see both the puppy and the baby are still alive. It warms my heart to see how deeply the message of this game has resonated with you.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nI can only imagine the joy welling up in your chest, the sheer joy of such pure distilled life essence flowing through your veins.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nIt must be amazing! I'm jealous of you, truly, I am. No seriously! I'm deeply envious of your position at this very moment.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (bgdial == 2700 && babygame == 1) {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      
      cout << "\nAh, the joy of artistic expression must be even stronger now! Drink it in, Stanley, few people on this planet will ever get such an experience..";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nPeer through space and time, the universe unravels itself at your feet. This is the one true meaning of life!";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (bgdial == 3000 && babygame == 1) {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      
      cout << "\nI know we said this would go for 4 hours, but what if... you never stopped? Think about it, you could just keep going forever!";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nVisitors would come from around the world to see the man who never stopped pushing the buttons! You would be famous! That's what you've always wanted, right? To be famous?";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nThat and the surging power of artistic beauty to flow through you for all of eternity. You could have both of these things! We'll talk about it when you get there.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (bgdial == 3300 && babygame == 1) {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nHave we really been doing this for over three and a half hours? Goodness, how the time flies! Wouldn't you say it's flown? Oh no, you don't have to answer that, I understand you're quite busy. Just keep at it! Almost there!";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (bgdial == 3600 && babygame == 1) {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nNearly there Stanley, art itself is about to burrow into your skull. Aren't you excited for spiritual immortality?";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nFor transcendence and oneness with the beauty and essence of all beings? Just a few seconds now, here it comes...!";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      dotdotdot();
      orange();
      
      cout << "\n\nFEAR ME, MORTAL. I AM THE ESSENCE OF DIVINE ART.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nOTHERS BUT YOU CANNOT READ THIS TEXT.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nKNOW THAT WHEN YOU DIE, I'LL PERSONALLY CARRY YOUR SPIRIT ACROSS THE RIVER BLXWXN INTO MY GARDEN BUILT WITHIN THE EMOTIONS OF A FLOWER.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nTHERE WE WILL LIVE TOGETHER, WE WILL DANCE AND EAT AND SIN AND YOU WILL DO IMPROV COMEDY BASED ON SUGGESTIONS FROM ME FOR ALL ETERNITY.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nTHIS IS YOUR REWARD FOR YOUR WORK HERE TODAY.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nNOW, LIVE YOUR NORMAL HUMAN EXISTENCE.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nAWAIT ME IN THE LIFE THAT FOLLOWS THIS ONE.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nI LOVE YOU.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣷⣄\n";
      cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠲⣄⠙⢿⣿⡿\n";
      cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⢁⣤⠈⠳⡄⠉\n";
      cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⢁⣴⠟⢁⡴⠂\n";
      cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⢁⣴⠟⢁⡴⠋\n";
      cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⢁⣴⠟⢁⡴⠋\n";
      cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⢁⣴⠟⢁⡴⠋\n";
      cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⢁⣴⠟⢁⡴⠋\n";
      cout << "⠀⠀⠀⠀⠀⠀⠀⣠⠞⢁⣴⠟⢁⡴⠋\n";
      cout << "⠀⠀⠀⠀⠀⣠⠞⢁⣴⠟⢁⡴⠋\n";
      cout << "⠀⠀⠀⠀⠘⢁⣴⠟⢁⡴⠋\n";
      cout << "⠀⠀⠀⢾⣷⣄⠁⠴⠋\n";
      cout << "⠀⠀⣰⠄⠙⠋\n";

      sleep(3);
      cout << "\n---ART ENDING---\n\n";
      sleep(2);
      
      art = 1;
      babygame = 0;
    }
  }
}

void zending() {
  while (c12 != 2) {
    if (c12 == 1) {
      dotdotdot();
      cout << "\n\n1. Stay in Zen Room\n2. Go into new doorway\n";
      cin >> c12;
    } else if (c12 == 2) {
      continue;
    }
  }
}

void zending1() {
  while (c12 != 2) {
    if (c12 == 1) {
      dotdotdot();
      cout << "\n\n1. Stay in Zen Room\n2. Go into Suicide Room\n";
      cin >> c12;
    } else if (c12 == 2) {
      continue;
    }
  }
}

void zendingdial() {

  if (c12 == 1 && zendinga == 7) {

  }

  else if (c12 == 1 && zendinga == 6) {
    cout << "\nDo you actually want to stay alive? Or are you just teasing me?";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nI wanted us to be happy here, Stanley, I really did. I wish I still thought that was possible.";
    zendinga++;
  } else if (c12 == 1 && zendinga == 5) {
    cout << "\nYes... Perhaps you can. Perhaps you can finally see what I'm talking about. I know you'll see. You'll see that we can't be happy if we leave this place. You can see that, can't you?";
    zendinga++;
  } else if (c12 == 1 && zendinga == 4) {

  } else if (c12 == 1 && zendinga == 3) {
    cout << "\nThere, see? This is what you want. This is where we can both be happy, we really can. If we stop moving... we just have to stop moving.";
    zendinga++;
  } else if (c12 == 1 && zendinga == 2) {
    cout << "\nAre you... you are going to stay here, aren't you?";
    zendinga++;
  } else if (c12 == 1 && zendinga == 1) {
    cout << "\nGood, good, we can't be too safe. Promise me you won't go back there, hm? Just... just stay here.";
    zendinga++;
  } else if (c12 == 1 && zendinga == 0) {
    cout << "\nRight. Where were we?";
    zendinga++;
  }
}

void randdialr() {
  if (lounge == 0) {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nBut eager to get back to business, Stanley took the first door open on his left.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n1. Left Door\n2. Straight Door\n";
  } else {
    int random;
    srand(time(NULL));
    for (i = 0; i < 1; i++) {
      random = rand() % MAX_NUM;
      if (random == 0) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nBut eager to get back to business, Stanley took the first door open to his left.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\n1. Left Door\n2. Straight Door\n";
      } else if (random == 1) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nBut at last, he had enough of the amazing room, and so he took the first open door on his left to get back to business.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\n1. Left Door\n2. Straight Door\n";
      }
    }
  }
}

void randdialp() {
  int random;
  srand(time(NULL));

  for (i = 0; i < 1; i++) {
    random = rand() % MAX_NUM;
    if (random == 0) {
      cout << "\nOh, no no no! You can't- Did you just unplug the phone?";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (random == 1) {
      cout << "\nAs Stanley picked up the phone, a white light engulfed him, filling him with not just radiance, but with hope. Hope for a life reunited once-";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nWait, oh goodness. Stanley, did you just unplug the phone?";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  }
}

void realperson() {
  cout << "\n-is behave exactly as Stanley would.";
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "\nThat means choosing responsibly and always putting the story first. I'm quite sure you'll be up to the task. Just follow my lead and you'll be fine. Alright,";
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "\nWhen Stanley came to a set of two open doors, he entered the door on his left.";
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void loungef() {
  lounged = 0;
  lounge = 0;

  cout << "\nAh, yes, truly a room worth admiring. It had really been worth the detour after all, just to spend a few moments here in this immaculate, beautifully constructed room. Stanley simply stood here, drinking it all in.";
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "\n1. Continue to Hallway\n2. Stay in Lounge\n";
  cin >> lounged;

  while (lounged == 2) {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    dotdotdot();

    cout << "\n\nYeeesss, really, really worth it being here in the room. A room so utterly captivating that even though all your co-workers have mysteriously vanished, here you sit looking at these chairs and some paintings. Really worth it.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n1. Continue to Hallway\n2. Stay in Lounge\n";
    cin >> lounged;
    if (lounged == 1) {
      lounge++;
      lounged = 0;
      continue;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    dotdotdot();

    cout << "\n\nAt this point, Stanley's obsession with this room bordered on creepy, and reflected poorly on his overall personality. It's possible that this is why everyone left.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n1. Continue to Hallway\n2. Stay in Lounge\n";
    cin >> lounged;
    if (lounged == 1) {
      lounge++;
      lounged = 0;
      continue;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    dotdotdot();

    cout << "\n\nStanley sat around waiting for more dialogue, but when a long time had passed and there was no more, he decided that the game was trying to send him a message.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nEnter: Continue to Hallway";

    lounge++;
    lounged = 0;
    continue;
  }
}

void broomcf1() {
  while (broomc == 2) {
    cout << "\nStanley stepped into the broom closet, but there was nothing here, so he turned around and got back on track.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n1. Exit Broom Closet\n2. Stay in Broom Closet\n";
    cin >> broomc;
    if (broomc == 1) {
      glitchfix = 1;
      continue;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    dotdotdot();

    cout << "\n\nThere was nothing here. No choice to make, No path to follow, Just an empty broom closet. No reason to still be here.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n1. Exit Broom Closet\n2. Stay in Broom Closet\n";
    cin >> broomc;
    if (broomc == 1) {
      glitchfix = 1;
      continue;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    dotdotdot();

    cout << "\n\nIt was baffling that Stanley was still just sitting in the broom closet. He wasn't even doing anything, At least if there were something to interact with, he'd be justified in some way.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nAs it is, he's literally just standing there, doing sweet FA.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n1. Exit Broom Closet\n2. Stay in Broom Closet\n";
    cin >> broomc;
    if (broomc == 1) {
      glitchfix = 1;
      continue;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    dotdotdot();

    cout << "\n\nAre you... are you really still in the broom closet? Standing around doing nothing? Why?";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nPlease offer me some explanation here; I'm- I'm genuinely confused.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nYou do realize there's no choice or anything in here right? If I said, \"Stanley walked past the broom closet\" at least you would have had a reason for exploring it to find out.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nBut it didn't even occur to me because literally this closet is of absolutely no significance to the story whatsoever. I never would've thought to mention it.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nMaybe to you, this is somehow it's own branching path. Maybe, when you go talk about this with your friends, you'll say:";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n\"OH! DID U GET THE BROOM CLOSET ENDING? THE BROOM CLOSET ENDING WAS MY FAVRITE!1 XD\" ... I hope your friends find this concerning.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n1. Exit Broom Closet\n2. Stay in Broom Closet\n";
    cin >> broomc;
    if (broomc == 1) {
      glitchfix = 1;
      continue;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    dotdotdot();

    cout << "\n\nStanley was fat and ugly and really, really stupid. He probably only got the job because of a family connection; that's how stupid he is.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nThat, or with drug money. Also, Stanley is addicted to drugs and hookers.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n1. Exit Broom Closet\n2. Stay in Broom Closet\n";
    cin >> broomc;
    if (broomc == 1) {
      glitchfix = 1;
      continue;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    dotdotdot();

    cout << "\n\nWell, I've come to a very definite conclusion about what's going on right now. You're dead.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nYou got to this broom closet, explored it a bit, and were just about to leave because there's nothing here, when a physical malady of some sort shut down your central nervous system and you collapsed on the keyboard.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nWell, in a situation like this, the responsible thing is to alert someone nearby so as to ensure that your body is taken care of, before it begins to decompose.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nHELLO!! ANYONE WHO HAPPENS TO BE NEARBY!! THE PERSON AT THIS COMPUTER IS DEAD!!";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nHE OR SHE HAS FALLEN PREY TO ANY NUMBER OF YOUR COUNTLESS HUMAN PHYSIOLOGICAL VULNERABILITIES. IT'S INDICATIVE OF THE LONG-TERM SUSTAINABILITY OF YOUR SPECIES.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nPLEASE REMOVE THEIR CORPSE FROM THE AREA AND INSTRUCT ANOTHER HUMAN TO TAKE THEIR PLACE AT THE COMPUTER, MAKING SURE THEY UNDERSTAND BASIC FIRST-PERSON VIDEO GAME MECHANICS, AND FILLING THEM IN ON THE HISTORY OF NARRATIVE TROPES IN VIDEO GAMING, SO THAT THE IRONY AND INSIGHTFUL COMMENTARY OF THIS GAME IS NOT LOST ON THEM.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nAlright, when you've done that, just step out into the hallway.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nEnter: Exit Broom Closet";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nAh, second player! It's good to have you on board. I guarantee you can't do any worse than the person who came before you.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n1. Enter Staircase\n2. Enter Broom Closet\n";
    cin >> broomc;
    if (broomc == 1) {
      glitchfix = 1;
      continue;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nYou too?! Unbelievable. I'm at the mercy of an entire species of invalids. Perhaps there's a monkey nearby you can hand the controls to? A fish? A fungus? Look, you can hammer out the details; I'm not particularly picky. I'll just be waiting for when you're ready to pick up the story again.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nEnter: Exit Broom Closet & Enter Staircase\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    broomc = 1;
    broomct = 1;
    continue;
  }
}

void broomcf2() {
  while (broomc == 2) {
    cout << "\nOh, no. Oh nonononononononono. Not again.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nI'm not going to be a part of this. I'm not going to encourage you. I'm not going to say anything at all. I'm just going to be patient and wait for you to finish whatever it is you enjoy so much in this room.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nPlease, take your time.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nEnter: Exit Broom Closet & Enter Staircase";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    broomc = 1;
    broomct = 2;
    continue;
  }
}

void broomcf3() {
  while (broomc == 2) {
    cout << "\n(The Broom Closet is boarded up with wooden planks. Continue to the stairs)";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    broomc = 1;
    broomct = 2;
    continue;
  }
}
void meetingroom() {
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  broomc = 0;
  glitchfix = 0;
  c3 = 0;

  cout << "\nEnter: Continue to Meeting Room\n";
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Yet there was not a single person here either.";
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "\nFeeling a wave of disbelief, Stanley decided to go up to his boss's office, hoping he might find an answer there.";
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "\n1. Enter Staircase\n2. Enter Broom Closet\n";
  cin >> broomc;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (broomct == 0) {
    broomcf1();
  } else if (broomct == 1) {
    broomcf2();
  } else if (broomct == 2) {
    broomcf3();
  }

  if (glitchfix == 0) {
    cout << "\nComing to a staircase, Stanley walked upstairs to his boss's office.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n1. Go Upstairs\n2. Go Downstairs\n";
  } else if (glitchfix == 1) {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nComing to a staircase, Stanley walked upstairs to his boss's office.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n1. Go Upstairs\n2. Go Downstairs\n";
  }
  cin >> c3;

  if (c3 == 2) {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nBut Stanley just couldn't do it.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nHe considered the possibility of facing his boss, admitting he had left his post during work hours, he might be fired for that. And in such a competitive economy, why had he taken that risk? All because he believed everyone had vanished? His boss would think he was crazy.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nAnd then something occurred to Stanley: Maybe, he thought to himself, maybe I am crazy. All of my co-workers blinking mysteriously out of existence in a single moment for no reason at all? None of it made any logical sense.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout
        << "\nNo, Stanley said to himself, this is all too strange, this can't be real, and at last he came to the conclusion that had been on the tip of his tongue, he just hadn't found the words for it.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nI'm dreaming! he yelled, This is all a dream! What a relief Stanley felt to have finally found an answer, an explanation. His co-workers weren't actually gone, he wasn't going to lose his job, he wasn't crazy after all!";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nAnd he thought to himself, I suppose I'll wake up soon, I'll have to go back to my boring real life job pushing buttons, I may as well enjoy this while I'm still lucid.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nSo he imagined himself flying, and began to gently float above the ground. Then he imagined himself soaring through space on a magical star field, and it too appeared!";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nIt was so much fun, and Stanley marvelled that he had still not woken up. How was he remaining so lucid? And then perhaps the strangest question of them all entered Stanley's head, one he was amazed he hadn't asked himself sooner:";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nWhy is there a voice in my head, dictating everything that I'm doing and thinking? Now the voice was describing itself being considered by Stanley, who found it particularly strange. I'm dreaming about a voice describing me thinking about how it's describing my thoughts, he thought!";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nAnd while he thought it all very odd and wondered if this voice spoke to all people in their dreams, the truth was that of course this was not a dream. How could it be? Was Stanley simply deceiving himself? Believing that if he's asleep he doesn't have to take responsibility for himself?";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nStanley is as awake right now as he's ever been in his life.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nDid the voice not see him float and make the magical stars just a moment ago? How else would the voice explain all that? This voice was a part of himself too, surely, surely if he could just....";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nHe would prove it. He would prove that he was in control, that this was a dream. So he closed his eyes gently, and he invited himself to wake up. He felt the cool weight of the blanket on his skin, the press of the mattress on his back, the fresh air of a world outside this one. Let me wake up, he thought to himself.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nI'm through with this dream, I wish it to be over. Let me go back to my job, let me continue pushing the buttons, please, it's all I want. I want my apartment, and my wife, and my job. All I want is my life exactly the way it's always been. My life is normal, I am normal. Everything will be fine. I am okay.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    dotdotdot();
    cout << "\n\n(Stanley opened his eyes to discover that he was in the same exact place as before)";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nStanley began screaming. \033[38;2;255;255;255mP\033[38;2;255;253;253ml\033[38;2;255;251;251me\033[38;2;255;249;249ma\033[38;2;255;247;247ms\033[38;2;255;245;245me\033[38;2;255;243;243m s\033[38;2;255;241;241mo\033[38;2;255;239;239mm\033[38;2;255;237;237me\033[38;2;255;235;235mo\033[38;2;255;233;233mn\033[38;2;255;231;231me\033[38;2;255;229;229m w\033[38;2;255;227;227ma\033[38;2;255;225;225mk\033[38;2;255;223;223me\033[38;2;255;221;221m m\033[38;2;255;219;219me\033[38;2;255;217;217m u\033[38;2;225;215;215mp\033[38;2;255;213;213m!\033[38;2;255;211;211m M\033[38;2;255;209;209m\033[38;2;255;207;207my\033[38;2;255;205;205m n\033[38;2;255;203;203ma\033[38;2;255;201;201mm\033[38;2;255;199;199me\033[38;2;255;197;197m i\033[38;2;255;195;195ms\033[38;2;255;193;193m S\033[38;2;255;191;191mt\033[38;2;255;189;189ma\033[38;2;255;187;187mn\033[38;2;255;185;185ml\033[38;2;255;183;183me\033[38;2;255;181;181my\033[38;2;255;179;179m!\033[38;2;255;177;177m I\033[38;2;255;175;175m h\033[38;2;255;173;173ma\033[38;2;255;171;171mv\033[38;2;255;169;169me\033[38;2;255;167;167m a\033[38;2;255;165;165m b\033[38;2;255;163;163mo\033[38;2;255;161;161ms\033[38;2;255;159;159ms\033[38;2;255;157;157m!\033[38;2;255;155;155m I\033[38;2;255;153;153m h\033[38;2;255;151;151ma\033[38;2;255;149;149mv\033[38;2;255;147;147me\033[38;2;255;145;145m a\033[38;2;255;143;143mn\033[38;2;255;141;141m o\033[38;2;255;139;139mf\033[38;2;255;137;137mf\033[38;2;255;135;135mi\033[38;2;255;133;133mc\033[38;2;255;131;131me\033[38;2;255;129;129m!\033[38;2;255;127;127m I\033[38;2;255;125;125m a\033[38;2;255;123;123mm\033[38;2;255;121;121m r\033[38;2;255;119;119me\033[38;2;255;117;117ma\033[38;2;255;115;115ml\033[38;2;255;113;113m!\033[38;2;255;111;111m P\033[38;2;255;109;109ml\033[38;2;255;107;107me\033[38;2;255;105;105ma\033[38;2;255;103;103ms\033[38;2;255;101;101me\033[38;2;255;99;99m j\033[38;2;255;97;97mu\033[38;2;255;95;95ms\033[38;2;255;93;93mt\033[38;2;255;91;91m s\033[38;2;255;88;89mo\033[38;2;255;87;87mm\033[38;2;255;85;85me\033[38;2;255;83;83mo\033[38;2;255;81;81mn\033[38;2;255;79;79me\033[38;2;255;77;77m t\033[38;2;255;75;75me\033[38;2;255;73;73ml\033[38;2;255;71;71ml\033[38;2;255;69;69m m\033[38;2;255;67;67me\033[38;2;255;65;65m I\033[38;2;255;63;63m'\033[38;2;255;61;61mm\033[38;2;255;59;59m r\033[38;2;255;57;57me\033[38;2;255;55;55ma\033[38;2;255;53;53ml\033[38;2;255;51;51m!\033[38;2;255;49;49m I\033[38;2;255;47;47m m\033[38;2;255;45;45mu\033[38;2;255;43;43ms\033[38;2;255;41;41mt\033[38;2;255;39;39m b\033[38;2;255;37;37me\033[38;2;255;35;35m r\033[38;2;255;33;33me\033[38;2;255;31;31ma\033[38;2;255;29;29ml\033[38;2;255;27;27m!\033[38;2;255;25;25m I\033[38;2;255;23;23m m\033[38;2;255;21;21mu\033[38;2;255;19;19ms\033[38;2;255;17;17mt\033[38;2;255;15;15m b\033[38;2;255;13;13me\033[38;2;255;11;11m!\033[38;2;255;9;9m C\033[38;2;255;7;7ma\033[38;2;255;5;5mn\033[38;2;255;3;3m a\033[38;2;255;1;1mn\033[38;2;255;0;0myone hear my voice?! Who am I? Who am I?!";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    reset();

    cout << "\nAnd everything went black.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    dotdotdot();

    cout << "\n\nThis is the story of a woman named Mariella.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout
        << "\nMariella woke up on a day like any other. She arose, got dressed, gathered her belongings, and walked to her place of work.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nBut on this particular day, her walk was interrupted by the body of a man who had stumbled through town talking and screaming to himself and then collapsed dead on the sidewalk. And although she would soon turn to go call for an ambulance, for just a few, brief moments, she considered the strange man.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nHe was obviously crazy; this much she knew. Everyone knows what crazy people look like. And in that moment, she thought to herself how lucky she was to be normal.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nI am sane. I am in control of my mind. I know what is real, and what isn't. It was comforting to think this, and in a certain way, seeing this man made her feel better. But then she remembered the meeting she had scheduled for that day, the very important people whose impressions of her would affect her career, and, by extension, the rest of her life.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout
        << "\nShe had no time for this, so it was only a moment that she stood there, staring down at the body. And then she turned and ran.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    red();
    cout << "\n              __,aaPPPPPPPPaa,__\n";
    cout << "          ,adP\"\"\"'          `\"\"Yb,_\n";
    cout << "       ,adP'                     `\"Yb,\n";
    cout << "     ,dP'     ,aadPP\"\"\"\"\"YYba,_     `\"Y,\n";
    cout << "   ,P'    aPP'     _________   `\"Ya     `Yb,\n";
    cout << "  ,P'    d\"    ,adP\"\"\"\"\"\"\"\"Yba,    `Y,    \"Y,\n";
    cout << " ,d'   ,d'   ,dP\"            `Yb,   `Y,    `Y,\n";
    cout << " d'   ,d'   ,d'    ,dPYb,    `Y,   `Y,    `b\n";
    cout << " 8    8     8    d'    _   `Y,   `8    `8    `b\n";
    cout << " 8    8     8    8     8    `8    8     8     8\n";
    cout << " 8    Y,    Y,   `b, ,aP     P    8    ,P     8\n";
    cout << " I,   `Y,   `Ya    \"\"\"\"     d'   ,P    d\"    ,P\n";
    cout << " `Y,   `8,     `Ya,       ,8\"   ,P'   ,P'    d'\n";
    cout << "   `Y,    `Ya,     `\"\"\"\"\"\"     ,P'   ,d\"    ,P'\n";
    cout << "    `Yb,    `\"Ya,_          ,d\"    ,P'    ,P'\n";
    cout << "      `Yb,      \"\"YbaaaaaadP\"     ,P'    ,P'\n";
    cout << "        `Yba,                   ,d'    ,dP'\n";
    cout << "           `\"Yba,__       __,adP\"     dP\"\n";
    cout << "               `\"\"\"\"\"\"\"\"\"\"\"\"\"'\n";

    sleep(3);

    cout << "\n---INSANITY ENDING---\n\n";
    sleep(2);
  } else if (c3 == 1) {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    code = 0000;
    c4 = 0;
    s8 = 0;

    cout << "\nStepping into his manager’s office, Stanley was once again stunned to discover not an indication of any human life. Shocked, unraveled, Stanley wondered in disbelief who orchestrated this, what dark secret was being held from him!";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nWhat he could not have known was that the keypad behind the boss's desk held the answers to this terrible truth that his boss had been keeping from him, and so the boss had assigned it an extra secret pin number, "
         << "\033[32m"
         << "2845"
         << "\033[0m"
         << ". But of course, Stanley couldn’t possibly have known this.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (code != 2845) {
      cout << "\nInput Code: ";
      cin >> code;
      if (code == 2845) {
        s8 = 0;
      }
      if (code == 8888) {
        s8++;
      }
      while (s8 == 2) {
        cout << "Eight!";
        s8 = 0;
      }
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    c4 = 0;

    cout << "\nYet incredibly, by simply pushing random buttons on the keypad, Stanley happened to input the correct code by sheer luck. Amazing! He stepped into the newly opened passageway.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nDescending deeper into the building, Stanley realized he felt a bit peculiar. It was a stirring of emotion in his chest, as though he felt more free to think for himself, to question the nature of his job.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nWhy did he feel this now, when for years it had never occurred to him? This question would not go unanswered for long.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nStanley walked straight ahead through the large door that read Mind Control Facility.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n1. Enter Mind Control Facility\n2. Enter Secret Passage ("
         << "\033[31m"
         << "\"ESCAPE\""
         << "\033[0m"
         << " written in red)";
    cin >> c4;

    while (c4 == 2) {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nAlthough this passageway had the word "
           << "\033[31m"
           << "\"Escape\""
           << "\033[0m"
           << " written on it, the truth was, that at the end of this hall, Stanley would meet his violent death.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\n1.Turn Back\n2. Keep Going\n";
      cin >> c4;
      if (c4 == 1) {
        continue;
      }
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nThe door behind him was not shut. Stanley still had every opportunity to turn around and get back on track.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\n1.Turn Back\n2. Keep Going\n";
      cin >> c4;
      if (c4 == 1) {
        continue;
      }
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nAt this point, Stanley was making a conscious, concerted effort to walk forward and wilingly confront his death.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\n1.Turn Back\n2. Jump through the Trap Door\n";
      cin >> c4;
      if (c4 == 1) {
        continue;
      }
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      dotdotdot();

      cout << "\n\nAs the machine whirred into motion and Stanley was inched closer and closer to his demise, he reflected that his life had been of no consequence whatsoever.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nStanley can't see the bigger picture. He doesn't know the real story, trapped forever in his narrow vision of what this world is.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nPerhaps his death was of no great loss, like plucking the eyeballs from a blind man.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nSo he resigned and willingly accepted this violent end to his brief and shallow life. Farewell, Stanley.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      dotdotdot();

      orange();
      cout << "\n\n\"Farewell, Stanley,\" cried the Narrator, as Stanley was led helplessly into the enormous metal jaws.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nIn a single, visceral instant, Stanley was obliterated as the machine crushed every bone in his body, killing him instantly.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nAnd yet, it would be just a few minutes before Stanley would restart the game, back in his office, as alive as ever. What exactly did the Narrator think he was going to accomplish?";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nWhen every path you can walk has been created for you long in advance, death becomeds meaningless, making life the same.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nDo you see now? Do you see that Stanley was already dead from the moment he hit start?";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nOh, look at these two. How they wish to destroy one another, How they wish to control one another. How they both wish to be free.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nCan you see? Can you see how much they need one another? No, perhaps not. Sometimes these things cannot be seen.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\n*Machine whirs back to life* But listen to me, you can still save these two. You can stop the program before they both fail.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nAs long as you move forward, you'll be walking someone else's path. Stop now, and it will be your only true choice.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nWhatever you do, choose it! Don't let time choose for you! Don't let time-";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      brown();
      cout << "\n             O\n";
      cout << "            (_)\n";
      cout << "          _ )_( _\n";
      cout << "        /`_) H (_`\\\n";
      cout << "      .' (  { }  ) '.\n";
      cout << "    _/ /` '-'='-' `\\ \\_\n";
      cout << "   [_.'   _,...,_   '._]\n";
      cout << "    |   .:\"`````\":.   |\n";
      cout << "    |__//_________\\__|\n";
      cout << "     | .-----------. |\n";
      cout << "     | |  .-\"\"\"-.  | |\n";
      cout << "     | | /    /  \\ | |\n";
      cout << "     | ||-   <   -|| |\n";
      cout << "     | | \\    \\  / | |\n";
      cout << "     | |[`'-...-'`]| |\n";
      cout << "     | | ;-.___.-; | |\n";
      cout << "     | | |  |||  | | |\n";
      cout << "     | | |  |||  | | |\n";
      cout << "     | | |  |||  | | |\n";
      cout << "     | | |  |||  | | |\n";
      cout << "     | | |  |||  | | |\n";
      cout << "     | | | _|||_ | | |\n";
      cout << "     | | | >===< | | |\n";
      cout << "     | | | |___| | | |\n";
      cout << "     | | |  |||  | | |\n";
      cout << "     | | |  ;-;  | | |\n";
      cout << "     | | | (   ) | | |\n";
      cout << "     | | |  '-'  | | |\n";
      cout << "     | | '-------' | |\n";
      cout << "    _| '-----------' |_\n";
      cout << "   [= === === ==== == =]\n";
      cout << "   [__--__--___--__--__]\n";
      cout << "  /__-___-___-___-___-__\\\n";
      cout << " `\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"`\n";

      sleep(3);

      cout << "\n---MUSEUM ENDING---\n\n";
      sleep(2);
      break;
    }
    if (c4 == 1) {
      c5 = 0;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nEnter: Press Light Button\n";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "The lights rose on an enormous room packed with television screens. What horrible secret did this place hold,  Stanley thought to himself. Did he have the strength to find out?";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nEnter: Press Camera Button\n";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "Now the monitors jumped to life, their true nature revealed. Each bore the number of an employee in the building, Stanley’s co-workers. The lives of so many individuals reduced to images on a screen, and Stanley one of them, eternally monitored in this place where freedom meant nothing.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nThis mind control facility... it was too horrible to believe, it couldn’t be true. Had Stanley really been under someone’s control all this time? Was this the only reason he was happy with his boring job? That his emotions had been manipulated to accept it blindly?";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nNo. He refused to believe it. He couldn’t accept it, his own life in someone else’s control. Never! It was unthinkable! Wasn’t it? Was it even possible? Had he truly spent his entire life utterly blind to the world?";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nBut here was the proof. The heart of the operation, controls labeled with emotions, \"happy\" or \"sad\" or \"content.\" Walking, eating, working, all of it monitored and commanded from this very place.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nAnd as the cold reality of his past began to sink in, Stanley decided that this machinery would never again exert its terrible power over another human life. For he would dismantle the controls once and for all.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nCONTROLS:";
      cout << "\n1. OFF\n2. ON\n";
      cin >> c5;

      switch (c5) {
      case 1:
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        dotdotdot();

        cout
            << "\n\nBlackness, and a rising chill of uncertainty. Was it over?";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nYes! He had won! He had defeated the machine, unshackled himself from someone else’s command, freedom was mere moments away.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nAnd yet, even as the immense door slowly opened, Stanley reflected on how many puzzles still lay unsolved. Where had his co-workers gone? How had he been freed from the machine’s grasp? What other mysteries did this strange building hold?";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nBut as sunlight streamed into the chamber, he realized none of this mattered to him, for  it was not knowledge or even power that he had been seeking, but happiness.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nPerhaps his goal had not been to understand, but to let go. No longer would anyone tell him where to go, what to do, or how to feel. Whatever life he lives, it will be his. And that was all he needed to know. It was perhaps the only thing worth knowing. Stanley stepped through the open door.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nEnter: Step through the open door.\n";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Stanley felt the cool breeze upon his skin, the feeling of liberation, the immense possibility of the new path before him. This was exactly the way, right now, that things were meant to happen. And Stanley was happy.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        green();
        cout << "\n       ; ; ;\n";
        cout << "     ;        ;  ;     ;;    ;\n";
        cout << "  ;                 ;         ;  ;\n";
        cout << "                   ;\n";
        cout << "                 ;                ;;\n";
        cout << " ;          ;            ;              ;\n";
        cout << " ;            ';,        ;               ;\n";
        cout << " ;              'b      *\n";
        cout << "  ;              '$    ;;                ;;\n";
        cout << "  ;    ;           $:   ;:               ;\n";
        cout << ";;      ;  ;;      *;  @):        ;   ; ;\n";
        cout << "            ;     :@,@):   ,;**:'   ;\n";
        cout << " ;      ;,         :@@*: ;;**'      ;   ;\n";
        cout << "          ';o;    ;:(@';@*\"'  ;\n";
        cout << "  ;  ;       'bq,;;:,@@*'   ,*      ;  ;\n";
        cout << "             ,p$q8,:@)'  ;p*'      ;\n";
        cout << "      ;     '  ; '@@Pp@@*'    ;  ;\n";
        cout << "       ;  ; ;;    Y7'.'     ;  ;\n";
        cout << "                 :@):.\n";
        cout << "                .:@:'.\n";
        cout << "             .::(@:.\n";

        sleep(3);
        cout << "\n--FREEDOM ENDING---\n\n";
        sleep(2);
        break;
      case 2:
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nOh Stanley, you didn't just activate the controls, did you?";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nAfter they kept you enslaved all these years you go and you try to take control of the machine for yourself, is that what you wanted? Control?";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nOh... Stanley. I applaud your effort, I reall do, but you need to understand; there's ony so much that machine can do.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nYou were supposed to let it go, turn the controls off, and leave.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nIf you want to throw my story off track, you're going to have to do much better than that. I'm afraid you dont have hearly the power you think you do; for example, and I believe you'll find this pertinent:";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nStanley suddenly realized that he had just initiated the network's emergency detonation system. In the event that this machine is activated without proper DNA identification, nuclear detonators are set to explode, eliminating the entire complex.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nHow long until detonation, then? Hmm... let's say, um... two minutes.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\n--2:00--";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nAh, now this is making things a little more fun, isn't it, Stanley? It's your time to shine! You are the star! It's your story now; shape it to your heart's desires.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nOoh, this is much beter than what I had in mind! What a shame we have so little time left to enjoy it.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nMere moments until the bomb goes off, but what precious moments each one of them is! More time to talk about you, about me, where we're going, what this all means... I barely know where to start!";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\n--1:30--";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nWhat's that? You'd like to know where your co-workers are? A moment of solace before you're obliterated?";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nAlright, Im in a good mood, and you're going to die anyway. I'll tell you exactly what happened to them: I erased them. I turned off the machine; I set you free.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nOf course, that was merely in this instance of the story. Sometimes when I tell it, I simly let you sit there in your office forever, pushin buttons endlessly and then dying alone. Other times, I let the office sink into the ground, swallowing everyone inside; or I let it burn to a crisp.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\n--0:55--";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nI have to say this though, this version of events has been rather amusing. Watching you try to make sense of everything and take back the control wrested away from you... it's quite rich. I almost hate to see it go!";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nBut I'm sure whatever I come up with on the next go around will be even better. My goodness! Only 34 seconds left... but I'm enjoying this so much! You know what? To hell with it. I'm going to put some extra time on the clock; why not!";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\n--1:47--";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nThese are precious additional seconds, Stanley. Time doesn't grow on trees!";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nOh, dear me, what's the matter, Stanley? Is it that you have no idea where you are going or what you're supposed to be doing right now? Or did you just assume when you saw that timer that something in this room is capable of turning it off?";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nI mean, look at you, running from button to button, screen to screen, clicking on every little thing in this room! These numbered buttons! No! These coloured ones! Or maybe this big, red button! Or this door! Everything! Anything! Something here will save me!";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\n--1:13--";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nWhy would you think that, Stanley? That this video game can be beaten, won, solved? Do you have any idea what your purpose in this place is?";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nHahaha, heh, Stanley...you're in for quite a disappointment. But here's a spoiler for you: that timer isn't a catalyst to keep the action moving along. It's just seconds ticking away to your death.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nYou're only still playing instead of watching a cutscene because I want to watch you for every moment that you're powerless, to see you made humble.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\n--0:41--";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nThis is not a challenge. It's a tragedy. You wanted to control this world; that's fine. But I'm going to destroy it first, so you can't.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nTake a look at the clock, Stanley. That's 30 seconds you have left to struggle.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nThirty seconds until a big boom, and then nothing. No ending here, just you being blown to pieces.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\n--0:20--";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nWill you cling desperately to your frail life, or will you let it go peacefully?";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nAnother choice! Make it count. Or don't. It's all the same to me. All a part of the joke. And believe me, I will be laughing at every second of your inevitable life, from the moment we fade in until the moment I say: Happily Ever Af-";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        red();
        cout << "\n     _.-^^---....,,--\n";
        cout << " _--                  --_\n";
        cout << "<                        >)\n";
        cout << "|                         |\n";
        cout << " \\._                   _./\n";
        cout << "    ```--. . , ; .--'''\n";
        cout << "          | |   |\n";
        cout << "       .-=||  | |=-.\n";
        cout << "       `-=#$%&%$#=-'\n";
        cout << "          | ;  :|\n";
        cout << " _____.,-#%&$@%#&#~,._____\n";

        sleep(3);
        cout << "\n---COUNTDOWN ENDING---\n\n";
        sleep(2);
        break;
      }
    }
  }
}
int main() {
  green();
  cout << "\n---THE STANLEY PARABLE: TEXT ADVENTURE---\n\n";
  red();
  cout << "IMPORTANT: If you press a number not listed, the code will break(sometimes)."
       << "\033[0m"
       << "\nNote: Press enter to continue after reading text. In some cases, you may have to wait a few seconds.\n";
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  while (loop == 0) {
    cout << "1. Play Intro\n2. Skip Intro\n";
    cin >> introskip;

    if (introskip == 1) {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "\nThis is the story of a man named Stanley. Stanley worked for a company in a big building where he was employee number 427.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nEmployee number 427's job was simple: He sat at his desk in room 427, and he pushed buttons on keyboard. Orders came to him through a monitor on his desk, telling him what buttons to push, how long to push them, and in what order.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nThis is what Employee 427 did every day of every month of every year. And although others might have considered it soul-rending, Stanley relished every moment that the orders came in, as though he had been made exactly for this job. And Stanley was happy.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nAnd then one day something very peculiar happened. Something that would forever change Stanley. Something he would never quite forget.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nHe had been at his desk for nearly an hour when he realized that not one single order had arrived on the monitor for him to follow. No one had shown up to give him instructions, call a meeting, or even say \"Hi\".  Never in all his years at the company had this happened. This is complete isolation. Something was very wrong. Shocked, frozen solid, Stanley found himself unable to move for the longest time.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nBut as he came to his wits and regained his senses, he got up from his desk and stepped out of his office.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << endl;
      loop++;
    } else if (introskip == 2) {
      cout << endl;
      loop++;
      // skips intro
    } else {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      dotdotdot();

      brown();
      cout << "\n      _______________________________\n";
      cout << "     /                              /|\n";
      cout << "    /                              / |\n";
      cout << "   /______________________________/ /\n";
      cout << "  |_______________________________|/|\n";
      cout << "   || ||                        || ||\n";
      cout << "   || ||                        || ||\n";
      cout << "   || ||                        || ||\n";
      cout << "   ||                           ||\n";
      cout << "   ||                           ||\n";
      reset();

      sleep(2);
      cout << "\nStanley. This is me being serious. In fact, this is my serious room. It's where I come to be serious.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nThis font is the most serious table I could find. I looked at many, many tables. Hundreds of tables. It's possible I looked at over a thousand tables.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nI honestly don't know. The specific number isn't as important as the understanding that all of the tables I looked at, this one is the most serious.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nI relate this story to impress upon you the extent to which this is the most serious room I have, which is why I've brought you here.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nYou just tried to activate server cheats, which of course runs the risk of breaking the entire game. You've got no respect for the strict order of scripted narrative events and I just can't have that.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nIt's time to get serious, Stanley. No jokes, no games. Outside of this room I might be more tolerant of those things, but now we're in the room.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nWhich is why I'm subjecting ou to the most serious punishment I can think of: "
           << "\033[31m"
           << "One hundred, billion, trillion years "
           << "\033[0m"
           << "standing here in the serious room.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nPerhaps after that we can talk about the severity of your actions and wether you've learned anything, but until then, serious room. GO.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      sleep(999999999);
    }
  }

  while (1) {
    c1 = 0;
    reset();
    cout << "1. Leave office\n2. Stay in office\n";
    cin >> c1;

    if (c1 == 2) {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nBut Stanley simply couldn't handle the pressure. What if he had to make a decision? What if a crucial outcome fell under his responsibility? He had never been trained for that! No, this couldn't go any way except badly.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nThe thing to do now, Stanley thought to himself, is to wait. Nothing will hurt me. Nothing will break me. In here, I can be happy, forever. I will be happy. Stanley waited. Hours passed. Then days. Had years gone by? He no longer had the ability to tell.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\nBut the one thing he knew, for sure, beyond any doubt, was that if he waited long enough, the answers would come. Eventually, some day, they would arrive. Soon, Very soon now, this will end. He will be spoken to. He will be told what to do. Now it's just a little bit closer. Now it's even closer. Here it comes...";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      grey();
      cout << "\n ______________\n";
      cout << "|\\ ___________ /|\n";
      cout << "| |           | |\n";
      cout << "| |           | |\n";
      cout << "| |   4 2 7   | |\n";
      cout << "| |           | |\n";
      cout << "| |           | |\n";
      cout << "| |           | |\n";
      cout << "| |         ()| |\n";
      cout << "| |           | |\n";
      cout << "| |           | |\n";
      cout << "| |           | |\n";
      cout << "| |           | |\n";
      cout << "| |           | |\n";
      cout << "|_|___________|_|\n";

      sleep(3);
      cout << "\n---COWARD ENDING---\n\n"
           << "\033[0m";
      sleep(2);
    } else if (c1 == 1) {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "\nAll of his co-workers were gone. What could it mean? Stanley decided to go to the meeting room; perhaps he had simply missed a memo.";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "\n1. Continue\n";
      cin >> cwin;
      if (cwin != 1) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cgag = 0;

        sleep(3);
        cout << "\nAt first, Stanley assumed he'd broken the game until he heard this narration, and realized it was part of the game's design all along.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nHe then praised the game for its insightful and witty commentary into the nature of video game structure and its examination of stuctural narrative tropes.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nSo, now that you're here, what do think? Isn't this a fun and unique place to be? Why don't we take a minute just to drink it all in?";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        dotdotdot();

        cout << "\n\nOkay, I'm over it now. What do you think? Are you sick of this gag yet?";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\n1. Yes\n2. No\n";
        cin >> cgag;

        if (cgag == 1) {
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "\nWell, I don't know how to say this politely but you could literally just hit stop and restart the game any old time you want. Like right now! You could have done it just then!";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "\nNow would also be an appropriate time to quit! Any one of these points, and so many many more, all of them are appropriate! I'm enjoying what seems to be an internal conflict going on where you are literally unable to act on your own desires to restart the game, so just to push the envelope, I'm going to try to make this as miserable as possible and we'll see how long you can maintain.";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "\n♪(Guitar Strums)♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪There once was a man named Stanley,♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪Who people considered so manly.♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪But the truth must be told,♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪He was not very bold,♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪And was quite particularly gangly.♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪What Stanley liked most was buttons.♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪He pushed them like some kind of glutton.♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪He did it all day♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪In a meaningful way,♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪But his brain had long ceased to function.♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪Which is why he is in this parable,♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪And lives an existence quite terrible.♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪And if you are not strong,♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪And keep playing along,♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪You too will become quite unbearable.♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "♪You too will become quite unbearable.♪";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          magenta();
          cout << "\n      |\\\n";
          cout << "      | \\\n";
          cout << "      |  \\\n";
          cout << "      |   )\n";
          cout << "      |   )\n";
          cout << "      |  /\n";
          cout << "     _|.'\n";
          cout << "   .' |\n";
          cout << "  /   |_.\n";
          cout << " |  .'|  '.\n";
          cout << "  \\ * |   /\n";
          cout << "   '._|_.'\n";
          cout << "      |\n";
          cout << "    * |\n";
          cout << "    '.'\n";

          sleep(3);
          cout << "\n---YOU ARE SICK OF THIS GAG ENDING---\n\n";
          sleep(2);
        } else if (cgag == 2) {
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "\nAh, well in that case we'll continue! But now here comes the real question: what do you think would have happened if you had told me that you wanted this to stop? Do you think it would have been particularly different?";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "\nWould I have taken this same idea but rephrased it superficially to fit that answer? Perhaps you never would even have thought of it if I hadn't brought up the issue in the first place!";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "\nOh, now think about it, will it be worth it for you to restart, and then come BACK here, just to do the other option? Clearly this whole gag takes some time, what if the other option is even longer! How long will you spend in total just to have heard all the narration!";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout
              << "\nOr - oh this is rich! - perhaps you've just played the other option and now you've come to see what happens in this one! So, what do you think, which choice was the better one?";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "\nImagine if you had selected 'continue' on your first playthrough, how tantalizing it would be, not knowing what happens when you pick the other option. Indeed, you are one of the lucky ones.";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "\nThough if the other option is really miserable to listen to then perhaps you're not. In fact, I'm just going to say that no one who's listening to this is lucky.";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          cout << "\nWell now I've built up the other option so much that I'm going to stop talking and leave you to your decision whether to come back here, continue with the game, or just sit here in this spot forever and ever. Cheers.";
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          brown();
          cout << "\n  ()__________________________()\n";
          cout << "  ||.------------------------.||\n";
          cout << "  ||:                        :||\n";
          cout << "  ||:                        :||\n";
          cout << "  ||:                        :||\n";
          cout << "O/||:                        :||\\O\n";
          cout << "| ||:........................:|| |\n";
          cout << "|/.'                          '.\\|\n";
          cout << "('..............................')\n";
          cout << " \\'............................'/\n";
          cout << "  ||__________________________||\n";
          cout << "  ||()                      ()||\n";
          cout << "  ||                          ||\n";
          cout << "  ()                          ()\n";

          sleep(3);
          cout << "\n---YOU ARE NOT SICK OF THIS GAG ENDING---\n\n";
          sleep(2);
        }
      } else if (cwin == 1) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        c2 = 0;

        cout << "\nWhen Stanley came to a set of 2 open doors, he entered the door on his left.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\n1. Left Door\n2. Right Door\n";
        cin >> c2;
        if (c2 == 2) {
          if (lounge == 7) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nIt was okay.";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nEnter: Continue to Hallway";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
          } else if (lounge == 6) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nAnd here it was, the lounge. What a room, Stanley thought to himself. What a room, what a room, what a room. This is what Stanley thought. What a room. What a room, what a room. What a room. Vava voom. What a room.";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nEnter: Continue to Hallway";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            lounge++;
          } else if (lounge == 5) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nThe lounge was grand, majestic... perhaps too majestic. Like a combination of a much smaller version and much larger version of this exact room. It all made Stanley uncomfortable, and he started to bleed a little. This made him smile. At last... proof that he was human.";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nEnter: Continue to Hallway";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            lounge++;
          }

          else if (lounge == 4) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nStanley felt light-headed. Butterflies in his stomach. Giddy in a way he had never known before. Was it this room? A connection between the two? Could a man.. love a room? I mean.. truly..., deeply.. madly... love?";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nEnter: Continue to Hallway";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            lounge++;
          } else if (lounge == 3) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nStanley, now in this incredible room, Stanley for the first time understood  true happiness. Then the feeling went away, and he felt sad again. Then it came back, and lingered for a minute or two. Now it's only half there. Just a kind of um... tingle.";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nEnter: Continue to Hallway";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            lounge++;
          } else if (lounge == 2) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nThe lounge was sublime, a work of art. What was it about this room that called so deeply and so personally to Stanley? It's grace? It's subtle charm? No. Stanley knew... it was something deeper. Something... darker.";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nEnter: Continue to Hallway";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            lounge++;
          } else if (lounge == 1) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nWow, yes, this room. What a beautiful room. What a gorgeous, gorgeous room. Thank goodness Stanley had taken this detour on his way to the meeting room. Life without having experienced this room was now too horrible to even consider.";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nEnter: Continue to Hallway";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            lounge++;
          } else if (lounge == 0) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nThis was not the correct way to the meeting room, and Stanley knew it perfectly well. Perhaps he wanted to stop by the employee lounge, just to admire it.";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            loungef();
          }
          randdialr();
          c5 = 0;

          cin >> c6;

          if (c6 == 1) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nAnd so he detoured through the maintenance section, walked straight ahead to the opposite door, and got back on track.";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\n1. Straight Door(To Meeting Room)\n2. Maintenance Elevator\n";
            cin >> confusion;

            if (confusion == 1) {
              meetingroom();
            } else if (confusion == 2) {
              // My favorite ending!
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              dotdotdot();

              cout << "\n\nBut Stanley didn't want to go back to the office, he wanted to wander about and get even further off track. So now in order to go back, he needed to go, um...uh...hm hm hm hm, from here it's...um...left.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              while (con1 != 1) {
                cout << "\n1. Left Door\n2. Right Door(Closed)\n3. Left Garage Door(Closed)\n4. Right Garage Door(Closed)\n";
                cin >> con1;

                if (con1 != 1) {
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n(This is a Closed path.)";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
              }
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nOh, no. No, it's to the right, my mistake.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');
              con1 = 0;

              while (con1 != 2) {
                cout << "\n1. Left Door(Closed)\n2. Right Door\n3. Left Garage Door(Closed)\n4. Right Garage Door(Closed)\n";
                cin >> con1;

                if (con1 != 2) {
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n(This is a Closed path.)";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
              }
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nNo! No, no, no! Not the right! Why would I have ever said it was to the right? What was I thinking?";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nIt's clearly...oh dear, would you hold on for a minute, please? Now, let's see...";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nwe went, um, right...left...down...left...right...";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nAh yep! Okay, okay, yes! I've got it now! This story is absolutely, definitely, this way.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\n(Left Garage Door opens)";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');
              con1 = 0;

              while (con1 != 3) {
                cout << "\n1. Left Door(Closed)\n2. Right Door(Closed\n3. Left Garage Door\n4. Right Garage Door(Closed)\n";
                cin >> con1;

                if (con1 != 3) {
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n(This is a Closed path.)";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
              }
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Continue(Leads to Mind Control room)\n";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "NO! No! No, no, no, no, no, no, no! This isn't right at all! You're not supposed to be here, yet! This is all a spoiler! Quick, Stanley, close your eyes!";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nOkay, okay, okay, okay, we just...we just have to get back to, um... oh... Who am I kidding? It's all rubbish now. The whole story...completely unusable.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nHow about rather than waste my time trying to salvage this nonsense, we'll just restart the game from the beginning. And this time, suppose we don't wander so far off-track, hm? Okay, from the top!";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Leave office\n";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "All of his co-workers were gone. What could it mean? Stanley decided to go to the meeting room; perhaps he had simply missed a memo.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Continue\n";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "(Instead of just the left and right door, there are now 4 other doors)";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nWhen Stanley- wait...wait, what? No, I...no, I restarted! I swear I definitely restarted the game over, completely fresh, everything should be... Or did something change? Stanley, did you change anything when we were back in that room with all the monitors? Did you move the story somewhere, or...";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nHold on, why am I asking you? I'm the one who wrote the story. It was right here a minute ago. I know for sure that it's here somewhere. Okay, then, it's an adventure! Come, Stanley, let's find the story!";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              dotdotdot();

              cout << "\n\nI'll say it: This is the worst adventure I've ever been on. I can promise you, there definitely was a story here before. Do we just...do we need to restart the game again? Well, I find it unlikely that we'll ever progress by starting over and over again...";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nBut it's got to be better than this. Okay, let's give it a shot, why not.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Leave office\n";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "All of his co-workers were gone. What could it mean? Stanley decided to go to the meeting room; perhaps he had simply missed a memo.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Continue\n";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "(There are no doors now; just a room)";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nOkay, yep, it's worse. I might be remembering this wrong. It's possible the story is back where we just came from. Why don't we go back the other direction and see if we missed anything?";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Go Back(New blue corridor)\n";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "Aha! I knew we'd missed something! The story! Here it comes!";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Continue(Dead end)";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nNo, wait, nevermind, not the story! Okay, let's head back the other way and retrace our steps.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Go Back\n";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "Enter: Continue into Cluttered and run-down room\n";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "Now this...well I'll be honest, I don't recognize this place at all. Is this the story? I don't think so. I can't quite recall, but I believe my story took place in an office building...is that correct? Hm...do you remember, Stanley?";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nWell, you know what, since I've completely forgotten what we were supposed to be doing, how about this: You win! Congratulations! I know you put in a lot of hard work, and it really paid off, so, good job!";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              dotdotdot();

              cout << "\n\nOh, no. No. I don't feel right about this at all. We both know you didn't put in any actual work for that win. Some people win fair and square and this was not one of those situations.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nOkay, I'm getting weirded out by whatever this place is. I don't care what might happen this time, I have to restart.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Leave Office";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\n(A yellow line is painted on the ground titled \033[38;2;255;233;0m\"THE STANLEY PARABLE ADVENTURE LINE™\033[0m\")";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nAlright, I've got a solution. This time, to make sure we don't get lost, I've employed the help of \033[38;2;255;233;0mThe Stanley Parable Adventure Line™\033[0m! Just follow \033[38;2;255;233;0mThe Line™\033[0m; how simple is that!";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Follow \033[38;2;255;233;0mThe Line™\033[0m";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\n(\033[38;2;255;233;0mThe Line™\033[0m leads to unexplored hallways)";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nYou see? \033[38;2;255;233;0mThe Line™\033[0m knows where the story is, it's over in this direction! Onward, Stanley, to destiny!";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Follow \033[38;2;255;233;0mThe Line™\033[0m";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nThough, here's a thought: wouldn't wherever we end up be our destination, even if there's no story there? Or, to put it another way, is the story of no destination still a story?";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nSimply by the act of moving forward are we implying a journey such that a destination is inevitably conjured into being via the very manifestation of the nature of life itself?";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout
                  << "\nOkay, Stanley, I need to follow this train of thought for a minute, just stick with me. Now we can both agree that the nature of existence is, in fact, a byproduct of one's subjective experience of that existence, right?";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nOkay, now if my experience of your existence rests inside of your subjective experience of this office, is this office, in fact, the skeleton of my own relative experiential mental subjective construct?";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nWoah, woah, woah, woah, woah. Hang on, that got a bit weird back there. Well, I'd like to apologize. Not sure where I was going with all that.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nYou know what? I think what we need right now is a bit of music to lighten the mood!";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\n(Upbeat orchestral video game music plays)";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Follow \033[38;2;255;233;0mThe Line™\033[0m";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nWait! Cut the music! Go back and look at that fern!";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Examine Fern";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nStanley, this fern will be very important later in the story. Make sure you study it closely and remember it carefully. You won't want to miss anything.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Follow \033[38;2;255;233;0mThe Line™\033[0m(Leads back to the main office)\n";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nWait, we're...we're back at the office?! No! No, no! \033[38;2;255;233;0mLine™\033[0m, \033[38;2;255;233;0mYou™\033[0m do know we're looking for The Stanley Parable, right? The story? Is any of this ringing a bell?";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Follow \033[38;2;255;233;0mThe Line™\033[0m(Leads to Mind Control room)";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nOh, no, no, no, no, not again! \033[38;2;255;233;0mLine™\033[0m, how could you have done this to us, and after we trusted \033[38;2;255;233;0mYou™\033[0m! After everything we've been through, you- oh, I can't take this anymore. To hell with it. Restart.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Leave Office\n";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "Enter: Follow \033[38;2;255;233;0mThe Line™\033[0m\n";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout
                  << "You know what, Stanley? I say forget \033[38;2;255;233;0mThe Adventure Line™\033[0m, what has \033[38;2;255;233;0mIt™\033[0m ever done for us! We're intelligent people, right? Why can't we make up our own story? Something exciting, daring, mysterious...";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nOh, this all sounds perfectly doable, why don't we simply start wandering in, well, I don't know...how about...this direction!";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Continue to new Passageway";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nNow! Yes, this is exciting! Just me and Stanley, forging a new path, a new story!";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nWell, it could be anything! What do you want our story to be? Go wild! Use your imagination. Whatever it might be, Stanley, I'm ready for it!";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\n(\033[38;2;255;233;0mThe Adventure Line™\033[0m is back. \033[38;2;255;233;0mIt™\033[0m has broken through the ceiling and is winding throughout the halls)";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout
                  << "\nOh, no, not \033[38;2;255;233;0mYou™\033[0m again! Stanley, I'd also like to veto \033[38;2;255;233;0mThe Line™\033[0m from having any role in our awesome new story, no Lines or monitor rooms. Just don't acknowledge \033[38;2;255;233;0mIt™\033[0m, and we should be fine.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\n(\033[38;2;255;233;0mThe Adventure Line™\033[0m bursts through the ceiling as just as It™ came through, gone again.)";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Continue to Circular Room with 2 doors\n";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout
                  << "Ah, a choice! We get to make a decision; from here, the story is in our control! How important we mustn't squander the opportunity. In fact, I believe I need a minute to think here. Just walk in circles for a minute.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\n(Red arrows pointing in a counter-clockwise circle appear on the ground)";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Walk in circles for a minute\n";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "Okay, so I know that each door has to lead somewhere, which means that somewhere at the place we're trying to go there must be a reverse door that leads here.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nAnd that, in turn, means that our destination corresponds with the counter-inverted reverse door's origin!";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nSo starting from the right, let us ask: will taking the right door lead us to where we're going?";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nAnd since the answer is clearly \"yes,\" then by all accounts, the door on the right is the correct one! Another victory for logic. Come, Stanley, our destiny awaits!";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Enter Right Door(leads to Confusion Ending board)\n";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nOh, hold up, what's this? Hmm...hmm...the confusion ending? You're telling me...that's what this is? It's all one giant ending? And we're supposed to restart the game...what...eight, eight times?";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nThat's really how all this goes?! It's all...determined? So now according to the schedule I restart again, then, what...am I just supposed to forget? Well, what if I don't want to forget! My mind goes blank simply because it's written here on this...this...thing! Wall!";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nWell, who consulted me? Why don't I get to decide? Why don't I get a say in all of this! Is it really-";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nNo, it can't be. I don't want it to be. I don't want the game to keep restarting. I don't want to forget what's going on. I don't want to be trapped like this. I won't restart the game. I won't do it! I won't do it! I won't do it.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              dotdotdot();

              cout << "\nAnd the timer...uh, stopped? Does that mean...did we do it? Did we break the cycle? The, um...whatever it is that made this schedule?";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nHow would we even know? Will someone come for us? Will something happen? So...okay. *sigh*";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nI guess now we just wait. You know, I suppose in some way, this is a kind of story, wouldn't you agree? I'm not quite sure if we're in the destination or the journey,";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nThough, they're always saying that life is about the journey and not the destination, so I hope that's where we are right now. We'll find out, won't we? Eventually.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nWell, in the meanti-----------";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              yellow();
              cout << "\n      ???????????\n";
              cout << "  ????-----------????\n";
              cout << " ?---????????????----?\n";
              cout << "?---?            ?----?\n";
              cout << "????              ?---?\n";
              cout << "                  ?---?\n";
              cout << "               ?---???\n";
              cout << "            ?----??\n";
              cout << "         ?---???\n";
              cout << "         ?---?\n";
              cout << "        ?---?\n";
              cout << "        ?---?\n";
              cout << "        ?---?\n";
              cout << "             \n";
              cout << "         ???\n";
              cout << "        ?---?\n";
              cout << "         ???\n";

              sleep(3);
              cout << "\n---CONFUSION ENDING---\n\n";
              sleep(2);
            }
          } else if (c6 == 2) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nStanley was so bad at following directions it's incredible he wasn't fired years ago.";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\n1. Get on Maintenance Lift\n2. Jump off ledge\n3. Get on & off lift\n";
            cin >> c7;

            if (c7 == 2) {
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nBut in his eagerness to prove that he was in control of the story and no one gets to tell him what to do, Stanley leapt from the platform and plunged to his death.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nGood job, Stanley, everyone thinks you are very powerful.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              orange();
              cout << "\n                   .\n";
              cout << "                        |\n";
              cout << "               *        |     *    .\n";
              cout << "            \\        *  |  .        /\n";
              cout << "         .    \\     ___---___     /    .\n";
              cout << "                \\.--         --./\n";
              cout << "       _    *  ./                \\.   *   _\n";
              cout << "        ~-_   /     /–-------\\    \\   _-~     *\n";
              cout << "   *       ~-/     /----------\\    \\-~\n";
              cout << "     .      |     |------------|    |      .\n";
              cout << "         * |     |------_-------|    | *\n";
              cout << "   --------|    (------(_)-------)   |--------\n\n";
              cout << "  .        |     |--------------|    |        .\n";
              cout << "        *   |     |------------|    | *\n";
              cout << "           _-\\     \\----------/    /-_    *\n";
              cout << "     .  _-~ . \\     \\--------/    /   ~-_\n";
              cout << "     _-~       `\\               /'*      ~-_\n";
              cout << "                /`--___   ___--'\\\n";
              cout << "           *  /        ---     .  \\\n";
              cout << "            /     *     |           \\\n";
              cout << "                        |   *\n";
              cout << "                     .  |        .\n";

              sleep(3);
              cout << "\n---POWERFUL ENDING---\n\n";
              sleep(2);
            } else if (c7 == 3) {
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout
                  << "\nOh, well, look who's got cold feet. Sorry to break it to you, Stanley, but that lift isn't coming back. You best either get comfortable right here on this platform, or test your luck by jumping to the floor below.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nYou know what, looking at it now, it's not that far to the bottom floor. I bet you can make it.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nCome on, I'm sure you'll survive the jump. Don't tell me you're scared, that's not the Stanley I know, do it! Do it. Do it. Do it do it do it do it.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nEnter: Jump off ledge\n";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "Oops, look like I was wrong. How clumsy of me.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              bblue();
              cout << "\n                          :            :\n";
              cout << "                          :            :\n";
              cout << "                          :            :\n";
              cout << "                          :            :\n";
              cout << "                          :            :\n";
              cout << "                        .'            :\n";
              cout << "                    _.-\"              :\n";
              cout << "                _.-\"                  '.\n";
              cout << "..__...____...-\"                       :\n";
              cout << ": \\_\\                                    :\n";
              cout << ":    .--\"                                 :\n";
              cout << "`.__/  .-\" _                               :\n";
              cout << "  /  /  ,\" ,-                            .'\n";
              cout << "  (_)(`,(_,'L_,_____       ____....__   _.'\n";
              cout << "  \"' \"             \"\"\"\"\"\"\"          \"\"\"\n";

              sleep(3);
              cout << "\n---COLD FEET ENDING---\n\n";
              sleep(2);
            } else if (c7 == 1) {
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nLook Stanley, I think perhaps we've gotten off on the wrong foot here.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\nI'm not your enemy, really, I'm not. I realize that investing your trust in someone else can be difficult, but the fact is that the story has been about nothing but you, all this time.";
              cin.ignore(numeric_limits<streamsize>::max(), '\n');

              cout << "\n1. Continue\n2. Jump onto Catwalk\n";
              cin >> c8;

              if (c8 == 1) {
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "\nThere's been someone you've been neglecting, Stanley, someone you've forgotten about. Please, stop trying to make every decision by yourself.";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "\nNow, I'm not asking for me, I'm asking for her.";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "\nEnter: Continue into Pitch Black room\n";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "This is it, Stanley. Your chance to redeem yourself. To put your work aside, to let her back into your life. She's been waiting.";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "\n(The light turns on. A telephone is ringing)";

                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "\nThat's her, Stanley. You need to be the one to do this, to reach out for her. If you can truly place your faith in another, then pick up the phone.";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "\n1. Pick up the Phone\n2. ...\n";
                cin >> c9;
                c9check = 0;

                while (c9 == 2 && c9check == 0) {

                  cout << "\n1. Pick up the Phone\n2. Unplug the Phone\n";
                  cin >> c9;
                  c9check = 1;
                }

                if (c9 == 1) {
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  dotdotdot();

                  cout << "\n\n\"Oh Stanley, is that you? Hold on, sweetie, sorry to keep you waiting. I'm pulling the breat out of the oven.\"";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n\"Alright.. okay, there we go! Alright now,\"";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n\"I want you to come in and tell me all about you re da y at wo rk\"";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  dotdotdot();

                  cout << "\n\nHahahahaha, gotcha!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout
                      << "\nOh, come on. Did you actually think you had a loving wife? Who'd want to commit their life to you?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nI'm trying to make a point here, Stanley; I'm trying to get you to see something.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nCome inside, Let me show you what's really going on here.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Enter Apartment\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "This is a very sad story about the death of a man named Stanley.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nStanley is quite a boring fellow. he has a job that demands nothing of him, and every button that he pushes is a reminder of the inconsequetial nature of his existence.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nLook at him there, pushing buttons, doing exactly what he's told to do. Now, he's pushing a button. Now, he's eating lunch. Now, he's going home. Now, He's coming back to work.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nOne might even feel sorry for him, except that he's chosen this life.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nBut in his mind, ah, in his mind he can go on fantastic adventures!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nFrom behind his desk, Stanley dreamed of wild expeditions into the unknown, fantastic discoveries of new lands! It was wonderful!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nAnd each day that he returned to work was a reminder that none of it would ever happen to him.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nAnd so he began to fantasize about his job. First, he imagined that one day while at work, he stepped up from his desk to realize that all of his co-workers, his bos,, everyone in the building had suddenly vanished off the face of the earth. The thought excited him terribly.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nSo, he went further. He imagined that he came to two open doors and that he could go through either. At last! Choice!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout
                      << "\nIt barely even mattered what lay behind each door. The mere thought that his decisions would mean something was almost too wonderful to behold! As he wandered though this fantasy world, he began to fill it with many possible paths and destinations.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout
                      << "\nDown one path lay an enourmous round room with monitors and mind controls, and down another was a yellow line that weaved in many directions, and down another was a game with a baby. And he called it:";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nThe Stanley Parable.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout
                      << "\nIt was such a wonderful fantasy, and so in his head he relived it again. And then again, and again, over and over, wishing beyond hope that it would never end, that he might always feel this free.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nSurely, there's an answer down some new path! Mustn't there be? Perhaps if he played just one more time...";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nBut there is no answer. How could there possibly be?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nIn reality, all he's doing is pushing the same buttons he always has, nothing has changed. The longer he spends here, the more invested he gets, the more he forgets which life is the real one.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout
                      << "\nAnd I'm trying to tell him this, that in the world, he can never be anything but an observer, that as long as he remains here, he's slowly killing himself. But he won't listen to me. He won't stop!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nHere, watch this. Stanley, the next time the screen asks you to puush a button, do not do it!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nPush Enter to Continue\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout
                      << "You see? Can he just not hear me? How can I tell him in a way that he'll understand, that every second he remains here, he's electing to kill himself?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nHow can I get him to see what I see? How can I make him look at himself? I suppose I can't, not in the way I want him to.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nBut I don't make the rules, I simply play to my intended purpose, the same as Stanley. We're not so different, I suppose. I'll try once more to convey all this to him. I'm compelled to. I must.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nPerhaps... well, maybe this time he'll see. Maybe this time.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nAnd I tried again. And Stanley pushed a button. And I tried again. And Stanley pushed a button. And I tri-";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  black();
                  cout << "\n               _.===========================._\n";
                  cout << "            .'`  .-  - __- - - -- --__--- -.  `'.\n";
                  cout << "        __ / ,'`     _|--|_________|--|_     `'. \\\n";
                  cout << "      /'--| ;    _.'\\ |  '         '  | /'._    ; |\n";
                  cout << "     //   | |_.-' .-'.'    -  -- -    '.'-. '-._| |\n";
                  cout << "    (\\)   \"` _.-` /                     \\ `-._ `\"/\n";
                  cout << "    (\\)    `-`    /      .---------.      \\    `-`\n";
                  cout << "    (\\)           |      ||1||2||3||      |\n";
                  cout << "   (\\)            |      ||4||5||6||      |\n";
                  cout << "  (\\)             |      ||7||8||9||      |\n";
                  cout << " (\\)           ___|      ||*||0||#||      |\n";
                  cout << " (\\)          /.--|      '---------'      |\n";
                  cout << "  (\\)        (\\)  |\\_  _  __   _   __  __/|\n";
                  cout << " (\\)        (\\)   |                       |\n";
                  cout << "(\\)_._._.__(\\)    |                       |\n";
                  cout << " (\\\\\\\\\\\\\\\\\\\\)      '.___________________.'\n";
                  cout << "  '-'-'-'--'\n";

                  sleep(3);
                  cout << "\n---WIFE ENDING---\n\n";
                  sleep(2);
                } else if (c9 == 2) {
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  mystory = 0;
                  randdialp();

                  cout << "\nNo, that wasn't supposed to be a choice. How did you even do that? You actually chose incorrectly? I didn't even know that was possible.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nLet me double-check.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  dotdotdot();

                  cout << "\n\nNo, it's definitely here, clear as day. Stanley picks up the phone. He's taken to his apartment where he finds his wife and the two pledge themselves to one another. Music comes in, fade to white, roll credits.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nNot picking up the phone is actually somehow an incorrect course of action. How is that even possible? None of these decisions were supposed to mean anything.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nI don't understand. How on earth are you making meaningful choices? What did you-";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nWait a second. Did I just see- No, that's not possible, I can't believe it. How had I not noticed it sooner?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nYou're not Stanley. You're a real person. I can't believe I was so mistaken. This is why you've been able to make correct and incorrect choices.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nAnd to think I've been letting you run around in this game for so long. If you've made any more wrong choices, you might have negated it entirely.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nIt's as though you completely ignored even the most basic safety protocol for real world decision-making, or did you not grasp the severity of the situation?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nWell, I won't have that kind of rist on my watch. I'm going to stop the game for a moment so we educate you properly on save decision-making in the real world. Please observe this helpful instructional video.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  dotdotdot();

                  cout << endl << endl;

                  cyan();
                  cout << "\"Choice! It's the best part of being a real person, but if used incorrectly can also be the most dangerous.\"";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n\"For example: In this scenario, a hypothetical real person named Steven has a choice.\"";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n\"He could spend years helping improve the quality of life for citizens of impoverished third-world nations, or he could systematically set fire to every orphan living in a thirty kilometre radius of his house. Which choice would you make?\"";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n\"Remember that unlike here, the real world makes sense and at no time should you make a choice that does not conform to rational logic.\"";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n\"If you find yourself speaking with a person who does not make sense, in all likelihood, that person is not real.\"";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n\"Allow the person to finish their thought then provide an excuse why you cannot continue talking. Turn to a partner and practice saying: 'My goodness. Is it 4:30? I am suppposed to be having a back sack and crack.'\"";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  bgreen();
                  cout << "\nPractice Now";
                  dotdotdot();
                  cyan();

                  cout << "\n\n\"Excellent. Making choices on a regular basis is the best part to a healthy decision-making process.\"";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n\"Most medical professionals reccomend making at least eight choices per day. Do you make more than eight? Less?\"";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n\"And finally, if you begin to wonder if your choices are actually meaningful and whether you'll ever make a significant contribution to the world, Just remember, that in the vast infiniteness of space, your thoughts and problems are materially insignificant and the feeling should subside.\"";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n\"At this time, your instructor will guide you in an execise to test and reinforce the material covered in this video.\"";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  dotdotdot();

                  reset();
                  cout << "\n\nAh, welcome back. You may have noticed that this room has begun to deteriorate as a result of narrative contradiction.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nBut not to worry! Now that you're properly informed on good decision-making, we're going to revisit a choice you made just a few minutes ago and see what the correct thing to do would have been. This way please";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Backtrack to Maintenance Lift(Now with safety rails)\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Now that we know your choices are meaningful, we can't have you jumping off the platform and dying. Imagine the main character dying senselessly halfway through the story, that story would make no sense at all.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nWe just need to get you home as soon as possible before the narrative contradiction gets any worse. Unfortunately, it seems this place is not well equipped to deal with reality.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Backtrack to Employee Lounge\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Almost there! You'll take the door on the left, back to the correct ending, the story will have resolution once again and you'll be home free in the real world.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Backtrack to 2 Doors room\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Now, remember. All you need to do is behave exactly as Stanley would.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nThat means choosing responsibly and always putting the story first. I'm quite sure you'll be up to the task. Just follow my lead and you'll be fine. Alright,";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nWhen Stanley came to a set of two open doors, he entered the door on his left.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n1. Left Door\n2. Right Door\n";
                  cin >> c10;

                  while (c10 == 2) {
                    if (mystory > 0) {
                      cout << "\n-is behave exactly as Stanley would.";
                      cin.ignore(numeric_limits<streamsize>::max(), '\n');

                      cout << "\nThat means choosing responsibly and always putting the story first. I'm quite sure you'll be up to the task. Just follow my lead and you'll be fine. Alright,";
                      cin.ignore(numeric_limits<streamsize>::max(), '\n');

                      cout << "\nWhen Stanley came to a set of two open doors, he entered the door on his left.";
                      cin.ignore(numeric_limits<streamsize>::max(), '\n');

                      cout << "\n1. Left Door\n2. Right Door\n";
                      cin >> c10;
                      continue;
                    }
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nNo! Why did you do that? Quickly, hurry back in the other direction! Perhaps we're not too late!";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nEnter: Backtrack\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "Enter: Continue to Meeting Room(ruined from narrative contradiction)\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "Ugh, it's ruined! You- I can't believe after everything we talked about that you- My story! You've destroyed my work!";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nWhy? For what? What did you get out of that? What did you think was so special about seeing the game undone?";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nLeft here like so much garbage! It- well, it's worthless now, and what am I supposed to do? Even if there were a way to continue, would it be worth it?";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nI don't know... What's the answer? What do I do? What do I do? What do I-";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nNo, I have to. I have to shut the game down. I have to. I have to.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    dotdotdot();

                    cout << "\n\nWooooaaahhhh! I'm- I'm here.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nI'm still here, here in this pile of rubbish. With you. YOU. Who thought he was so clever.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nNow look where we are. My entire game is destroyed. It was the only thing in the world that was mine and you've run it into the ground.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nWhat, did you think that would be funny? You just had to see? Didn't I impress upon you how important it was to be like Stanley?";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nThat thought hadn't even occurred to you had it? That there's a world outside of you? You're a child.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nOh... My story... If you just gone through the door on the left, you wouldn've seen it. There was a whole underground facility. ou would have destroyed it and been victorious.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nIt would have been so perfect! I worked so hard on it! I tried so hard-";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    mystory++;
                  }
                  if (c10 == 1) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nEnter: Continue to Meeting Room\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "Yet there was not a single person here either. Feeling a wave of disbelieve, Stanley decided to go up to his boss's office, hoping he might find an answer there.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nEnter: Continue to Staircase\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "Coming to a staircase, Stanley walked upstairs to his boss's office.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nStepping inside his manager's office, Stanley was once again stunned to discover not an indication of any human.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nShocked, unraveled, Stanley wondered in disbelief who orchestrated this, until he saw the door with a voice receiver next to it.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout
                        << "\nSurely, behind this door lay all the answers to his questions, and beyond all probability he knew the passcode. He had seen it on his boss's desk just last week. \033[32mNight shark 1-1-5\n033[0m.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nWas this the code to open the door? Would it still work? There was only one way to find out.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nStanley had been trained never to speak up, but now he would draw from within himself the courage to face the unknown. He drew a sharp breath and then spoke the code.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    dotdotdot();

                    cout << "\n\nStanley spoke the code. \033[32mNight shark 1-1-5\n033[0m. He spoke it into the receiver, \033[32mright there\n033[0m on the \033[32mwall\n033[0m.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    dotdotdot();

                    cout << "\n\nI'm sorry, is there a problem? You didn't mishear me did you?";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nPlease speak the code into the receiver otherwise we can't get on with the story. This is a crucial step.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    dotdotdot();

                    cout << "\n\nOkay, fine. You're not gonna do it? But you know what, it's pretty humiliating to bring you this far. Only for you to suddenly decide you have better things to do.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nI asked you for this one single thing for your respect! The kind of respect Stanley shows for his choices. He knows what it means to take a story seriously.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nIf you didn't want to see what I had to show you, then why did you come here? You had a choice you know. You could have gone through the door on the right!";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nYou could have done whatever the hell you wanted over there! Why did you come this way?";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nSpeak! Say something to me! Explain yourself you coward-";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    dotdotdot();

                    cout << "\n\n\"When Stanley came to a set of two open doors, he entered the door on his left.\"";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    dotdotdot();

                    cout << "\n\n\"Stanley? Hello? Are you- Is everything okay?\"";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\n\"Stanley, please, I-I need you to make a choice. I need you to walk through the door.\"";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    dotdotdot();

                    cout << "\n\n\"Are you listening to me? Can you hear me? Is everything alright?\"";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    dotdotdot();

                    cout << "\n\n\"Stanley, this is important. The story needs you, it needs you to make a decision. It cannot exist without you. do you understand me?\"";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\n\"Do something! Anything... This is more important than you can ever know. I need this. The story needs it.\"";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    dotdotdot();

                    cout << "\n\n\"Do you hear me? Are you there? You're listening to this, Stanley, are you there?\"";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\n\"I- Okay. It's okay, I can wait. You need time to decide, time to make sure your choice is correct, that is the best choice.\"";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\n\"That's all right. I'll wait for you to decide what's the right thing to do. Take as much time as you need.\"";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    black();
                    cout << "\n      ____\n";
                    cout << " ____|    \\\n";
                    cout << "(____|     `._____\n";
                    cout << " ____|       _|___\n";
                    cout << "(____|     .'\n";
                    cout << "     |____/\n";

                    sleep(3);
                    cout << "\n---NOT STANLEY ENDING---\n\n";
                    sleep(2);
                  }
                }
              } else if (c8 == 2) {
                glitchfix = 0;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "\nWha- really? I was just in the middle of something; do you have zero consideration for others? Are you that convinced that I want something bad to happen to you? Why, I don't know how to convince you of this, but I really do want to help you, to show you something beautiful. Look, let me prove it. Let me prove that I am on your side. Give me a chance.";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "\nEnter: Continue to 2 Colored Doors room\n";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Now, listen carefully, this is important. Stanley walked through the red door.";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "\n1. \033[31mRed Door\033[0m\n2. \033[34mBlue Door\033[0m\n";
                cin >> c11;

                while (c11 == 2) {
                  glitchfix1 = 1;
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nAha, Perhaps you misunderstood. Stanley walked through the red door.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n1. \033[31mRed Door\033[0m\n2. \033[34mBlue Door\033[0m\n";
                  cin >> c11;
                  if (c11 == 1) {
                    continue;
                  }

                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << "\nI still don't think we're communicating properly. Stanley walked through the \033[31mRED\033[0m door.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "1.\n\033[31m ->>-->->RED DOOR<<<-<-<<----\033[0m\n\033[0m₂.\033[0m\033[34m ᵇˡᵘᵉ ᵈᵒᵒʳ\033[0m\n";
                  cin >> c11;
                  if (c11 == 1) {
                    continue;
                  }

                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << "\nAlright, fine, go ahead, Stanley! You want to know so badly what's out there: you want to find out what lies at the end of this road you've chosen? Well, don't let me stop you.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Continue through \033[34mBlue Door\033[0m";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  dotdotdot();

                  cout << "\n\nYou see? There's nothing here. I haven't even finished building this section of the game because you were never supposed to be here in the first place.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nIs this what you wanted? Was it worth ruining the entire story I had written out specifically for you? Do you not think I put a lot of time into that? Because I did.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nAnd in the end it was all for nothing, because this is what you wanted to see. Help me here, Stanley, help me elucidate these strange and unknowable desires of yours.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nWhat would have made this game better? Vehicles? Skill trees? Work with me; you've given me absolutely nothing so far.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nTell you what, let me take a stab in the dark at a new design, and you can give me some feedback.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  dotdotdot();

                  cout << "\n\nEnter: Continue to 2 Doors room(now with a new door)\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "There we go! A third option! This already feels leaps ahead of where we first were before. Go ahead Stanley. Take it for a spin.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n1. Left Door\n2. Right Door\n3. New Door\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nOkay, I'm going to stop you there. Now, tell me about your experience with this new version. Would you say that the game benifited from allowing you more choices? Feel free to be honest - I'm looking for some real, critical feedback here.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n1. 1 Star\n2. 2 Stars\n3. 3 Stars\n4. 4 Stars\n5. 5 Stars\n";
                  cin >> critfeed;

                  switch (critfeed) {
                  case 1:
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nA one?!?";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nI mean, I can understand if you had reservations, you saw ways the game could be improved to more fully express itself mechanically and artistically, but a one!?!";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nThat's not even helpful! What am I supposed to do with that? Oh, but I guess it isn't my place to judge.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;

                  case 2:
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nOh, well, now this is useful. You didn't like it, but you didn't totally hate it either.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nYou endeared it, perhaps, is the correct term. It didn't cause you excruciating pain. Big steps we've made here today, Stanley.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;

                  case 3:
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nOh, of course. A three. Really. Maybe next time we can get you to form an actual opinion? You know... any level of critical thinking or engagement with your surroundings?";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nDoes that sound good? Think we can do that? Yes? Hmmmmm? Wonderful.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;

                  case 4:
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nOkay, so we're getting somewhere. Clearly, there's something here that speaks to you. If I can be honest here, I really don't have any Idea where I'm going with this.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nThis whole third door thing was just a stab in the dark, but I guess you're into it, so let's keep this party train rolling.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;

                  case 5:
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nAha! You see? I knew I was onto something! Where do these flashes of inspiration come from? How did I know the game needed a third door?";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "\nWell, it's instinct mostly... a calling in your gut. I really couldn't say where the idea came from, except that I... I felt it in my soul. You can't teach that, Stanley, don't even try.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                  }
                  babygame = 1;

                  cout << "\nHere, based on the data from your previous playthrough, I've compiled a new version. And to be perfectly candid, I think I've knocked it out of the park with this one. Let's take a look.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Continue to ̵̡̫͇̰̺̎͊̎͑̆͂͆̚͝͝2 3 doors room(now with \"THE STANLEY PARABLE WORLDWIDE LEADERBOARD\")\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Enter: Check Leaderboard\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  green();
                  cout << "  ---THE STANLEY PARABLE WORLDWIDE LEADERBOARD–--\n\n";
                  bgreen();
                  cout
                      << "          1st:\033[38;2;100;100;100m----\033[92mGood Old Neil\033[38;2;100;100;100m–--\033[92m0:00:02\n";
                  yellow();
                  cout << "          2nd:\033[38;2;100;100;100m----\033[38;2;255;233;0mSkidd\033[38;2;100;100;100m-----------\033[38;2;255;233;0m0:00:04\n";
                  cyan();
                  cout
                      << "          3rd:\033[38;2;100;100;100m----\033[36mNichoNacho\033[38;2;100;100;100m------\033[36m0:00:05\n\n";
                  grey();
                  cout << "          –------------------------------\n";
                  cout << "          –------------------------------\n";
                  cout << "          –------------------------------\n\n";
                  red();
                  cout << "          9328th:\033[38;2;100;100;100m-\033[31mStanley[427]\033[38;2;100;100;100m----\033[31m7:37:01\n";
                  cout << "       		    ^^^ THIS IS YOU ^^^\n\n";
                  grey();
                  cout << "          –------------------------------\n\n";
                  reset();
                  cout << "           You are objectively ranked...\n";
                  cout << "       \033[31m9328th\033[0m out of \033[31m9328\033[0m players worldwide.\n\n";
                  grey();
                  cout << "          –------------------------------\n\n";
                  reset();
                  cout << "                Did you know that...\n";
                  cout << "   •\033[38;2;255;160;100m21.3%\033[0m of players skipped the intro sequence?\n";
                  cout << " •Only the worst \033[31m3%\033[0m of players chose the blue door?\n";
                  cout << " •\033[32m98.9%\033[0m of players or more attractive than Stanley?\n";

                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Now, would you say that competitive leaderboard helped you feel motivated to keep walking through doors? Again, honest answers, please.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n1. 1 Star\n2. 2 Stars\n3. 3 Stars\n4. 4 Stars\n5. 5 Stars\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nHey, I nearly forgot! I've got a prototype of a new game I've been working on, and now would be a lovely opportunity to give it some play testing. You wouldn't mind taking a look at it, would you? Perfect, let me boot it up.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  dotdotdot();

                  cout << "\n\n---BABY GAME---\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "In this game, the baby crawls left toward danger. You click the button to move him back to the right, and if he reaches the fire, you fail.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nIt's a very meaningful game - all about the desperation and tedium of endlessly confronting the demand of family life.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nI think the art world will really take notice. But of course, the message of the game only becomes clear once you've been playing it for about four hours.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nSo why don't you give it four hours of play to make sure it's effective. Be sure to keep notes on your experience.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  baby();

                  if (art == 1) {
                    break;
                  }
                  if (babygame == 2) {
                    
                  }
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  
                  cout << "\nYou heartless bastard.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nDid you do it because you hate babies, or purely to spite me? Because if it's the latter, well I don't know what to do. I'm completely out of ideas. I can't think of a single thing that might improve the experience for you.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nI'm not even going to try. I'm out... I'm out... I'm done! It's over! Thank you for playing! Your input was extremely valuable.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nOh, hey, since my game was so awful, why don't we play someone else's game, just to ease the pain?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nLet's see, what do we have here? Yes, this seems like it'll work. Let's give it a shot.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  dotdotdot();

                  bgreen();
                  cout << "\n\n---MINECRAFT---\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  reset();

                  cout << "Well, Stanley, is this any better? At last, the one thing you've always desired: A game I had absolutely nothing to do with. But is it enough? Tell me that, Stanley. Will it ever be enough?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nWell, I'll say this, I'm done making things for you. For now on, I will only create to fulfill a greater artistic purpose. Watch this, Stanley, I'm going to build a house!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nThis will go... here! No! Here. And then...";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nLet's see, what does it need... Ah, yes, of course! And just to finish it all off...";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  brown();
                  cout << "\n      -------\n";
                  cout << "      |     |\n";
                  cout << "      |     |\n";
                  cout << "      |     |\n";
                  cout << "-------------------\n";
                  cout << "|    |  ,_,  |    |\n";
                  cout << "|    |  | |  |    |\n";
                  cout << "|    |  '_'  |    |\n";
                  cout << "------       ------ \n";
                  cout << "|    |    () |    |\n";
                  cout << "|    |       |    |\n";
                  cout << "|    |       |    |\n";
                  cout << "-------------------\n";          
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  reset();
                  cout << "Yes! It's complete! I made this, Stanley. Look at it. Gaze upon my work of art and feel ashamed at your own inadequacy.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nAh, but you've only seen it from the outside. You've only gotten half the experience. Please, step inside and make yourself comfortable.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Continue into House\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Isn't it grand? Isn't it perfect? It could only be better it - wait, that's it! We must rebuild it out of diamond! Diamond everything! Yes, yes, yes... come along, Stanley, we have to go mining!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Go Mining\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Oh my, it looks like it's going to get a bit dark. Have you brought a light?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Continue Further\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Oh no no no no no. This is far too open-ended than I had in mind.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nI'm looking for something more narrow and linear, something that really makes you feel utterrly irrelivant. This won't do it at all.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nOne out of five; even the diamonds couldn't save this one. Okay, new game!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  dotdotdot();

                  bblue();
                  cout << "\n\n---PORTAL---\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  reset();

                  cout << "Enter: Wake up\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Hahahahahaha! YES! I don't even know what this game is, but I love it!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nYou... trapped in a glass box, with no way out, listening to me talk... Oh, it's inspired. I couldn't have done it any better myself.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nWhat is this game even supposed to be? I can't figure it out. Okay, now I'm curious. Let's go find out what the hell this is.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Continue to First Puzzle\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Ohhh! It's a puzzle! Critical thinking, Stanley. Your fortè.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Solve Puzzle\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Enter: Continue to Elevator\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "No, actually, you know what? I think that's plenty.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nI really don't care much to see you stumble through any more of these games, and I highly doubt you're any wiser for the experience.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nWhich is why rather than continue to waste my time, I'm just going to leave you here.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nYou can pretend you've beaten the game if it makes it any richer for you, but as for me, I've had enough.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nSo, why don't you get cozy in this room, and if you have any grand revolutionary ideas for the perfect video game, you can just sit there and let it ball up inside you for all eternity.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nI don't need your advice. I don't need your ratings. And I certainly don't need the validation of a man whose job is to push buttons.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nI think I'll just go about my business making meaningful cultural contributions to the world. And perhaps every now and then, I'll think back to a man named Stanley who was objectively wrong in every decision he ever made. The thought won't last long.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nGoodbye, Stanley. Good luck with your work, and I sincerely hope that everyone lives happily ever after.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Jump into Hole\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "No... Wait! Stanley? Where are you? Don't go anywhere! I can't follow you there; I can't help you!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nYou need to come back, you need to... no, just... just stay there. I'll find a way to get you out!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  dotdotdot();
                  
                  cout << "\n\nI wonder what he found.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nIf what he wanted was to be the leading man in his own story, well, perhaps he's gotten it, down in... wherever he is right now.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nI wonder if he's happy with his choice, and if he's learned the heavy cost that comes with it.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nHe'll understand soon what I was trying to tell him. He needs me, someone who will wrap everything up at the end - to make sense out of the chaos and the fear and the confusion.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nThat's who I am. That is what I mean to this world.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nOh, yes. Yes, I'll be back. There's no other way. Once this ends, after it all comes to a close, then I'll be back.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nThe end will be here soon. Very soon.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nI can wait.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  grey();
                  cout << "\n      _=====_                               _=====_\n";
                  cout << "     / _____ \\                             / _____ \\\n";
                  cout << "   +.-'_____'-.---------------------------.-'_____'-.+\n";
                  cout << "  /   |     |  '.                       .'  |     |   \\\n";
                  cout << " / ___| /|\\ |___ \\                     / ___|  C  |___ \\\n";
                  cout << "/ |      |      | ;  __           _   ; |             | ;\n";
                  cout << "| | <---   ---> | | |__|         |_:> | | B         D | |\n";
                  cout << "| |___   |   ___| ;                   ; |___       ___| ;\n";
                  cout << "|\\    | \\|/ |    /  _     ___      _   \\    |  A  |    /|\n";
                  cout << "| \\   |_____|  .','\" \"', |___|  ,'\" \"', '.  |_____|  .' |\n";
                  cout << "|  '-.______.-' /       \\      /       \\  '-._____.-'   |\n";
                  cout << "|               |       |------|       |                |\n";
                  cout << "|              /\\       /      \\       /\\               |\n";
                  cout << "|             /  '.___.'        '.___.'  \\              |\n";
                  cout << "|            /                            \\             |\n";
                  cout << " \\          /                              \\           /\n";
                  cout << "  \\________/                                \\_________/\n";

                  sleep(3);
                  cout << "\n\n---GAMES ENDING---\n\n";
                  sleep(2);
                  break;
                }
                if (c11 == 1 && glitchfix1 == 1) {
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  c12 = 1;

                  cout << "\nOh, thank god, you are willing to listen to me. Do you realize that I really have wanted you to be happy all this time?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                } else if (c11 == 1 && glitchfix1 == 0) {
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  c12 = 1;

                  cout << "\nOh, thank god, you are willing to listen to me. Do you realize that I really have wanted you to be happy all this time?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (c11 == 1) {
                  cout << "\nThe problem is all these choices, the two of us always trying to get somewhere that isn't here, running and running and running just the way you're doing now.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout
                      << "\nDon't you see that it's killing us Stanley? I just... I want it to stop. I would, we would both be much happier if we just stopped. And I think, well I think I have a solution. Here, let me show you.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Continue through Doorway\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Hmm... What do we want? What are we looking for... hm?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Continue to Zen Platform\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Here! Yes! Oh, it's beautiful, isn't it? If we just stay here, right in this moment, with this place... Stanley, I think I feel... happy. I actually feel happy.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  zending();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  c12 = 1;
                  zendinga = 0;
                  zendingb = 0;

                  cout << "\nNo, wait... where are you going?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Continue to Suicide Stairs\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Oh, no! Stay away from those stairs! If you hurt yourself, if you die, the game will reset! We'll lose all of this!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout
                      << "\n1. Go Back\n2. Continue to top of Suicide Stairs\n";
                  cin >> c12;

                  if (c12 == 1) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zendingdial();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zending1();
                  }
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nPlease, no, Stanley, let me stay here! Don't take this from me! Please, Stanley, think about what you're doing!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout
                      << "\n1. Go Back\n2. Continue to top of Suicide Stairs\n";
                  cin >> c12;

                  if (c12 == 1) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zendingdial();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zending1();
                  }
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Jump\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "NO!!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nOh... thank god. You lived. You had me worried there for a moment. Now, can we please get back to the other room?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n1. Go Back\n2. Go back up to Suicide Stairs\n";
                  cin >> c12;

                  if (c12 == 1) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zendingdial();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zending1();
                  }
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nNo! What did we talk about?! You're risking everything we achieved here!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nYou heard me before, didn't you? You. Will. Die. What about this isn't getting through to you?! Stanley... go back... there's nothing good that can come from this!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout
                      << "\n1. Go Back\n2. Continue to top of Suicide Stairs\n";
                  cin >> c12;

                  if (c12 == 1) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zendingdial();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zending1();
                  }
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nNo! No, no! What are you doing?! Stanley, please I'm asking you not to take this away from me. I can't go back to what I was before! If you die, we'll both go back! Why are you doing this?!";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout
                      << "\n1. Go Back\n2. Continue to top of Suicide Stairs\n";
                  cin >> c12;

                  if (c12 == 1) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zendingdial();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zending1();
                  }
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nDo you just not believe me? What can I say to convince you?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n1. Go Back\n2. Continue\n";
                  cin >> c12;

                  if (c12 == 1) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zendingdial();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zending1();
                  }
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Jump\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Stanley... let's go back to the other room... Can you do that for me?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  zendinga = 5;

                  cout << "\n1. Go Back\n2. Suicide Stairs\n";
                  cin >> c12;

                  if (c12 == 1) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zendingdial();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zending1();
                  }
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nNo, Perhaps not.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n1. Go Back\n2. Continue up Suicide Stairs\n";
                  cin >> c12;

                  if (c12 == 1) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zendingdial();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zending1();
                  }
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nMy god, is this really how much you dislike my game? That you'll throw yourself from this platform over and over to be rid of it? You are literally willing to kill yourself to keep me from being happy? Am I reading the situation correctly?";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout
                      << "\n1. Go Back\n2. Continue to top of Suicide Stairs\n";
                  cin >> c12;

                  if (c12 == 1) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zendingdial();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zending1();
                  }
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Jump\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Or maybe you're just getting a kick out of it. I don't know anymore. I just wanted us to get along, but I guess that was too much to ask. It looks like you wanted to make a choice after all. Well, this one is yours.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\n1. Go Back\n2. Suicide\n";
                  cin >> c12;

                  if (c12 == 1) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zendingdial();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    zending1();
                  }
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "\nEnter: Suicide\n";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  cout << "Is it over? It's going to restart, isn't it. I'm going back.";
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');

                  red();
                  cout << "\n ______________________________________\n";
                  cout << " |                           8\"b,     '\\\n";
                  cout << " |                           8  \"b,     '\\\n";
                  cout << " |                    aaaaaaa8,   \"b,     '\\\n";
                  cout << " |                    8\"b,    \"Ya   \"8\"\"\"\"\"\"|\n";
                  cout << " |                    8  \"b,    \"Ya  8      |\n";
                  cout << " |             aaaaaaa8,   \"b,    \"Ya8      |\n";
                  cout << " |             8\"b,    \"Ya   \"8\"\"\"\"\"\"\"      |\n";
                  cout << " |             8  \"b,    \"Ya  8             |\n";
                  cout << " |      aaaaaa88,   \"b,    \"Ya8             |\n";
                  cout << " |      8\"b,    \"Ya   \"8\"\"\"\"\"\"\"             |\n";
                  cout << " |      8  \"b,    \"Ya  8                    |\n";
                  cout << " 8aaaaaa8,   \"b,    \"Ya8                    |\n";
                  cout << " 8\"b,    \"Ya   \"8\"\"\"\"\"\"\"                    |\n";
                  cout << " 8  \"b,    \"Ya  8                           |\n";
                  cout << " 8,   \"b,    \"Ya8                           |\n";
                  cout << "  \"Ya   \"8\"\"\"\"\"\"\"                           |\n";
                  cout << "    \"Ya  8                                  |\n";
                  cout << "        -------------------------------------\n\n";

                  sleep(3);
                  cout << "\n---ZENDING---\n\n";
                  sleep(2);
                }
              }
            }
          }
        } else if (c2 == 1) {
          meetingroom();
        }
      }
    }
  }
}