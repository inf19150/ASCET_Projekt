package environment;
import resources.m;

class TrafficLight {
	private boolean red = false;
	private boolean yellow = false;
	private boolean green = false;
	private boolean isVisible = false;
	private m proximity = 0.0[m];
	private m position = 0.0[m];

	/**
	 * Sets the position of the traffic light on the track in meters.
	 * Initially set.
	 * Also sets the proximity to the car, because it starts at 0 meters.
	 * After the proximity is updated, the function updateVisibility() is called.
	 * 
	 * @param pos Position of traffic light in meters
	 */
	public void setPosition(m pos) {
		this.position = pos;
		this.proximity = pos;
		this.updateVisibility();
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
	
	/**
	 * To comply with R2, a traffic light should only be visible within 100 meters of the car.
	 * The boolean isVisible describes this feature.
	 * 
	 * Updates Boolean isVisible.
	 */
	private void updateVisibility() {
		this.isVisible = between(this.proximity, 0.0[m], 100.0[m]);
	}

	/**
	 * Updates the proximity to the car, based on the position of the car and its own position.
	 * After the proximity is updated, the function updateVisibility() is called.
	 * 
	 * @param carElapsed Position of the car on the track in meters.
	 */
	public void updateProximity(m carElapsed) {
		this.proximity = this.position - carElapsed;
		this.updateVisibility();
	}
	
	/**
	 * Only for Unit testing, returns position.
	 */
	@no_side_effect
	public m getPosition() {
		return this.position;
	}
	
	/**
	 * Only for Unit testing, returns red.
	 */
	@no_side_effect
	public boolean getRed() {
		return this.red;
	}

	/**
	 * Only for Unit testing, returns yellow.
	 */
	@no_side_effect
	public boolean getYellow() {
		return this.yellow;
	}
	
	/**
	 * Only for Unit testing, returns green.
	 */
	@no_side_effect
	public boolean getGreen() {
		return this.green;
	}
}