package UnitTests;
import resources.m;
import driver.DrivingSM;
import assertLib.Assert;

static class UnitTest_DrivingSM {
	private DrivingSM DrivingSM_testInstance;
	
	@Test
	public void testDrivingSMVisibleGreater40(){
		m testProximity = 70.0 [m];
		boolean testGreen = false;
			
		Assert.assertTrue(DrivingSM_testInstance.cruising);
		DrivingSM_testInstance.proximity = testProximity;
		DrivingSM_testInstance.green = testGreen;
		DrivingSM_testInstance.drivingSMStatemachineTrigger();
		DrivingSM_testInstance.drivingSMStatemachineTrigger();
		Assert.assertFalse(DrivingSM_testInstance.cruising);
		
		testGreen = true;
		DrivingSM_testInstance.green = testGreen;
		DrivingSM_testInstance.drivingSMStatemachineTrigger();
		DrivingSM_testInstance.drivingSMStatemachineTrigger();
		Assert.assertTrue(DrivingSM_testInstance.cruising);
	}
	
	@Test
	public void testDrivingSMVisibleLess40(){
		m testProximity = 30.0 [m];
		boolean testGreen = false;
			
		Assert.assertTrue(DrivingSM_testInstance.cruising);
		DrivingSM_testInstance.proximity = testProximity;
		DrivingSM_testInstance.green = testGreen;
		DrivingSM_testInstance.drivingSMStatemachineTrigger();
		DrivingSM_testInstance.drivingSMStatemachineTrigger();
		Assert.assertTrue(DrivingSM_testInstance.cruising);
		
		testGreen = true;
		DrivingSM_testInstance.green = testGreen;
		DrivingSM_testInstance.drivingSMStatemachineTrigger();
		DrivingSM_testInstance.drivingSMStatemachineTrigger();
		Assert.assertTrue(DrivingSM_testInstance.cruising);
	}
	
	@Test
	public void testDrivingSMInvisible(){
		m testProximity = 110.0 [m];
		boolean testGreen = false;
			
		Assert.assertTrue(DrivingSM_testInstance.cruising);
		DrivingSM_testInstance.proximity = testProximity;
		DrivingSM_testInstance.green = testGreen;
		DrivingSM_testInstance.drivingSMStatemachineTrigger();
		DrivingSM_testInstance.drivingSMStatemachineTrigger();
		Assert.assertTrue(DrivingSM_testInstance.cruising);
		
		testGreen = true;
		DrivingSM_testInstance.green = testGreen;
		DrivingSM_testInstance.drivingSMStatemachineTrigger();
		DrivingSM_testInstance.drivingSMStatemachineTrigger();
		Assert.assertTrue(DrivingSM_testInstance.cruising);
	}
}