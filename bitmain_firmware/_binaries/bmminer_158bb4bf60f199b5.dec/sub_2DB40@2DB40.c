int __fastcall sub_2DB40(int a1, unsigned int a2, int a3)
{
  unsigned __int8 v5; // r9
  _BYTE *v6; // r4
  int v7; // r5
  int v8; // r6
  int v9; // r1
  int result; // r0
  _BYTE s[120]; // [sp+8h] [bp-87Ch] BYREF
  char v12[2052]; // [sp+80h] [bp-804h] BYREF

  v5 = a3;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v12, 0x800u, "Dump core register start. chain = %d, asic = %d, core = %d\n", a1, a2, a3);
    sub_47AB4(3, v12, 0);
  }
  memset(s, 0, sizeof(s));
  pthread_mutex_lock(&stru_A0DB0);
  byte_138648 = 1;
  if ( sub_2DA50(a1, a2, v5) )
  {
    v6 = s;
    v7 = 0;
    do
    {
      v8 = (unsigned __int8)v7;
      sub_2D868(a1, a2, v5, v7);
      sub_2A324(a1, a2, 0x40u, (int)v6);
      ++v7;
      v9 = (int)v6;
      v6 += 8;
      sub_2D9CC(v8, v9);
    }
    while ( v7 != 15 );
  }
  byte_138648 = 0;
  result = pthread_mutex_unlock(&stru_A0DB0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v12, "Dump core register done.\n");
    return sub_47AB4(3, v12, 0);
  }
  return result;
}
