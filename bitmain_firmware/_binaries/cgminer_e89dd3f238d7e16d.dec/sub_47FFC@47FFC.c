int __fastcall sub_47FFC(sem_t *a1)
{
  char v2[2048]; // [sp+8h] [bp-824h] BYREF
  char s[16]; // [sp+808h] [bp-24h] BYREF
  int v4; // [sp+818h] [bp-14h]
  _DWORD *v5; // [sp+81Ch] [bp-10h]
  int align; // [sp+820h] [bp-Ch]
  sem_t *v7; // [sp+824h] [bp-8h]

  v7 = a1;
  align = a1->__align;
  v5 = (_DWORD *)*(&a1[2].__align + 1);
  v4 = v5[1];
  snprintf(s, 0x10u, "%d/Miner", align);
  sub_2A95C(s);
  sub_3BB14((int)v7);
  if ( (*(unsigned __int8 (__fastcall **)(sem_t *))(v4 + 52))(v7) != 1 )
  {
    sub_2A5A0(v5, 0);
  }
  else
  {
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      strcpy(v2, "Waiting on sem in miner thread");
      sub_1DB6C(7, v2, 0);
    }
    sub_2AB08(v7 + 1, "cgminer.c", "miner_thread", 9890);
    v5[58] = time(0);
    (*(void (__fastcall **)(sem_t *))(v4 + 60))(v7);
    (*(void (__fastcall **)(sem_t *))(v4 + 88))(v7);
  }
  return 0;
}
