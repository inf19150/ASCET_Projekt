package environment;
import resources.m;

class TrafficLight {
	boolean red;
	boolean yellow;
	boolean green;
	m proximity;
	m position;

	public initializer initLight() {
		red = false;
		yellow = true;
		green = false;
		position = 0.0[m];
		proximity = 0.0[m];
	}

	public void setPosition(m position) {
		this.position = position;
		this.proximity = position;
	}

	public void setRed(boolean red) {
		this.red = red;
	}

	public void setYellow(boolean yellow) {
		this.yellow = yellow;
	}

	public void setGreen(boolean green) {
		this.green = green;
	}

	@no_side_effect
	public m getProximity() {
		return this.proximity;
	}

	public void updateProximity(m carElapsed) {
		this.proximity = this.position - carElapsed;
	}
}