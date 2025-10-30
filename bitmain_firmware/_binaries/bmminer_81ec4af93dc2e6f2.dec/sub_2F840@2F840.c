int sub_2F840()
{
  int v0; // r7
  int i; // r0
  int v2; // r0
  int v3; // r6
  int v4; // r0
  _BOOL4 v5; // r3
  int v6; // r4
  int v7; // r0
  int v8; // r3
  int v9; // r3
  int v11; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v0 = dword_4B6CAC;
  sub_22178();
  sub_22178();
  for ( i = prctl(15, "power_monitor", 0); byte_4B6E4C; i = sub_3D9D4(100) )
  {
    v8 = sub_66A58(i);
    if ( v8 > 0 && (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "power his_sta = 0x%x", v8);
      sub_3AF5C(3, s, 0, v9);
    }
    v2 = pthread_mutex_lock(stru_530E6C);
    v3 = sub_22418(v2);
    v4 = sub_22178();
    v5 = v0 < v4;
    v6 = v4;
    if ( v3 <= 3799 )
      v5 = 0;
    if ( v5 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(s, 0x800u, "power = %d", v3);
        sub_3AF5C(3, s, 0, v11);
      }
      if ( v6 - 19 <= v0 )
        v7 = v0;
      else
        v7 = v6 - 20;
      sub_21E80(v7);
    }
    pthread_mutex_unlock(stru_530E6C);
  }
  return 0;
}
