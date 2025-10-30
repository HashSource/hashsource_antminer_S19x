int __fastcall sub_40DF8(_DWORD *a1, int a2, int a3)
{
  int v7; // r0

  a1[10] = a2;
  if ( a2 )
  {
    v7 = sub_1DDB40(*a1, a1[1], a1[2]);
    a1[9] = sub_1DFB3C(v7);
  }
  else
  {
    a1[9] = 0;
  }
  if ( off_4720B0 )
    off_4720B0(a1);
  (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, int, int))(dword_472024 + 48))(
    dword_472024,
    *a1,
    a1[1],
    a1[2],
    a2,
    a3);
  a1[20] = -1;
  a1[5] = 0;
  a1[11] = 0;
  return sub_1DDBE4(*a1, a1[1], a1[2]);
}
