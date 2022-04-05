package UnitTests;
import resources.s;
import environment.LightSM;
import assertLib.Assert;

static class UnitTest_LightSM {
	private LightSM LightSM_testInstance;
	
	@Test
	public void testLightSM(){
		Assert.assertFalse(LightSM_testInstance.red);
		Assert.assertFalse(LightSM_testInstance.yellow);
		Assert.assertFalse(LightSM_testInstance.green);
		
		LightSM_testInstance.trafficLightSMStatemachineTrigger();		
		Assert.assertFalse(LightSM_testInstance.red);
		Assert.assertTrue(LightSM_testInstance.yellow);
		Assert.assertFalse(LightSM_testInstance.green);
		
		LightSM_testInstance.elapsedTime = 5.0 [s];
		LightSM_testInstance.trafficLightSMStatemachineTrigger();
		LightSM_testInstance.trafficLightSMStatemachineTrigger();
		Assert.assertTrue(LightSM_testInstance.red);
		Assert.assertFalse(LightSM_testInstance.yellow);
		Assert.assertFalse(LightSM_testInstance.green);
		
		LightSM_testInstance.elapsedTime = 42.0 [s];
		LightSM_testInstance.trafficLightSMStatemachineTrigger();
		LightSM_testInstance.trafficLightSMStatemachineTrigger();
		Assert.assertTrue(LightSM_testInstance.red);
		Assert.assertTrue(LightSM_testInstance.yellow);
		Assert.assertFalse(LightSM_testInstance.green);
		
		LightSM_testInstance.elapsedTime = 45.0 [s];
		LightSM_testInstance.trafficLightSMStatemachineTrigger();
		LightSM_testInstance.trafficLightSMStatemachineTrigger();
		Assert.assertFalse(LightSM_testInstance.red);
		Assert.assertFalse(LightSM_testInstance.yellow);
		Assert.assertTrue(LightSM_testInstance.green);
		
		LightSM_testInstance.elapsedTime = 59.0 [s];
		LightSM_testInstance.trafficLightSMStatemachineTrigger();
		LightSM_testInstance.trafficLightSMStatemachineTrigger();
		Assert.assertFalse(LightSM_testInstance.red);
		Assert.assertFalse(LightSM_testInstance.yellow);
		Assert.assertTrue(LightSM_testInstance.green);
		
		LightSM_testInstance.elapsedTime = 1.0 [s];
		LightSM_testInstance.trafficLightSMStatemachineTrigger();
		LightSM_testInstance.trafficLightSMStatemachineTrigger();
		Assert.assertFalse(LightSM_testInstance.red);
		Assert.assertTrue(LightSM_testInstance.yellow);
		Assert.assertFalse(LightSM_testInstance.green);	
	}
}