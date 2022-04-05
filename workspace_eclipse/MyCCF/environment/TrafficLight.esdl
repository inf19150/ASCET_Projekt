package environment;
import resources.m;

class TrafficLight {
	boolean red = false;
	boolean yellow = false;
	boolean green = false;
	boolean isVisible = false;
	m proximity = 0.0[m];
	m position = 0.0[m];

	public void setPosition(m pos) {
		this.position = pos;
		this.proximity = pos;
	}

	public void setRed(boolean r) {
		this.red = r;
	}

	public void setYellow(boolean y) {
		this.yellow = y;
	}

	public void setGreen(boolean g) {
		this.green = g;
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