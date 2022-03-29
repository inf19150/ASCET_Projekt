package environment;
import myCar.TimeBase;
import resources.s;
import resources.TrafficLightMessages;

static class Light
writes TrafficLightMessages.red, TrafficLightMessages.yellow, TrafficLightMessages.green {
	s elapsedTime;
	LightSM TrafficLightSM_instance;

	@thread
	@generated("blockdiagram", "3c8c66cd")
	public void calc() {
		elapsedTime = (TimeBase.deltaT + elapsedTime); // Main/calc 1
		TrafficLightSM_instance.trafficLightSMStatemachineTrigger(); // Main/calc 2
		TrafficLightSM_instance.elapsedTime = elapsedTime; // Main/calc 3
		if (elapsedTime >= 60.0[s]) {
			elapsedTime = 0.0[s]; // Main/calc 4/if-then 1
		} // Main/calc 4
		TrafficLightMessages.red = TrafficLightSM_instance.red; // Main/calc 5
		TrafficLightMessages.yellow = TrafficLightSM_instance.yellow; // Main/calc 6
		TrafficLightMessages.green = TrafficLightSM_instance.green; // Main/calc 7
	}
}