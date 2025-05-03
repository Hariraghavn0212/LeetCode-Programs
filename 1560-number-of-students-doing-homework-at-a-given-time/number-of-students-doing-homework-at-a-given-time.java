class Solution {
    public int busyStudent(int[] startTime, int[] endTime, int queryTime) {
        int len = startTime.length;
        int count = 0;
        for (int i = 0; i < len; i++) {
            if (startTime[i] <= queryTime && queryTime <= endTime[i])
                count++;
        }
        return count;
    }
}