int __fastcall sub_172E64(int a1, int *a2)
{
  int v3; // r4
  int i; // r5
  int v6; // lr
  char v7; // r3
  int v8; // r0
  int v9; // lr
  int v10; // r0
  int result; // r0
  _BYTE v12[44]; // [sp+4h] [bp-2Ch] BYREF

  if ( !a2 )
    return 0;
  if ( *a2 )
  {
    if ( *a2 > 0 )
    {
      v3 = 0;
      for ( i = 0; ; i = v9 )
      {
        v6 = a2[2];
        v12[0] = a0123456789abcd[*(unsigned __int8 *)(v6 + v3) >> 4];
        v7 = *(_BYTE *)(v6 + v3++);
        v12[1] = a0123456789abcd[v7 & 0xF];
        v8 = sub_B69CC(a1, (int)v12, 2);
        v9 = i + 2;
        if ( v8 != 2 )
          break;
        if ( *a2 <= v3 )
          return i + 2;
        if ( v3 )
        {
          if ( v3 == 35 * (v3 / 35) )
          {
            v10 = sub_B69CC(a1, (int)"\\\n", 2);
            v9 = i + 4;
            if ( v10 != 2 )
              return -1;
          }
        }
      }
      return -1;
    }
    return 0;
  }
  else
  {
    result = sub_B69CC(a1, (int)a0, 1);
    if ( result != 1 )
      return -1;
  }
  return result;
}
