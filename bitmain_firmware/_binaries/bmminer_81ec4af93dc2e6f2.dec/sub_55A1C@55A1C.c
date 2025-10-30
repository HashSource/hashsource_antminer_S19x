int __fastcall sub_55A1C(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  char v10[12]; // [sp+10h] [bp-80Ch] BYREF
  int v11; // [sp+810h] [bp-Ch] BYREF
  int v12; // [sp+814h] [bp-8h]

  v12 = -5;
  if ( !a3 || !a4 )
    return -3;
  pthread_mutex_lock(&stru_5310A4[a1]);
  if ( a2 )
  {
    snprintf(v10, 0x800u, "unknown set config type = %d\n", a2);
    sub_3AF5C(1, v10, 0, (int)v10);
  }
  else
  {
    v11 = 0;
    v12 = sub_52E24(15, &v11);
    *a3 = v11;
    *a4 = 4;
    snprintf(v10, 0x800u, "uart_get_config return %d\n", *a3);
    sub_3AF5C(3, v10, 0, (int)v10);
  }
  pthread_mutex_unlock(&stru_5310A4[a1]);
  return v12;
}
