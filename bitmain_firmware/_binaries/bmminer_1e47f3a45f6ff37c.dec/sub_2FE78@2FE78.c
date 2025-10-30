int sub_2FE78()
{
  int v0; // r6
  int i; // r0
  int v2; // r0
  int v3; // r5
  int v4; // r0
  bool v5; // cc
  int v6; // r4
  int v7; // r0
  int v8; // r3
  int v9; // r3
  int v10; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v0 = dword_533B38;
  sub_226A8();
  sub_226A8();
  for ( i = prctl(15, "power_monitor", 0); byte_534CD8; i = sub_3E0F0(100) )
  {
    v8 = sub_65E40(i);
    if ( v8 > 0 && (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "power his_sta = 0x%x", v8);
      sub_3B6AC(3, s, 0, v9);
    }
    v2 = pthread_mutex_lock(stru_535CF8);
    v3 = sub_22950(v2);
    v4 = sub_226A8();
    v5 = v3 <= 3799;
    if ( v3 > 3799 )
      v5 = v4 <= v0;
    v6 = v4;
    if ( !v5 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "power = %d", v3);
        sub_3B6AC(3, s, 0, v10);
      }
      if ( v0 >= v6 - 19 )
        v7 = v0;
      else
        v7 = v6 - 20;
      sub_223A0(v7);
    }
    pthread_mutex_unlock(stru_535CF8);
  }
  return 0;
}
