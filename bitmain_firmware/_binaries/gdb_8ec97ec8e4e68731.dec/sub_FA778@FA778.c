int __fastcall sub_FA778(int result, unsigned int a2, int a3, int a4)
{
  unsigned __int64 v4; // r6
  unsigned __int64 v6; // r4
  int v7; // r0
  int v8; // [sp+4h] [bp-38h]
  int v10; // [sp+24h] [bp-18h]
  __int64 v12; // [sp+30h] [bp-Ch] BYREF

  v4 = a4;
  if ( a4 )
  {
    v6 = 0;
    v10 = result;
    do
    {
      v7 = sub_22F850(dword_4899A0, v10, 0, a3 + v6, 0, v8, a2 + v6, (a2 + v6) >> 32, v4 - v6, (v4 - v6) >> 32, &v12);
      if ( v7 != 1 )
      {
        if ( !v7 )
          v7 = -1;
        sub_FA710(v7, a2 + v6);
      }
      v6 += v12;
      result = sub_258BD4(1);
    }
    while ( v6 < v4 );
  }
  return result;
}
