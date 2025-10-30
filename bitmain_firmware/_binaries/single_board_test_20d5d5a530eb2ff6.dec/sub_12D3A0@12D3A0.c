int __fastcall sub_12D3A0(int a1, _DWORD *a2)
{
  int v4; // r5
  int v5; // r4
  bool v6; // cc
  int v7; // r4
  int v8; // lr
  char v9; // r3
  int v10; // r0
  int v11; // lr
  int v12; // r0
  _BYTE v15[8]; // [sp+4h] [bp-8h] BYREF

  if ( !a2 )
    return 0;
  v4 = a2[1] & 0x100;
  if ( v4 )
  {
    if ( sub_B69CC(a1, (int)"-", 1) != 1 )
      return -1;
    v4 = 1;
    v5 = 3;
    v6 = *a2 <= 0;
    if ( *a2 )
      goto LABEL_6;
  }
  else
  {
    v5 = 2;
    v6 = *a2 <= 0;
    if ( *a2 )
    {
LABEL_6:
      if ( v6 )
        return v4;
      v7 = 0;
      while ( 1 )
      {
        v8 = a2[2];
        v15[0] = a0123456789abcd[*(unsigned __int8 *)(v8 + v7) >> 4];
        v9 = *(_BYTE *)(v8 + v7++);
        v15[1] = a0123456789abcd[v9 & 0xF];
        v10 = sub_B69CC(a1, (int)v15, 2);
        v11 = v4 + 2;
        if ( v10 != 2 )
          break;
        if ( *a2 <= v7 )
          return v4 + 2;
        if ( v7 )
        {
          if ( v7 == 35 * (v7 / 35) )
          {
            v12 = sub_B69CC(a1, (int)"\\\n", 2);
            v11 = v4 + 4;
            if ( v12 != 2 )
              return -1;
          }
        }
        v4 = v11;
      }
      return -1;
    }
  }
  if ( sub_B69CC(a1, (int)"00", 2) != 2 )
    return -1;
  return v5;
}
