int __fastcall sub_136FC8(int a1, int a2, int a3)
{
  bool v3; // zf
  bool v4; // zf
  int v5; // r4
  int v7; // r0
  int v9; // r3

  v3 = a3 == 0;
  if ( a3 )
    v3 = a1 == 0;
  if ( v3 )
    return -1;
  v4 = (a2 & 0xFFFFFFBF) == 128;
  if ( (a2 & 0xFFFFFFBF) != 0x80 )
    v4 = a2 == 256;
  v5 = !v4;
  if ( !v4 )
    return -2;
  v7 = sub_176308(a2, a1);
  v9 = v5;
  *(_DWORD *)(a3 + 272) = v7;
  return v9;
}
