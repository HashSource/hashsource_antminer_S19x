int __fastcall sub_282AC0(int *a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r4
  int v5; // r5
  _BYTE v7[20]; // [sp+0h] [bp-14h] BYREF

  v2 = sub_280F64(v7);
  dword_48ABB0 = v2;
  if ( v2 < 0 )
    return -1;
  v3 = v2 == 3;
  if ( v2 != 3 )
    v3 = v2 == 27;
  v4 = v2;
  v5 = *a1;
  off_48BAA0 = 0;
  dword_48AF04 = 1;
  if ( v3 )
    return -1;
  sub_2926F8();
  return sub_282A14(v5, v4, (int)v7);
}
