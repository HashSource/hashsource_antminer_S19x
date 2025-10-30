int sub_1D8CFC()
{
  int result; // r0

  result = sub_25A3B0(
             "Do you want to auto delete previous execution log entries when record/replay buffer becomes full (record fu"
             "ll stop-at-limit)?");
  if ( !result )
    sub_946E0("Process record: stopped by user.");
  dword_46DAC0 = 0;
  return result;
}
