int __fastcall sub_110F34(int a1, _DWORD *a2, int a3)
{
  unsigned int v4; // r7
  int v7; // r4
  _DWORD *v8; // r5
  int v9; // r6
  unsigned int v10; // r11
  int v11; // r0
  int v13; // [sp+4h] [bp-8h]

  v4 = 0;
  v13 = 0;
  if ( sub_10C010((int)a2) <= 0 )
    return v13;
  while ( 1 )
  {
    v7 = sub_10C01C(a2, v4);
    if ( (*(int (__fastcall **)(int, int, int))(a1 + 36))(a1, a3, v7) )
    {
      if ( (*(_DWORD *)(a3 + 128) & 0x20) == 0 || sub_10C010(*(_DWORD *)(a1 + 80)) != 1 )
      {
        v8 = *(_DWORD **)(a1 + 80);
        v9 = sub_10C010((int)v8);
        if ( v9 > 0 )
        {
          v10 = 0;
          do
          {
            v11 = sub_10C01C(v8, v10++);
            if ( !sub_10E66C(v11, v7) )
              goto LABEL_10;
          }
          while ( v9 != v10 );
        }
      }
      v13 = v7;
      if ( sub_110E50(a1, v7, 0xFFFFFFFF) )
        return v7;
    }
LABEL_10:
    if ( (int)++v4 >= sub_10C010((int)a2) )
      return v13;
  }
}
