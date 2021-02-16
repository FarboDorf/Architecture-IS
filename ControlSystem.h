
#ifndef CONTROLSYSTEM_H
#define CONTROLSYSTEM_H


/**
  * class ControlSystem
  * 
  */

class ControlSystem
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ControlSystem();

  /**
   * Empty Destructor
   */
  virtual ~ControlSystem();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void StartFly()
  {
  }


  /**
   */
  void SetHeight()
  {
  }


  /**
   */
  void EmergencyLanding()
  {
  }

protected:
  // Static Protected attributes
  //  

  // Protected attributes
  //  


  // Protected attribute accessor methods
  //  


  // Protected attribute accessor methods
  //

private:
  // Static Private attributes
  //  

  // Private attributes
  //  

  Engine atr1;
  PID atr2;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of atr1
   * @param value the new value of atr1
   */
  void setAtr1(Engine value)
  {
    atr1 = value;
  }

  /**
   * Get the value of atr1
   * @return the value of atr1
   */
  Engine getAtr1()
  {
    return atr1;
  }

  /**
   * Set the value of atr2
   * @param value the new value of atr2
   */
  void setAtr2(PID value)
  {
    atr2 = value;
  }

  /**
   * Get the value of atr2
   * @return the value of atr2
   */
  PID getAtr2()
  {
    return atr2;
  }

  void initAttributes();

};

#endif // CONTROLSYSTEM_H
