package myCar;
import resources.CarMessages;
import resources.s;
import resources.a;
import resources.kmh;

static class myCar
reads CarMessages.power, CarMessages.brake, CarMessages.steering, CarMessages.driverPower, CarMessages.driverBrake
writes CarMessages.power, CarMessages.brake, CarMessages.v, CarMessages.x, CarMessages.y, CarMessages.bearing {
	myDrive_3 myVehicle;
	kmh v = 0.0[kmh];
	s time = 0.0[s];
	characteristic a g = 0.0[a];
	characteristic real ^delta = 0.0;

	@thread
	@generated("blockdiagram", "6c7ad187")
	public void calc() {
		CarMessages.power = CarMessages.driverPower; // calc_spec/calc 1
		CarMessages.brake = CarMessages.driverBrake; // calc_spec/calc 2
		myVehicle.move(CarMessages.power, CarMessages.brake, TimeBase.deltaT, g, CarMessages.steering); // calc_spec/calc 3
		CarMessages.v = myVehicle.v; // calc_spec/calc 4
		CarMessages.x = myVehicle.x; // calc_spec/calc 5
		CarMessages.y = myVehicle.y; // calc_spec/calc 6
		time = (TimeBase.deltaT + time); // calc_spec/calc 7
		CarMessages.bearing = myVehicle.bearing; // calc_spec/calc 8
	}
}