
#ifndef ВЕНТИЛЯТОР_ДВИГАТЕЛЬ__H
#define ВЕНТИЛЯТОР_ДВИГАТЕЛЬ__H

#include <vector>



/**
  * class Вентилятор_Двигатель_
  * 
  */

class Вентилятор_Двигатель_
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Вентилятор_Двигатель_();

  /**
   * Empty Destructor
   */
  virtual ~Вентилятор_Двигатель_();

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

  bool вкл_выкл;
  float Мощность;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of вкл_выкл
   * @param value the new value of вкл_выкл
   */
  void setВкл_выкл(bool value)
  {
    вкл_выкл = value;
  }

  /**
   * Get the value of вкл_выкл
   * @return the value of вкл_выкл
   */
  bool getВкл_выкл()
  {
    return вкл_выкл;
  }

  /**
   * Set the value of Мощность
   * @param value the new value of Мощность
   */
  void setМощность(float value)
  {
    Мощность = value;
  }

  /**
   * Get the value of Мощность
   * @return the value of Мощность
   */
  float getМощность()
  {
    return Мощность;
  }

  void initAttributes();

};

#endif // ВЕНТИЛЯТОР_ДВИГАТЕЛЬ__H
