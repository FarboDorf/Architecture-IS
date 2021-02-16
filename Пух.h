
#ifndef ПУХ_H
#define ПУХ_H

#include <vector>



/**
  * class Пух
  * 
  */

class Пух
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Пух();

  /**
   * Empty Destructor
   */
  virtual ~Пух();

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

  float масса;
  float Вес;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of масса
   * @param value the new value of масса
   */
  void setМасса(float value)
  {
    масса = value;
  }

  /**
   * Get the value of масса
   * @return the value of масса
   */
  float getМасса()
  {
    return масса;
  }

  /**
   * Set the value of Вес
   * @param value the new value of Вес
   */
  void setВес(float value)
  {
    Вес = value;
  }

  /**
   * Get the value of Вес
   * @return the value of Вес
   */
  float getВес()
  {
    return Вес;
  }

  void initAttributes();

};

#endif // ПУХ_H
