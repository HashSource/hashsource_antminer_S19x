int __fastcall sub_6B6E8(_DWORD *a1, __int16 a2)
{
  int v4; // r4
  int v6; // r0
  _BYTE v7[12]; // [sp+4h] [bp-Ch] BYREF

  v4 = sub_6D580(v7);
  if ( v4 )
    return 0;
  if ( !sub_6B69C(a1, (int (__fastcall *)(__int16 *, int, int))sub_6ACC0, (int)v7, a2) )
  {
    v6 = sub_6D5F4(v7);
    v4 = sub_6D530(v6);
  }
  sub_6D5B4(v7);
  return v4;
}
