#include <iostream>

#include <ctime>

#include <cstdlib>

#include <unistd.h>

int receive();

int irregularHeartRateCheck(int heartrate, int userBirth) {

  int test = 220 - 67 * 1.2;

  if (((220 - userBirth * 1.2) < heartrate) {

    if ((220 - userBirth * 1.2) < heartrate) {

      sleep(30);

      int heartrate1 = receive();

      if ((220 - userBirth * 1) < heartrate1) {

        sleep(30);

        int heartrate2 = receive();

        if ((220 - userBirth * 1) < heartrate2) {

          return true;

        } else {

          return false;

        }
      } else {

        return false;

      }

    }

    return false;

  }

  return false;

}

int riskCheck(int heartrate, int userBirth) {

  if ((220 - userBirth * 1) < heartrate) {

    return true;

  }

  return false;

}

int maxHeartRate(int userBirth) {

  return 220 - userBirth;

}

int minTargetHeartRate(int userBirth) {

  return 220 - userBirth * 0.55;

}

int maxTargetHeartRate(int userBirth) {

  return 220 - userBirth * 0.85;

}
