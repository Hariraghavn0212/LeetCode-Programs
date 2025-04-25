class Solution {
	public static boolean checkRecord(String s) {
		int ACOUNT = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s.charAt(i) == 'A') {
				ACOUNT++;
			}
			if (ACOUNT >= 2) {
				return false;
			}
		}
		if (s.contains("LLL")) {
			return false;
		}
		return true;
	}
}