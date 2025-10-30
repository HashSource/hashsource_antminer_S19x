int __fastcall sub_6F2D0(int a1, int a2, int *a3, int a4)
{
  _BOOL4 v4; // r3
  int v5; // r6
  pthread_mutex_t *v6; // r4
  char v10[2052]; // [sp+0h] [bp-804h] BYREF

  v4 = a4 != 0;
  if ( a3 )
    v5 = v4;
  else
    v5 = v4 | 1;
  if ( v5 )
    return -3;
  v6 = &stru_65DFC8[a1];
  pthread_mutex_lock(v6);
  if ( !a2 )
  {
    *(_DWORD *)v10 = 0;
    sub_6E060(15, v10);
    *a3 = HIWORD(*(_DWORD *)v10) & 0x3F;
    MEMORY[0] = 0;
    __und(0xFFu);
  }
  snprintf(v10, 0x800u, "unknown set config type = %d\n", a2);
  nullsub_8();
  pthread_mutex_unlock(v6);
  return -5;
}
