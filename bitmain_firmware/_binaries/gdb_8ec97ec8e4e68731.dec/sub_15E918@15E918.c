bool __fastcall sub_15E918(int a1, int a2, int a3)
{
  _BOOL4 result; // r0
  int v4; // [sp+14h] [bp-18h] BYREF
  _BOOL4 v5; // [sp+18h] [bp-14h] BYREF
  _BYTE v6[4]; // [sp+1Ch] [bp-10h] BYREF
  _BYTE v7[4]; // [sp+20h] [bp-Ch] BYREF
  _BYTE v8[8]; // [sp+24h] [bp-8h] BYREF

  ((void (__fastcall *)(int, int, int *, _BOOL4 *, _BYTE *, _BYTE *, _BYTE *, int))loc_15E7F8)(
    a1,
    a2,
    &v4,
    &v5,
    v6,
    v7,
    v8,
    a3);
  if ( v4 )
    result = 0;
  else
    result = v5;
  if ( !v4 )
    return !result;
  return result;
}
