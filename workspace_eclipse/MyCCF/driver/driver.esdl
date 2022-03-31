package driver;
import resources.CarMessages;
import resources.kmh;
import resources.TrafficLightMessages;
import resources.a;
import resources.m;
import resources.s;
import resources.curve_a_real;
import resources.ms;
import SystemLib.Miscellaneous.EdgeFalling;

static class driver
writes CarMessages.power, CarMessages.brake, CarMessages.x
reads CarMessages.v, TrafficLightMessages.visibleProximity, TrafficLightMessages.green, CarMessages.x {
	const kmh targetVelocity = 50.0[kmh];
	DrivingSM DrivingSM_instance;
	characteristic curve_a_real InverseBrakeMomentum[6] = {{-4.0[a], -3.0[a], -2.0[a], -1.0[a], 0.0[a], 0.0[a]}, {100.0, 80.0, 60.0, 40.0, 0.0, 1.0}};
	real requiredBrakeMomentum;
	EdgeFalling EdgeFalling_instance;

	@thread
	@generated("blockdiagram", "96e088ce")
	public void calc() {
		DrivingSM_instance.proximity = TrafficLightMessages.visibleProximity; // calc_spec/calc 1
		DrivingSM_instance.green = TrafficLightMessages.green; // calc_spec/calc 2
		DrivingSM_instance.drivingSMStatemachineTrigger(); // calc_spec/calc 3
		EdgeFalling_instance.compute(DrivingSM_instance.cruising); // calc_spec/calc 4
		if (EdgeFalling_instance.value()) {
			requiredBrakeMomentum = InverseBrakeMomentum.getAt((((1.0[ms] * (CarMessages.v / 3.6[kmh])) * (1.0[ms] * (CarMessages.v / 3.6[kmh]))) / ((TrafficLightMessages.visibleProximity - 5.0[m]) * -2.0))); // calc_spec/calc 5/if-then 1
		} // calc_spec/calc 5
		if (DrivingSM_instance.cruising) {
			if (CarMessages.v >= targetVelocity) {
				CarMessages.power = 0.0; // calc_spec/calc 6/if-then 1/if-then 1
				CarMessages.brake = 70.0; // calc_spec/calc 6/if-then 1/if-then 2
			} else {
				CarMessages.power = 100.0; // calc_spec/calc 6/if-then 1/if-else 1
				CarMessages.brake = 0.0; // calc_spec/calc 6/if-then 1/if-else 2
			} // calc_spec/calc 6/if-then 1
		} else {
			CarMessages.power = 0.0; // calc_spec/calc 6/if-else 1
			CarMessages.brake = requiredBrakeMomentum; // calc_spec/calc 6/if-else 2
		} // calc_spec/calc 6
	}
}