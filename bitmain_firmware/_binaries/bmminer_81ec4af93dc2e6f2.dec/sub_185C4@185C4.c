int __fastcall sub_185C4(int a1)
{
  int result; // r0
  int v3; // r4
  int v4; // r3
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  result = sub_265C0(a1);
  if ( result )
  {
    v3 = 0;
    pthread_mutex_lock(&stru_B0EE8);
    dword_B0ED8 = a1;
    sub_18218();
    while ( !sub_266F0(v3) || !sub_17908(v3) )
    {
      if ( ++v3 == 4 )
      {
        dword_B0EE4 = 1;
        pthread_mutex_unlock(&stru_B0EE8);
        return 0;
      }
    }
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(v5, 0x800u, "calibration sensor on chain %d failed", v3);
      sub_3AF5C(3, v5, 0, v4);
    }
    dword_B0EE4 = 1;
    pthread_mutex_unlock(&stru_B0EE8);
    return -1;
  }
  return result;
}
