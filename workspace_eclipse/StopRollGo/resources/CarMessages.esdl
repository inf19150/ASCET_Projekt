package resources;

data interface CarMessages {
	@a2l_unit_label("km/h")
	velocity v = 0.0[kmh];
	real power = 0.0;
	real brake = 0.0;
	real steering = 0.0;
	real bearing = 0.0;
	// Use the dist of the car in the lap, because it resets itself
	@a2l_unit_label("m")
	m dist = 0.0[m];
	@a2l_unit_label("m")
	m x = 0.0[m];
	@a2l_unit_label("m")
	m y = 0.0[m];
}