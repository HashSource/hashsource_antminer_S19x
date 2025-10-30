int __fastcall sub_189BC(int a1)
{
  int result; // r0
  int v3; // r4
  int v4; // r3
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  result = sub_26AC4(a1);
  if ( result )
  {
    v3 = 0;
    pthread_mutex_lock(&stru_B3C58);
    dword_B3C48 = a1;
    sub_185F4();
    while ( !sub_26C0C(v3) || !sub_17C74(v3) )
    {
      if ( ++v3 == 4 )
      {
        dword_B3C54 = 1;
        pthread_mutex_unlock(&stru_B3C58);
        return 0;
      }
    }
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(v5, 0x800u, "calibration sensor on chain %d failed", v3);
      sub_3B6AC(3, v5, 0, v4);
    }
    dword_B3C54 = 1;
    pthread_mutex_unlock(&stru_B3C58);
    return -1;
  }
  return result;
}
