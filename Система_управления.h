
#ifndef СИСТЕМА_УПРАВЛЕНИЯ_H
#define СИСТЕМА_УПРАВЛЕНИЯ_H

#include <vector>



/**
  * class Система_управления
  * 
  */

class Система_управления
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Система_управления();

  /**
   * Empty Destructor
   */
  virtual ~Система_управления();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //

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

  float Высота_подъёма;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Высота_подъёма
   * @param value the new value of Высота_подъёма
   */
  void setВысота_подъёма(float value)
  {
    Высота_подъёма = value;
  }

  /**
   * Get the value of Высота_подъёма
   * @return the value of Высота_подъёма
   */
  float getВысота_подъёма()
  {
    return Высота_подъёма;
  }

  void initAttributes();

};

#endif // СИСТЕМА_УПРАВЛЕНИЯ_H
