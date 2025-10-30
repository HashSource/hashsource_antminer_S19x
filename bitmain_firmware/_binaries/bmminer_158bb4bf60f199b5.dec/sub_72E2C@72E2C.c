int sub_72E2C()
{
  int v0; // r5
  int result; // r0
  _DWORD v2[3]; // [sp+0h] [bp-Ch] BYREF

  v2[0] = 0;
  v2[1] = &loc_20000;
  pthread_mutex_lock(&stru_1B1494);
  v0 = sub_73660(v2);
  pthread_mutex_unlock(&stru_1B1494);
  result = v0;
  if ( v0 >= 0 )
  {
    dword_1B14AC = v0;
    dword_1B14B0 = 1;
  }
  return result;
}
