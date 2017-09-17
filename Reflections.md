# Reflections

The PID parameters were tuned manually using the following algorithm:
- Set P, I, and D to be zeros initially.
- Increase the value of P until sustained oscillations are seen in the vehicle's position in the simulator.
- Once the value of P is settled, increase the value of D until the oscillations subside. Stop increasing D when further increases do not contribute toward mitigating the oscillations.
- Once the value of P and D are settled, increase the value of I so that the vehicle follows the center line as closely as possible.

Using this algorithm, the values of P, I, and D arrived at were 0.25, 0.001, and 0.01. The throttle was kept constant at 0.5. No feedback was provided for the throttle.
