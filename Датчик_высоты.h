
#ifndef ДАТЧИК_ВЫСОТЫ_H
#define ДАТЧИК_ВЫСОТЫ_H

#include <vector>



/**
  * class Датчик_высоты
  * 
  */

class Датчик_высоты
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Датчик_высоты();

  /**
   * Empty Destructor
   */
  virtual ~Датчик_высоты();

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

  float Текущая_высота;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Текущая_высота
   * @param value the new value of Текущая_высота
   */
  void setТекущая_высота(float value)
  {
    Текущая_высота = value;
  }

  /**
   * Get the value of Текущая_высота
   * @return the value of Текущая_высота
   */
  float getТекущая_высота()
  {
    return Текущая_высота;
  }

  void initAttributes();

};

#endif // ДАТЧИК_ВЫСОТЫ_H
