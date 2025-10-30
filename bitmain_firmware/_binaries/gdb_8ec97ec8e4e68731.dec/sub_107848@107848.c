int __fastcall sub_107848(_DWORD *a1)
{
  int v1; // r6
  int v3; // r0
  int v4; // r1
  int v6; // r0
  int v7; // r0
  _BYTE v8[4]; // [sp+Ch] [bp-14h] BYREF
  _BYTE v9[16]; // [sp+10h] [bp-10h] BYREF

  v1 = a1[9];
  dword_47B290 = (*(_DWORD *)(v1 + 40) >> 5) & 1;
  v3 = sub_1B6B24(a1, dword_47B26C);
  if ( sub_2A8A04(v1, 0, *(_DWORD *)(v3 + 24), *(_DWORD *)(v3 + 28), 0) < 0 )
  {
    v7 = sub_1B87A8(a1);
    sub_258B04(v7);
  }
  v4 = dword_47B26C;
  if ( a1[29] == a1[27] && a1[32] == a1[30] )
  {
    v6 = sub_1B6B24(a1, dword_47B26C);
    sub_1D0830(a1, *(_DWORD *)(v6 + 8));
    v4 = dword_47B26C;
  }
  dword_47B258 = *(_DWORD *)(sub_1B6B24(a1, v4) + 32);
  dword_47B250 = *(_DWORD *)(sub_1B6B24(a1, dword_47B26C) + 24);
  sub_E5C9C();
  sub_1B2570(v9, a1);
  sub_105B24((int)v9, (int)a1);
  sub_1B2CF4(v9);
  sub_1B2584(v9);
  return sub_E5BCC((int)v8);
}
