int __fastcall sub_5591C(int a1, int a2, int *a3)
{
  char v8[8]; // [sp+14h] [bp-808h] BYREF
  int v9; // [sp+814h] [bp-8h]

  v9 = -5;
  if ( !a3 )
    return -3;
  pthread_mutex_lock(&stru_5310A4[a1]);
  if ( a2 )
  {
    snprintf(v8, 0x800u, "unknown set config type = %d\n", a2);
    sub_3AF5C(1, v8, 0, (int)v8);
  }
  else
  {
    sub_52EA0(15, *a3);
  }
  pthread_mutex_unlock(&stru_5310A4[a1]);
  return v9;
}
