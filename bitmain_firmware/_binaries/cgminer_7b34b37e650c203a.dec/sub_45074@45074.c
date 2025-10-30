int __fastcall sub_45074(_DWORD *a1, int a2)
{
  int v4; // r4
  int v6; // r0
  _BYTE v7[12]; // [sp+4h] [bp-Ch] BYREF

  v4 = sub_47820(v7);
  if ( v4 )
    return 0;
  if ( !sub_44FFC(a1, (int (__fastcall *)(__int16 *, int, int))sub_443B4, (int)v7, a2) )
  {
    v6 = sub_47894(v7);
    v4 = sub_477C8(v6);
  }
  sub_47854(v7);
  return v4;
}
