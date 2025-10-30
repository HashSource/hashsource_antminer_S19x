int __fastcall sub_8D964(int a1, int a2)
{
  _BOOL4 v4; // r0
  int *v5; // r5
  int v6; // r3
  size_t v7; // r2
  int v8; // r1
  int v9; // r3
  bool v10; // nf
  int v11; // r3
  int v12; // r6
  int *v14; // r2
  int v15; // r2
  _BOOL4 v16; // r1

  v4 = sub_8D45C();
  v5 = (int *)v4;
  if ( !v4 )
  {
    v12 = 0;
    sub_95494(a1, 80, 181, 65, "ssl/ssl_sess.c", 370);
    return v12;
  }
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 1504) + 40);
  if ( v6 )
    *(_DWORD *)(v4 + 428) = v6;
  else
    *(_DWORD *)(v4 + 428) = sub_887B0(a1);
  sub_8D6A4(*(_DWORD *)(a1 + 1140));
  *(_DWORD *)(a1 + 1140) = 0;
  if ( !a2 )
  {
    v5[82] = 0;
    goto LABEL_6;
  }
  v14 = *(int **)(a1 + 4);
  if ( (*(_DWORD *)(v14[25] + 48) & 8) == 0 )
  {
    v15 = *v14;
    v16 = v15 >= 772;
    if ( v15 == 0x10000 )
      v16 = 0;
    if ( v16 )
    {
      v7 = *(_DWORD *)(a1 + 1104);
      v5[82] = 0;
      if ( v7 <= 0x20 )
        goto LABEL_7;
      goto LABEL_17;
    }
  }
  v12 = sub_8D53C((int *)a1, (int)v5);
  if ( !v12 )
  {
    sub_8D6A4((int)v5);
    return v12;
  }
LABEL_6:
  v7 = *(_DWORD *)(a1 + 1104);
  if ( v7 <= 0x20 )
  {
LABEL_7:
    memcpy(v5 + 92, (const void *)(a1 + 1108), v7);
    v8 = *(_DWORD *)a1;
    v9 = **(_DWORD **)(a1 + 124);
    v5[91] = *(_DWORD *)(a1 + 1104);
    *(_DWORD *)(a1 + 1140) = v5;
    v11 = v9 << 22;
    v10 = v11 < 0;
    *v5 = v8;
    if ( v11 < 0 )
      v11 = v5[127];
    v12 = 1;
    v5[105] = 0;
    if ( v10 )
      v5[127] = v11 | 1;
    return v12;
  }
LABEL_17:
  sub_95494(a1, 80, 181, 68, "ssl/ssl_sess.c", 402);
  sub_8D6A4((int)v5);
  return 0;
}
