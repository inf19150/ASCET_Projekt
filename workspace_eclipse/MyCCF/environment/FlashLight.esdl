package environment;
import resources.m;

static class FlashLight {
	const m upperLimit = 0.0[m];
	const m lowerLimit = -2.0[m];

	@generated("blockdiagram", "a8e08011")
	public boolean calc(m in proximity1, m in proximity2, m in proximity3, boolean in isRed) {
		return(isRed && ((between(proximity1, lowerLimit, upperLimit) || between(proximity2, lowerLimit, upperLimit)) || between(proximity3, lowerLimit, upperLimit))); // calc_spec/calc 1
	}
}