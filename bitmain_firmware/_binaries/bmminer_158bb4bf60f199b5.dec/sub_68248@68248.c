int __fastcall sub_68248(int a1, int a2, _DWORD *a3, int a4)
{
  _BOOL4 v4; // r3
  int v5; // r6
  pthread_mutex_t *v6; // r4
  char v10[2048]; // [sp+0h] [bp-804h] BYREF

  v4 = a4 != 0;
  if ( a3 )
    v5 = v4;
  else
    v5 = 1;
  if ( v5 )
    return -3;
  v6 = (pthread_mutex_t *)((char *)&unk_1B0EB8 + 24 * a1);
  pthread_mutex_lock(v6);
  if ( !a2 )
  {
    *(_DWORD *)v10 = 0;
    sub_6688C(15, v10);
    *a3 = *(_DWORD *)v10;
    MEMORY[0] = 0;
    __und(0);
  }
  snprintf(v10, 0x800u, "unknown set config type = %d\n", a2);
  sub_47AB4(1, v10, 0);
  pthread_mutex_unlock(v6);
  return -5;
}
