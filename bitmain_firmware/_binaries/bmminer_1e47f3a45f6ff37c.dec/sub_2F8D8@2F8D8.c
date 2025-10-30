void __noreturn sub_2F8D8()
{
  int v0; // r0
  int v1; // r0
  char v2[2052]; // [sp+20h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v2, "start voltage_monitor_thread");
    sub_3B6AC(3, v2, 0, *(_DWORD *)"");
  }
  while ( 1 )
  {
    v0 = pthread_setcancelstate(1, 0);
    if ( byte_B4128 )
    {
      sub_65B38(v0);
      sub_226A8();
      v1 = dword_B412C;
      if ( !dword_B412C )
      {
        v1 = sub_7C918("bmminer_power");
        dword_B412C = v1;
      }
      sub_7E7C0(v1, "thread.c", 8, "voltage_monitor_thread", 22);
    }
    pthread_setcancelstate(0, 0);
    pthread_testcancel();
    sleep(3u);
  }
}
