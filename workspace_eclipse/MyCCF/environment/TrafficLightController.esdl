package environment;
import resources.m;
import resources.TrafficLightMessages;
import resources.CarMessages;

static class TrafficLightController
reads TrafficLightMessages.red, TrafficLightMessages.yellow, TrafficLightMessages.green, CarMessages.dist
writes TrafficLightMessages.flashed, TrafficLightMessages.visibleProximity {
	private TrafficLight TrafficLight_instance;
	private TrafficLight TrafficLight_instance_2;
	private TrafficLight TrafficLight_instance_3;

	@thread
	@generated("blockdiagram", "aba4ef2b")
	public void init() {
		TrafficLight_instance.setPosition(300.0[m]); // Main/init 1
		TrafficLight_instance_2.setPosition(500.0[m]); // Main/init 2
		TrafficLight_instance_3.setPosition(900.0[m]); // Main/init 3
	}

	@thread
	@generated("blockdiagram", "1ab9c89c")
	public void calc() {
		TrafficLight_instance.setRed(TrafficLightMessages.red); // Main/calc 1
		TrafficLight_instance_2.setRed(TrafficLightMessages.red); // Main/calc 2
		TrafficLight_instance_3.setRed(TrafficLightMessages.red); // Main/calc 3
		TrafficLight_instance.setYellow(TrafficLightMessages.yellow); // Main/calc 4
		TrafficLight_instance_2.setYellow(TrafficLightMessages.yellow); // Main/calc 5
		TrafficLight_instance_3.setYellow(TrafficLightMessages.yellow); // Main/calc 6
		TrafficLight_instance.setGreen(TrafficLightMessages.green); // Main/calc 7
		TrafficLight_instance_2.setGreen(TrafficLightMessages.green); // Main/calc 8
		TrafficLight_instance_3.setGreen(TrafficLightMessages.green); // Main/calc 9
		TrafficLight_instance.updateProximity(CarMessages.dist); // Main/calc 10
		TrafficLight_instance_2.updateProximity(CarMessages.dist); // Main/calc 11
		TrafficLight_instance_3.updateProximity(CarMessages.dist); // Main/calc 12
		TrafficLightMessages.visibleProximity = 0.0[m]; // Main/calc 13
		if (TrafficLight_instance.getVisible()) {
			TrafficLightMessages.visibleProximity = TrafficLight_instance.getProximity(); // Main/calc 14/if-then 1
		} // Main/calc 14
		if (TrafficLight_instance_2.getVisible()) {
			TrafficLightMessages.visibleProximity = TrafficLight_instance_2.getProximity(); // Main/calc 15/if-then 1
		} // Main/calc 15
		if (TrafficLight_instance_3.getVisible()) {
			TrafficLightMessages.visibleProximity = TrafficLight_instance_3.getProximity(); // Main/calc 16/if-then 1
		} // Main/calc 16
		TrafficLightMessages.flashed = FlashLight.calc(TrafficLight_instance.getProximity(), TrafficLight_instance_2.getProximity(), TrafficLight_instance_3.getProximity(), TrafficLightMessages.red); // Main/calc 17
	}
}