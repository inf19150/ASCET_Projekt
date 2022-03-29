application {
	class myCar.TimeBase
	class driver.driver
	class myCar.myCar
	class environment.TrafficLightController
	class environment.Light
	class environment.FlashLight
}
schedule {
	startup {
		process environment.TrafficLightController.init
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process driver.driver.calc
		process myCar.myCar.calc
		process environment.Light.calc
		process environment.TrafficLightController.calc
	}
}