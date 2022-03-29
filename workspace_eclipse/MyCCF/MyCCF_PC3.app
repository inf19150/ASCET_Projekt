application {
	class myCar.myCar
	class myCar.TimeBase
}
schedule {
	startup {
	}
	shutdown {
	}
	task Task0 priority 0 period 10ms delay 0ms {
		process myCar.myCar.calc
	}
}