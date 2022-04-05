package UnitTests;
import resources.m;
import environment.TrafficLight;
import assertLib.Assert;

static class UnitTest_TrafficLight {
	private TrafficLight TrafficLight_testInstance;

	@Test
	public void testInvisiblePosition() {
		TrafficLight_testInstance.setPosition(500.0[m]);
		Assert.assertNear(500.0, TrafficLight_testInstance.getProximity() / 1.0[m], 0.001);
		Assert.assertNear(500.0, TrafficLight_testInstance.getPosition() / 1.0[m], 0.001);
		Assert.assertFalse(TrafficLight_testInstance.getVisible());
	}

	@Test
	public void testVisiblePosition() {
		TrafficLight_testInstance.setPosition(50.0[m]);
		Assert.assertNear(50.0, TrafficLight_testInstance.getProximity() / 1.0[m], 0.001);
		Assert.assertNear(50.0, TrafficLight_testInstance.getPosition() / 1.0[m], 0.001);
		Assert.assertTrue(TrafficLight_testInstance.getVisible());
	}

	@Test
	public void testUpdateProximity() {
		TrafficLight_testInstance.setPosition(500.0[m]);
		Assert.assertNear(500.0, TrafficLight_testInstance.getProximity() / 1.0[m], 0.001);
		Assert.assertNear(500.0, TrafficLight_testInstance.getPosition() / 1.0[m], 0.001);
		Assert.assertFalse(TrafficLight_testInstance.getVisible());
		TrafficLight_testInstance.updateProximity(450.0[m]);
		Assert.assertNear(50.0, TrafficLight_testInstance.getProximity() / 1.0[m], 0.001);
		Assert.assertNear(500.0, TrafficLight_testInstance.getPosition() / 1.0[m], 0.001);
		Assert.assertTrue(TrafficLight_testInstance.getVisible());
	}

	@Test
	public void testRed() {
		Assert.assertFalse(TrafficLight_testInstance.getRed());
		TrafficLight_testInstance.setRed(true);
		Assert.assertTrue(TrafficLight_testInstance.getRed());
		TrafficLight_testInstance.setRed(false);
		Assert.assertFalse(TrafficLight_testInstance.getRed());
	}

	@Test
	public void testGreen() {
		Assert.assertFalse(TrafficLight_testInstance.getGreen());
		TrafficLight_testInstance.setGreen(true);
		Assert.assertTrue(TrafficLight_testInstance.getGreen());
		TrafficLight_testInstance.setGreen(false);
		Assert.assertFalse(TrafficLight_testInstance.getGreen());
	}

	@Test
	public void testYellow() {
		Assert.assertFalse(TrafficLight_testInstance.getYellow());
		TrafficLight_testInstance.setYellow(true);
		Assert.assertTrue(TrafficLight_testInstance.getYellow());
		TrafficLight_testInstance.setYellow(false);
		Assert.assertFalse(TrafficLight_testInstance.getYellow());
	}
}