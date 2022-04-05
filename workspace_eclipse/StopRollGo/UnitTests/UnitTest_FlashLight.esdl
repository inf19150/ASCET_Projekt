package UnitTests;
import environment.FlashLight;
import resources.m;
import assertLib.Assert;

static class UnitTest_FlashLight {
	boolean flashed = false;

	@Test
	public void testFlashing() {
		boolean red = true;
		m proximity1 = 0.0[m];
		m proximity2 = 200.0[m];
		m proximity3 = 600.0[m];

		flashed = FlashLight.calc(proximity1, proximity2, proximity3, red);
		Assert.assertTrue(flashed);

		proximity1 = -200.0[m];
		proximity2 = 0.0[m];
		proximity3 = 400.0[m];

		flashed = FlashLight.calc(proximity1, proximity2, proximity3, red);
		Assert.assertTrue(flashed);

		proximity1 = -600.0[m];
		proximity2 = -400.0[m];
		proximity3 = 0.0[m];

		flashed = FlashLight.calc(proximity1, proximity2, proximity3, red);
		Assert.assertTrue(flashed);
	}

	@Test
	public void testNotFlashing() {
		boolean red = false;
		m proximity1 = 0.0[m];
		m proximity2 = 200.0[m];
		m proximity3 = 600.0[m];

		flashed = FlashLight.calc(proximity1, proximity2, proximity3, red);
		Assert.assertFalse(flashed);

		proximity1 = -200.0[m];
		proximity2 = 0.0[m];
		proximity3 = 400.0[m];

		flashed = FlashLight.calc(proximity1, proximity2, proximity3, red);
		Assert.assertFalse(flashed);

		proximity1 = -600.0[m];
		proximity2 = -400.0[m];
		proximity3 = 0.0[m];

		flashed = FlashLight.calc(proximity1, proximity2, proximity3, red);
		Assert.assertFalse(flashed);
	}
}