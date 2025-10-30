int __fastcall sub_A34AC(_DWORD *a1, int a2, int a3)
{
  int *v3; // r3
  int v4; // r3
  _BOOL4 v5; // r4
  unsigned int v6; // r3
  bool v7; // cc
  unsigned int v11; // r3
  bool v12; // cc
  int v13; // r6
  int *v14; // r3
  int v15; // r3
  _BOOL4 v16; // r2
  __int16 v18; // lr
  int v19; // r3
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r9
  int v24; // r0
  int v25; // r10
  _DWORD *v26; // r8
  int v27; // [sp+Ch] [bp-4h] BYREF

  v3 = (int *)a1[1];
  if ( (*(_DWORD *)(v3[25] + 48) & 8) == 0 )
  {
    v4 = *v3;
    v5 = v4 >= 772;
    if ( v4 == 0x10000 )
      v5 = 0;
    if ( v5 && *(_DWORD *)(a3 + 16) == 116 )
      return 0;
    if ( !a1[7] && *(int *)(a1[31] + 680) >= 772 )
    {
      if ( *(_DWORD *)(a3 + 16) == 116 )
        return 0;
      v6 = *(_DWORD *)(a3 + 12);
      v7 = v6 > 0xA;
      if ( v6 != 10 )
        v7 = v6 > 1;
      if ( !v7 )
        return 0;
    }
  }
  if ( sub_875C0(*(_DWORD *)(a3 + 20)) )
    return 0;
  v11 = *(_DWORD *)(a3 + 16);
  v12 = v11 > 0x32B;
  if ( v11 != 811 )
    v12 = v11 - 979 > 1;
  if ( !v12 )
  {
    v13 = a1[7];
    v14 = (int *)a1[1];
    if ( v13 )
    {
      if ( (*(_DWORD *)(v14[25] + 48) & 8) == 0 )
      {
        v15 = *v14;
        v16 = v15 >= 772;
        if ( v15 == 0x10000 )
          v16 = 0;
        if ( v16 )
          return 0;
      }
    }
    else if ( *v14 == 0x10000 )
    {
      v19 = a1[31];
      if ( *(int *)(v19 + 684) >= 772 )
      {
        if ( *(int *)(v19 + 680) >= 772 )
          return 0;
        v20 = sub_89910((int)a1);
        v23 = v20;
        if ( !v20 )
          return 0;
        v24 = sub_10C010(v20, v21, v22);
        v25 = v24;
        if ( v24 > 0 )
        {
          while ( 1 )
          {
            v26 = (_DWORD *)sub_10C01C(v23, v13++);
            if ( !sub_A33DC((int)a1, v26, 65537, 0) && (v26[4] & 0x10) != 0 )
              break;
            if ( v25 == v13 )
              return 0;
          }
          goto LABEL_24;
        }
        if ( !v24 )
          return 0;
      }
    }
  }
LABEL_24:
  v27 = 0;
  if ( sub_A2D04(a3, &v27) )
  {
    if ( v27 )
      sub_D8C78(v27);
    v18 = *(_WORD *)(a3 + 4);
  }
  else
  {
    v18 = *(_WORD *)(a3 + 4);
  }
  LOBYTE(v27) = HIBYTE(v18);
  BYTE1(v27) = v18;
  return sub_854EC((int)a1, a2);
}
