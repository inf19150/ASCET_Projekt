package environment;
import resources.s;

class LightSM {
	@set
	s elapsedTime = 0.0[s];
	@get
	boolean red = false;
	@get
	boolean yellow = false;
	@get
	boolean green = false;

	@generated("statemachine", "000000")
	public void trafficLightSMStatemachineTrigger() triggers TrafficLightSMStatemachine;

	@generated("statemachine", "11066d63")
	statemachine TrafficLightSMStatemachine using TrafficLightSMStatemachineStates {
		start yellowState;

		state yellowState {
			static {
				red = false;
				yellow = true;
				green = false;
			}
			transition elapsedTime >= 3.0[s] to redState;
		}

		state greenState {
			static {
				red = false;
				yellow = false;
				green = true;
			}
			transition elapsedTime >= 0.0[s] && elapsedTime <= 44.0[s] to yellowState;
		}

		state redState {
			static {
				red = true;
				yellow = false;
				green = false;
			}
			transition elapsedTime >= 42.0[s] to yellowRedState;
		}

		state yellowRedState {
			static {
				red = true;
				yellow = true;
				green = false;
			}
			transition elapsedTime >= 44.0[s] to greenState;
		}
	}
}
@generated("statemachine", "000000")
type TrafficLightSMStatemachineStates is enum {
	yellowState,
	greenState,
	redState,
	yellowRedState
};