int __fastcall sub_6F1C4(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  bool v4; // zf
  pthread_mutex_t *v5; // r4
  int v9; // r9
  int v11; // [sp+4h] [bp-808h] BYREF
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v4 = a4 == 0;
  if ( a4 )
    v4 = a3 == 0;
  if ( v4 )
    return -3;
  v5 = &stru_65DFC8[a1];
  pthread_mutex_lock(v5);
  if ( a2 )
  {
    v9 = -5;
    snprintf(s, 0x800u, "unknown set config type = %d\n", a2);
    nullsub_8();
  }
  else
  {
    v11 = 0;
    v9 = sub_6E060(15, &v11);
    *a3 = v11;
    *a4 = 4;
    snprintf(s, 0x800u, "uart_get_config return %d\n", *a3);
    nullsub_8();
  }
  pthread_mutex_unlock(v5);
  return v9;
}
