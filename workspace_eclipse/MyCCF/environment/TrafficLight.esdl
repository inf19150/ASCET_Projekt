package environment;
import resources.m;

class TrafficLight {
	boolean red;
	boolean yellow;
	boolean green;
	boolean isVisible;
	m proximity;
	m position;

	public initializer initLight() {
		red = false;
		yellow = true;
		green = false;
		isVisible = false;
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
	public boolean getVisible(){
		return this.isVisible;
	}

	@no_side_effect
	public m getProximity() {
		return this.proximity;
	}
	
	private void updateVisibility() {
		this.isVisible = between(this.proximity, 0.0[m], 100.0[m]);
	}

	public void updateProximity(m carElapsed) {
		this.proximity = this.position - carElapsed;
		this.updateVisibility();
	}
}