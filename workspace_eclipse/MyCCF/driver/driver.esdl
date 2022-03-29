package driver;
import resources.CarMessages;

static class driver
writes CarMessages.driverPower, CarMessages.driverBrake {
	@thread
	public void calc() {
		CarMessages.driverPower = 20.0;
		CarMessages.driverBrake = 0.0;
	}
}