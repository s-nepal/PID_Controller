#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_in, double Ki_in, double Kd_in) {
	Kp = Kp_in;
	Ki = Ki_in;
	Kd = Kd_in;

	first_time = true;
	sum_cte = 0;
	previous_time = 0;
}

void PID::UpdateError(double cte) {

	if(first_time){
		// If this is the first time update is occurring,
		// initialize the previous cte to the current cte.
		// d_error below will therefore be 0 during the first
		// iteration.
		first_time = false;
		prev_cte = cte;
	}
	
	double current_time = clock();
	double dt = (current_time - previous_time)/CLOCKS_PER_SEC;
	previous_time = current_time;

	sum_cte += cte;

	p_error = cte;
	i_error = sum_cte;
	d_error = (cte - prev_cte)/dt;

	prev_cte = cte;
}

double PID::TotalError() {

	return 0;
}

