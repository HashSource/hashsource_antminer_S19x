int __fastcall sub_260F8C(int a1, __int64 a2, int a3, unsigned int a4, int a5, unsigned int a6)
{
  int v7; // r0
  int result; // r0
  int v9; // r8
  int v10; // r9
  unsigned __int64 v11; // r4
  int v12; // r0
  int v13; // r1
  int v14; // [sp+4h] [bp-38h]
  unsigned __int64 v17; // [sp+30h] [bp-Ch] BYREF

  v7 = sub_26B33C();
  result = ((int (__fastcall *)(int))loc_16EA14)(v7);
  if ( a3 )
    v9 = 4;
  else
    v9 = 2;
  if ( a6 )
  {
    v10 = result;
    v11 = 0;
    do
    {
      v12 = sub_22F850(
              __SPAIR64__(v9, dword_4899A0),
              0,
              a5 + v10 * v11,
              0,
              v14,
              v11 + a4,
              (v11 + a4) >> 32,
              a6 - v11,
              (__int64 *)&v17);
      if ( v12 != 1 )
      {
        if ( v12 != 2 )
        {
          v13 = v11 + a4;
          if ( v12 )
            v13 = v11 + a4;
          else
            v12 = -1;
          sub_FA710(v12, v13);
        }
        sub_26B438(a1, (__int64)v17 >> 29, 8 * v11 + a2, (8 * v11 + a2) >> 32, 8 * v17, v17 >> 29);
      }
      v11 += v17;
      result = sub_258BD4();
    }
    while ( v11 < a6 );
  }
  return result;
}
