int sub_38C70()
{
  int v1; // [sp+4h] [bp-4h]

  sys_stattime = current_time;
  sys_received = 0;
  sys_processed = 0;
  sys_newversion = 0;
  sys_oldversion = 0;
  sys_declined = 0;
  sys_restricted = 0;
  sys_badlength = 0;
  sys_badauth = 0;
  sys_limitrejected = 0;
  sys_kodsent = 0;
  sys_lamport = 0;
  sys_tsrounding = 0;
  return v1;
}
