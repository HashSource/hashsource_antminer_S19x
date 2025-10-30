void __noreturn sub_2F2B0()
{
  int v0; // r0
  int v1; // r0
  char v2[2048]; // [sp+20h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v2, "start voltage_monitor_thread");
    sub_3AF5C(3, v2, 0, *(_DWORD *)"");
  }
  while ( 1 )
  {
    v0 = pthread_setcancelstate(1, 0);
    if ( byte_B13B8 )
    {
      sub_66750(v0);
      sub_22178();
      v1 = dword_B13BC;
      if ( !dword_B13BC )
      {
        v1 = sub_79514("bmminer_power");
        dword_B13BC = v1;
      }
      sub_7B3D8(v1, "thread.c", 8, "voltage_monitor_thread", 22);
    }
    pthread_setcancelstate(0, 0);
    pthread_testcancel();
    sleep(3u);
  }
}
