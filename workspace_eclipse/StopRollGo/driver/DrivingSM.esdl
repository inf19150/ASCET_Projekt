package driver;
import resources.m;

class DrivingSM {
	@set
	m proximity = 0.0[m];
	@set
	boolean green = false;
	@get
	boolean cruising = true;

	@generated("statemachine", "000000")
	public void drivingSMStatemachineTrigger() triggers DrivingSMStatemachine;

	@generated("statemachine", "688f0b8c")
	statemachine DrivingSMStatemachine using DrivingSMStatemachineStates {
		start ACCState;

		state ACCState {
			static {
				cruising = true;
			}
			transition 40.0[m] <= proximity && proximity <= 100.0[m] && !green to BrakeState;
		}

		state BrakeState {
			static {
				cruising = false;
			}
			transition green to ACCState;
		}
	}
}
@generated("statemachine", "000000")
type DrivingSMStatemachineStates is enum {
	ACCState,
	BrakeState
};