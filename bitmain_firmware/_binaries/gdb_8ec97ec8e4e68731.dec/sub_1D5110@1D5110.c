int __fastcall sub_1D5110(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r4
  int v6[4]; // [sp+4h] [bp-10h] BYREF

  v4 = (_DWORD *)dword_48A4D4;
  v6[0] = a2;
  v6[1] = a3;
  v6[2] = a4;
  if ( !dword_48A4D4 )
    return 0;
  while ( v4[11] == 2 || !sub_9904C(v4 + 2, v6) || !sub_E1F30((int)v4) )
  {
    v4 = (_DWORD *)v4[1];
    if ( !v4 )
      return 0;
  }
  return 1;
}
