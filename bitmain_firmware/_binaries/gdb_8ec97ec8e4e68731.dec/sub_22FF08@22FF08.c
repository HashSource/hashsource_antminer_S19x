__int64 __fastcall sub_22FF08(int a1, unsigned int a2, const char *a3, int a4, __int64 a5, __int64 a6)
{
  int v8; // r8
  int v9; // r0
  __int64 v10; // r4
  int v11; // r0
  int v13; // [sp+4h] [bp-38h]
  __int64 v16; // [sp+30h] [bp-Ch] BYREF

  if ( a2 - 2 <= 3 )
  {
    v9 = sub_16F654(a1);
    v8 = ((int (__fastcall *)(int))loc_16EA14)(v9);
  }
  else
  {
    v8 = 1;
  }
  if ( a6 < 1 )
    return a6;
  v10 = 0;
  while ( 1 )
  {
    v11 = sub_22F850(
            __SPAIR64__(a2, a1),
            a3,
            a4 + v8 * v10,
            0,
            v13,
            v10 + a5,
            (unsigned __int64)(v10 + a5) >> 32,
            a6 - v10,
            &v16);
    if ( !v11 )
      return v10;
    if ( v11 != 1 )
      break;
    v10 += v16;
    sub_258BD4(1);
    if ( v10 >= a6 )
      return a6;
  }
  return -1;
}
