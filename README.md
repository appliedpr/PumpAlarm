# PumpAlarm
The circuit consists of a modification to the pressure sw to allow to identify its closure,
initially through a 110v ac omron MY2 relay.

The 110v coil voltage relay dry contacts can be used to trigger a Mini Arduino input.
Tru the proper logic, the microprocessor will periodically scan the input and actuate the
message in the WT588d audio ckt.
After detection, the logic will provide for a loop to re-scan the input and repeat the
message every 15 minutes.
A second message could be programed for a pump deactivated state.
