application {
	class myCar.myCar
	class myCar.TimeBase
	class driver.driver
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process driver.driver.calc
		process myCar.myCar.calc
	}
}