int sub_3F3F4()
{
  int v0; // r4
  int v1; // r0
  char v3[48]; // [sp+0h] [bp-30h] BYREF

  v0 = sub_75570(1);
  sub_1E938(v3, 0x30u);
  printf("%s ", v3);
  printf("%s : enable power watchdog: 0x%04x\n", "pt_power_monitor_thread", v0);
  snprintf(byte_637BD0, 0x100u, "enable power watchdog: 0x%04x", v0);
  sub_3CC5C((int)byte_637BD0, v3);
  if ( v0 == 1 )
  {
    while ( 1 )
    {
      v1 = pthread_setcancelstate(1, 0);
      sub_75204(v1);
      pthread_setcancelstate(0, 0);
      pthread_testcancel();
      sleep(3u);
    }
  }
  sub_1E938(v3, 0x30u);
  printf("%s ", v3);
  printf("%s : %s power enable watchdog error.\n", "pt_power_monitor_thread", "pt_power_monitor_thread");
  snprintf(byte_637CD0, 0x100u, "%s power enable watchdog error.", "pt_power_monitor_thread");
  sub_3CC5C((int)byte_637CD0, v3);
  return 0;
}
