package environment;
import resources.m;
import resources.CarMessages;
import resources.TrafficLightMessages;

static class TrafficLightController
reads TrafficLightMessages.red, TrafficLightMessages.yellow, TrafficLightMessages.green, CarMessages.x
writes TrafficLightMessages.flashed {
	public TrafficLight TrafficLight_instance;
	public TrafficLight TrafficLight_instance_2;
	public TrafficLight TrafficLight_instance_3;
	m carElapsed;

	@thread
	@generated("blockdiagram", "55563cad")
	public void init() {
		TrafficLight_instance.setPosition(300.0[m]); // Main/init 1
		TrafficLight_instance_2.setPosition(500.0[m]); // Main/init 2
		TrafficLight_instance_3.setPosition(900.0[m]); // Main/init 3
	}

	@thread
	@generated("blockdiagram", "ae8d44b3")
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
		carElapsed = CarMessages.x; // Main/calc 10
		TrafficLight_instance_2.updateProximity(carElapsed); // Main/calc 11
		TrafficLight_instance_3.updateProximity(carElapsed); // Main/calc 12
		TrafficLight_instance.updateProximity(carElapsed); // Main/calc 13
		TrafficLightMessages.flashed = FlashLight.calc(TrafficLight_instance.getProximity(), TrafficLight_instance_2.getProximity(), TrafficLight_instance_3.getProximity(), TrafficLightMessages.red); // Main/calc 14
	}
}