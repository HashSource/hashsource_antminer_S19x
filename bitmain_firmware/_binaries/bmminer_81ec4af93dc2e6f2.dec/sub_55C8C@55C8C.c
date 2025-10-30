int __fastcall sub_55C8C(int a1, int a2, int *a3, int a4)
{
  char v9[12]; // [sp+10h] [bp-80Ch] BYREF
  int v10; // [sp+810h] [bp-Ch] BYREF
  int v11; // [sp+814h] [bp-8h]

  v11 = -5;
  if ( !a3 || a4 )
    return -3;
  pthread_mutex_lock(&stru_5310A4[a1]);
  if ( a2 )
  {
    snprintf(v9, 0x800u, "unknown set config type = %d\n", a2);
    sub_3AF5C(1, v9, 0, (int)v9);
  }
  else
  {
    v10 = 0;
    v11 = sub_52E24(15, &v10);
    *a3 = BYTE2(v10) & 0x3F;
    MEMORY[0] = 4;
    snprintf(v9, 0x800u, "uart_get_config return %d\n", *a3);
    sub_3AF5C(3, v9, 0, (int)v9);
  }
  pthread_mutex_unlock(&stru_5310A4[a1]);
  return v11;
}
