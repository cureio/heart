import time
import receive

def irregularHeartRateCheck(userBirth):
  
  heartrate = receive.r()
  
  if ((220 - userBirth) * 1.2) < heartrate:

    time.sleep(30)

    heartrate1 = receive.r()

    if ((220 - userBirth) * 1.2) < heartrate1:

      time.sleep(30)
      heartrate2 = receive.r()

      if ((220 - userBirth) * 1.2) < heartrate2:

        return True

      else:

        return False
      
    else:

      return False
    
  else:

    return False

def riskCheck(userBirth):
  
  heartrate = receive.r()

  if ((220 - userBirth) * 1.0) < heartrate:

    heartrate1 = receive.r()

    return True

  else:

    return False

def maxHeartRate(userBirth):

  return 220 - userBirth

def minTargetHeartRate(userBirth):

  return 220 - userBirth * 0.55

def maxTargetHeartRate(userBirth):

  return 220 - userBirth * 0.85

