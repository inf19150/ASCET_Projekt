package UnitTests;
import resources.s;
import assertLib.Assert;

static class UnitTest_Light {
	s elapsedTime = 0.0[s];

	@Test
	public void testTimer() {
		Assert.assertNear(elapsedTime / 1.0[s], 0.0, 0.001);

		testCalc(5.0[s]);
		Assert.assertNear(elapsedTime / 1.0[s], 5.0, 0.001);

		testCalc(30.0[s]);
		Assert.assertNear(elapsedTime / 1.0[s], 35.0, 0.001);

		testCalc(20.0[s]);
		Assert.assertNear(elapsedTime / 1.0[s], 55.0, 0.001);

		testCalc(4.0[s]);
		Assert.assertNear(elapsedTime / 1.0[s], 59.0, 0.001);

		testCalc(1.0[s]);
		Assert.assertNear(elapsedTime / 1.0[s], 0.0, 0.001);

		testCalc(60.0[s]);
		Assert.assertNear(elapsedTime / 1.0[s], 0.0, 0.001);

		testCalc(45.0[s]);
		Assert.assertNear(elapsedTime / 1.0[s], 45.0, 0.001);
	}

	public void testCalc(s deltaT) {
		elapsedTime = (deltaT + elapsedTime);
		if (elapsedTime >= 60.0[s]) {
			elapsedTime = 0.0[s];
		}
	}
}