package myCar;
import resources.CarMessages;
import resources.s;
import resources.a;
import resources.kmh;

static class myCar
reads CarMessages.power, CarMessages.brake, CarMessages.steering
writes CarMessages.v, CarMessages.x, CarMessages.y, CarMessages.bearing, CarMessages.dist {
	myDrive_3 myVehicle;
	kmh v = 0.0[kmh];
	s time = 0.0[s];
	characteristic a g = 0.0[a];
	characteristic real ^delta = 0.0;

	@thread
	@generated("blockdiagram", "7b1fb786")
	public void calc() {
		myVehicle.move(CarMessages.power, CarMessages.brake, TimeBase.deltaT, g, CarMessages.steering); // Main/calc 1
		CarMessages.v = myVehicle.v; // Main/calc 2
		CarMessages.x = myVehicle.x; // Main/calc 3
		CarMessages.y = myVehicle.y; // Main/calc 4
		time = (TimeBase.deltaT + time); // Main/calc 5
		CarMessages.bearing = myVehicle.bearing; // Main/calc 6
		CarMessages.dist = myVehicle.dist; // Main/calc 7
	}
}