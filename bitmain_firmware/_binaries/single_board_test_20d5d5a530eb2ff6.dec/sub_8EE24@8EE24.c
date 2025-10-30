int __fastcall sub_8EE24(_DWORD *a1, __int16 a2, __int64 a3)
{
  int *v3; // r3
  int v4; // r5
  int v5; // r3
  int v7; // r6
  int v8; // r5
  int v9; // r3
  _DWORD *v11; // r3
  _BOOL4 v12; // r3
  int v13; // r3
  int v14; // r9
  int v15; // r10
  unsigned int v16; // r5
  unsigned __int16 v17; // r7
  int v18; // r1
  int v19; // [sp+8h] [bp-8h] BYREF
  unsigned int v20; // [sp+Ch] [bp-4h] BYREF

  v3 = (int *)a1[1];
  if ( (*(_DWORD *)(v3[25] + 48) & 8) != 0 )
    return 1;
  v4 = *v3;
  v5 = *v3 < 772;
  if ( v4 == 0x10000 )
    v5 |= 1u;
  if ( v5 || (a2 & 0x800) != 0 )
    return 1;
  HIDWORD(a3) = a1[7];
  v7 = a3;
  v8 = a3 | HIDWORD(a3);
  if ( !a3 )
  {
    if ( !a1[35] || (a1[361] & 1) == 0 )
    {
      sub_95494(a1, 109, 503, 101, "ssl/statem/extensions.c", 1325);
      return v8;
    }
LABEL_9:
    v8 = sub_A5814(a1, 0, 0);
    if ( !v8 )
    {
      v9 = 1454;
LABEL_11:
      sub_95494(a1, 80, 503, 68, "ssl/statem/extensions.c", v9);
      return v8;
    }
    return 1;
  }
  if ( !HIDWORD(a3) )
  {
    if ( (_DWORD)a3 )
      return 1;
    goto LABEL_9;
  }
  v11 = (_DWORD *)a1[31];
  if ( v11[214] )
  {
    if ( (*v11 & 0x800) != 0 )
    {
      v8 = a1[367];
      if ( !v8 )
      {
        if ( a1[275] )
        {
          sub_95494(a1, 80, 503, 68, "ssl/statem/extensions.c", 1374);
          return v8;
        }
        goto LABEL_20;
      }
    }
    goto LABEL_21;
  }
  v12 = a1[275] == 0;
  if ( !(_DWORD)a3 )
    v12 = 0;
  if ( v12 )
  {
    if ( a1[35] )
    {
      v13 = a1[361];
      if ( (v13 & 2) == 0 )
        goto LABEL_42;
    }
    v14 = a1[350];
    v15 = a1[351];
    sub_A278C(a1, &v19, &v20);
    if ( v20 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = *(_WORD *)(v19 + 2 * v16);
        if ( sub_9D5FC(a1, v17, v15, v14, 1) )
          break;
        if ( ++v16 >= v20 )
          goto LABEL_36;
      }
      if ( v20 > v16 )
      {
        v8 = 1;
        *(_WORD *)(a1[31] + 854) = v17;
        a1[275] = 1;
        return v8;
      }
    }
  }
LABEL_36:
  if ( !a1[35] )
    goto LABEL_37;
  v13 = a1[361];
LABEL_42:
  if ( (v13 & 1) != 0 )
  {
    if ( (*(_DWORD *)a1[31] & 0x800) != 0 )
    {
      v8 = a1[367];
      if ( !v8 )
      {
        if ( a1[275] )
        {
          v9 = 1432;
          goto LABEL_11;
        }
LABEL_20:
        v8 = 1;
        a1[275] = 1;
        return v8;
      }
    }
LABEL_21:
    v8 = a1[275];
    if ( v8 == 1 )
    {
      a1[275] = 2;
      return v8;
    }
    return 1;
  }
LABEL_37:
  if ( v7 )
    v18 = 40;
  else
    v18 = 109;
  v8 = 0;
  sub_95494(a1, v18, 503, 101, "ssl/statem/extensions.c", 1419);
  return v8;
}
