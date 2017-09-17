#ifndef PID_H
#define PID_H

#include <iostream>
#include <list>

class PID {
public:
  /*
  * Errors
  */
  double p_error;
  double i_error;
  double d_error;
  double prev_cte;
  double sum_cte;

  bool first_time;

  double previous_time;
  /*
  * Coefficients
  */ 
  double Kp;
  double Ki;
  double Kd;

  std::list<double> cte_history;
  

  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);

  /*
  * Calculate the total PID error.
  */
  double TotalError();
};

#endif /* PID_H */
