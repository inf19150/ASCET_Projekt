package UnitTests;
import resources.curve_a_real;
import resources.a;
import resources.ms;
import resources.kmh;
import resources.m;
import assertLib.Assert;

type ArrayofTwo is array [2] of real;

static class UnitTest_driver {
	characteristic curve_a_real InverseBrakeMomentum[5] = {{-4.0[a], -3.0[a], -2.0[a], -1.0[a], 0.0[a]}, {100.0, 80.0, 60.0, 40.0, 0.0}};
	const kmh targetVelocity = 50.0[kmh];
	real power = 0.0;
	real brake = 0.0;
	ArrayofTwo resultArray = {0.0, 0.0};

	@Test
	public void testDriverCruising() {
		boolean testCruising = true;
		m testProximity = 0.0[m];
		kmh testV = 30.0[kmh];

		reset();

		power = resultArray[0];
		brake = resultArray[1];

		Assert.assertNear(power, 0.0, 0.001);
		Assert.assertNear(brake, 0.0, 0.001);

		testCalc(testV, testProximity, testCruising);
		power = resultArray[0];
		brake = resultArray[1];
		Assert.assertNear(power, 100.0, 0.001);
		Assert.assertNear(brake, 0.0, 0.001);

		testV = 70.0[kmh];
		testCalc(testV, testProximity, testCruising);
		power = resultArray[0];
		brake = resultArray[1];
		Assert.assertNear(power, 0.0, 0.001);
		Assert.assertNear(brake, 70.0, 0.001);
	}

	@Test
	public void testDriverNotCruising() {
		boolean testCruising = false;
		m testProximity = 70.0[m];
		kmh testV = 50.0[kmh];

		reset();
		
		power = resultArray[0];
		brake = resultArray[1];

		Assert.assertNear(power, 0.0, 0.001);
		Assert.assertNear(brake, 0.0, 0.001);
		
		testCalc(testV, testProximity, testCruising);
		
		power = resultArray[0];
		brake = resultArray[1];
		
		Assert.assertNear(power, 0.0, 0.001);
		Assert.assertNear(brake, 45.0, 2.0);
	}
	
	@Test
	public void testDriverNotCruisingClose() {
		boolean testCruising = false;
		m testProximity = 40.0[m];
		kmh testV = 50.0[kmh];

		reset();
		
		power = resultArray[0];
		brake = resultArray[1];

		Assert.assertNear(power, 0.0, 0.001);
		Assert.assertNear(brake, 0.0, 0.001);
		
		testCalc(testV, testProximity, testCruising);
		
		power = resultArray[0];
		brake = resultArray[1];
		
		Assert.assertNear(power, 0.0, 0.001);
		Assert.assertNear(brake, 60.0, 2.0);
	}

	public void reset() {
		resultArray = {0.0, 0.0};
	}

	public void testCalc(kmh v, m visibleProximity, boolean cruising) {
		real requiredBrakeMomentum = 0.0;
		real power = 0.0;
		real brake = 0.0;

		requiredBrakeMomentum = InverseBrakeMomentum.getAt((((1.0[ms] * (v / 3.6[kmh])) * (1.0[ms] * (v / 3.6[kmh]))) / ((visibleProximity + 8.0[m]) * -2.0)));

		if (cruising) {
			if (v >= targetVelocity) {
				power = 0.0;
				brake = 70.0;
			} else {
				power = 100.0;
				brake = 0.0;
			}
		} else {
			power = 0.0;
			brake = requiredBrakeMomentum;
		}
		resultArray = {power, brake};
	}
}