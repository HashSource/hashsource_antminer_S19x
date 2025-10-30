int __fastcall sub_8DF0C(int a1, int a2)
{
  int *v2; // r3
  int v5; // r5
  int v6; // r3
  _BOOL4 v7; // r2
  _DWORD *v8; // r4
  int v9; // r7
  size_t v10; // r2
  int *v12; // r2
  int v13; // r2
  _BOOL4 v14; // r1
  int v15; // r8
  int v16; // r3
  int v17; // r8
  time_t v18; // r0
  int v19; // r3
  int *v20; // r3
  int v21; // r2
  int v22; // r3
  unsigned int *v23; // r3
  unsigned int v24; // r2
  unsigned int *v25; // r3
  unsigned int v26; // r2
  _DWORD *v27; // [sp+Ch] [bp-4h] BYREF

  v2 = *(int **)(a1 + 4);
  v27 = 0;
  v5 = *(_DWORD *)(v2[25] + 48) & 8;
  if ( v5 )
    goto LABEL_11;
  v6 = *v2;
  v7 = v6 != 0x10000;
  if ( v6 < 772 )
    v7 = 0;
  if ( !v7 )
  {
LABEL_11:
    switch ( sub_A3B18(a1, a2, &v27) )
    {
      case 0:
      case 1:
        v5 = 0;
        sub_95494(a1, 80, 217, 68, "ssl/ssl_sess.c", 531);
        goto LABEL_16;
      case 2:
      case 3:
        v10 = *(_DWORD *)(a2 + 40);
        if ( v10 )
        {
          v5 = 1;
          v8 = (_DWORD *)sub_8DE24((_DWORD *)a1, (const void *)(a2 + 44), v10);
          v27 = v8;
          goto LABEL_8;
        }
        v8 = v27;
        v5 = 0;
        if ( v27 )
          goto LABEL_9;
        break;
      default:
        v8 = v27;
        v5 = 0;
        goto LABEL_8;
    }
    return 0;
  }
  *(_DWORD *)(a1 + 1372) = 1;
  if ( !sub_8F5C4(a1, 18) || !sub_8F5C4(a1, 25) )
    return -1;
  v8 = *(_DWORD **)(a1 + 1140);
  v27 = v8;
LABEL_8:
  if ( !v8 )
    return 0;
LABEL_9:
  if ( *v8 != *(_DWORD *)a1
    || (v15 = v8[91], v15 != *(_DWORD *)(a1 + 1104))
    || (v9 = memcmp(v8 + 92, (const void *)(a1 + 1108), v8[91])) != 0 )
  {
    v9 = 0;
    goto LABEL_17;
  }
  if ( v15 )
    v16 = 0;
  else
    v16 = *(_DWORD *)(a1 + 1196) & 1;
  if ( v16 )
  {
    sub_95494(a1, 80, 217, 277, "ssl/ssl_sess.c", 578);
    goto LABEL_16;
  }
  v17 = v8[107];
  v18 = time(0);
  v8 = v27;
  if ( v17 < v18 - v27[108] )
  {
    v25 = (unsigned int *)(*(_DWORD *)(a1 + 1504) + 84);
    do
      v26 = __ldrex(v25);
    while ( __strex(v26 + 1, v25) );
    v8 = v27;
    if ( v5 )
    {
      v5 = 1;
      sub_8DB08(*(_DWORD **)(a1 + 1504), (int)v27);
      v8 = v27;
      if ( v27 )
        goto LABEL_17;
    }
    else if ( v27 )
    {
      goto LABEL_17;
    }
    return 0;
  }
  v19 = **(_DWORD **)(a1 + 124);
  if ( (v27[127] & 1) == 0 )
  {
    if ( (v19 & 0x200) == 0 )
    {
LABEL_36:
      v20 = *(int **)(a1 + 4);
      if ( (*(_DWORD *)(v20[25] + 48) & 8) != 0 )
        goto LABEL_46;
      v21 = *v20;
      v22 = *v20 == 0x10000;
      if ( v21 < 772 )
        v22 |= 1u;
      if ( v22 )
      {
LABEL_46:
        sub_8D6A4(*(_DWORD *)(a1 + 1140));
        *(_DWORD *)(a1 + 1140) = v27;
      }
      v23 = (unsigned int *)(*(_DWORD *)(a1 + 1504) + 92);
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 + 1, v23) );
      v9 = 1;
      *(_DWORD *)(a1 + 1240) = *(_DWORD *)(*(_DWORD *)(a1 + 1140) + 420);
      return v9;
    }
LABEL_17:
    sub_8D6A4((int)v8);
    v12 = *(int **)(a1 + 4);
    if ( (*(_DWORD *)(v12[25] + 48) & 8) == 0 )
    {
      v13 = *v12;
      v14 = v13 >= 772;
      if ( v13 == 0x10000 )
        v14 = 0;
      if ( v14 )
        *(_DWORD *)(a1 + 1140) = 0;
    }
    if ( !v5 )
      *(_DWORD *)(a1 + 1372) = 1;
    return v9;
  }
  if ( (v19 & 0x200) != 0 )
    goto LABEL_36;
  sub_95494(a1, 47, 217, 104, "ssl/ssl_sess.c", 597);
LABEL_16:
  v8 = v27;
  v9 = -1;
  if ( v27 )
    goto LABEL_17;
  return -1;
}
