package environment;
import resources.m;

static class FlashLight {
	const m upperLimit = 0.0[m];
	const m lowerLimit = -2.0[m];

	@no_side_effect
	@generated("blockdiagram", "01548fd9")
	public boolean calc(m in proximity1, m in proximity2, m in proximity3, boolean in isRed) {
		return(isRed && ((between(proximity1, lowerLimit, upperLimit) || between(proximity2, lowerLimit, upperLimit)) || between(proximity3, lowerLimit, upperLimit))); // calc_spec/calc 1
	}
}