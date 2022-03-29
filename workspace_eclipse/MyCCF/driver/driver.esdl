package driver;
import resources.CarMessages;

static class driver
writes CarMessages.power, CarMessages.brake {
	@thread
	public void calc() {
		CarMessages.power = 20.0;
		CarMessages.brake = 0.0;
	}
}