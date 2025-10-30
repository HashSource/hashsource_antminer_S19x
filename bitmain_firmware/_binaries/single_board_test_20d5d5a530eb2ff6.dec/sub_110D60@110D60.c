int __fastcall sub_110D60(int a1, int a2, int a3, time_t *a4)
{
  time_t v6; // r1
  int v7; // r3
  int v9; // [sp+4h] [bp-10h]
  time_t timer; // [sp+Ch] [bp-8h] BYREF

  if ( a4 )
  {
    v6 = *a4;
    timer = *a4;
  }
  else
  {
    v9 = a3;
    time(&timer);
    v6 = timer;
    a3 = v9;
  }
  if ( a1 && (*(_DWORD *)(a1 + 12) & 0x40) == 0 )
  {
    v7 = *(_DWORD *)(a1 + 4);
    if ( v7 == 23 )
      return sub_12B568(a1, v6, a2, a3);
    if ( v7 == 24 )
      return sub_126104(a1, v6, a2, a3);
  }
  return sub_12B0A8(a1, v6, a2, a3);
}
