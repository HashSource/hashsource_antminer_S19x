int __fastcall sub_A8398(_DWORD *a1, unsigned int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r6
  unsigned int v6; // r3
  int v8; // r3
  int v9; // [sp+Ch] [bp-8h] BYREF

  if ( !a1[5] )
    return 0;
  v4 = (_DWORD *)sub_E0740(20, "ssl/packet.c", 281);
  v5 = v4;
  if ( v4 )
  {
    v6 = a1[3] + a2;
    *v4 = a1[5];
    a1[5] = v4;
    v4[3] = v6;
    v4[2] = a2;
    if ( a2 )
    {
      if ( sub_A82B8((int)a1, a2, &v9) )
      {
        v8 = a1[1];
        if ( !v8 )
          v8 = *(_DWORD *)(*a1 + 4);
        v5[1] = v9 - v8;
        return 1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      v4[1] = 0;
      return 1;
    }
  }
  else
  {
    sub_D0048(20, 634, 65, "ssl/packet.c", 282);
    return 0;
  }
}
