int __fastcall sub_A2974(int a1, char *a2, int a3, int a4)
{
  int v5; // r4
  int v6; // r8
  char *v7; // r10
  int v8; // r3
  int v10; // r0
  int v11; // r3
  bool v12; // zf
  int v13; // r6
  int v14; // r9
  int v15; // r5
  _BOOL4 v16; // r11
  const char *v17; // r10
  int v18; // r0
  int v19; // r0
  int v20; // r3
  int v21; // r8
  int v22; // r10
  int v23; // r11
  int v24; // r3
  const char *v25; // r0
  int v26; // r4
  int v27; // [sp+0h] [bp-24h]
  int v28; // [sp+4h] [bp-20h]
  void *ptr[2]; // [sp+8h] [bp-1Ch] BYREF

  v5 = a1;
  v6 = a4;
  if ( !a2 )
  {
    if ( !a4 )
      goto LABEL_28;
    return 0;
  }
  if ( a3 )
  {
    if ( a1 )
    {
      while ( 1 )
      {
        v10 = sub_A0870(a1);
        v7 = *(char **)(v10 + 24);
        v11 = *v7;
        v12 = v11 == 18;
        if ( v11 != 18 )
          v12 = v11 == 1;
        if ( !v12 )
          break;
        a1 = *((_DWORD *)v7 + 5);
      }
      v5 = v10;
      if ( (unsigned __int8)(v11 - 3) > 1u )
        goto LABEL_5;
      goto LABEL_15;
    }
LABEL_29:
    if ( !a4 )
      sub_946E0("Type %s is not a structure or union type", "(null)");
    return 0;
  }
  if ( !a1 )
    goto LABEL_29;
  v7 = *(char **)(a1 + 24);
  if ( (unsigned __int8)(*v7 - 3) > 1u )
  {
LABEL_5:
    if ( !v6 )
      sub_15AE0((int)ptr, v5);
    return 0;
  }
LABEL_15:
  if ( (v7[2] & 8) == 0 )
  {
    v5 = sub_A28F8(v5);
    v7 = *(char **)(v5 + 24);
  }
  if ( *((__int16 *)v7 + 2) <= 0 )
  {
LABEL_34:
    if ( !v6 )
LABEL_28:
      sub_15AE0((int)ptr, v5);
    return 0;
  }
  v13 = 0;
  v14 = -1;
  v15 = 0;
  v27 = v6;
  do
  {
    v17 = *(const char **)(*((_DWORD *)v7 + 6) + v13 + 16);
    if ( !v17 )
      goto LABEL_26;
    if ( sub_A1938(v5, v15) )
    {
      v7 = *(char **)(v5 + 24);
      v14 = v15;
      goto LABEL_24;
    }
    v16 = sub_9DF20(v17, a2);
    v7 = *(char **)(v5 + 24);
    if ( v16 )
      return *(_DWORD *)(*((_DWORD *)v7 + 6) + v13 + 12);
    if ( sub_A0274(v5, v15) )
    {
      v18 = sub_A2974(*(_DWORD *)(*((_DWORD *)v7 + 6) + v13 + 12), a2, 0, 1);
      if ( !v18 )
      {
LABEL_26:
        v7 = *(char **)(v5 + 24);
        goto LABEL_24;
      }
      return v18;
    }
    if ( !sub_A0328(v5, v15) )
      goto LABEL_24;
    v19 = sub_A0870(*(_DWORD *)(*((_DWORD *)v7 + 6) + v13 + 12));
    v20 = *(_DWORD *)(v19 + 24);
    v21 = v19;
    v22 = *(__int16 *)(v20 + 4) - 1;
    if ( v22 < 0 )
      goto LABEL_26;
    v28 = v5;
    v23 = 24 * v22;
    while ( 1 )
    {
      v24 = *(_DWORD *)(v20 + 24) + v23;
      v25 = *(const char **)(v24 + 16);
      v26 = *(_DWORD *)(v24 + 12);
      if ( !v25 || !sub_9DF20(v25, a2) )
        v26 = sub_A2974(v26, a2, 0, 1);
      if ( v26 )
        return v26;
      --v22;
      v23 -= 24;
      if ( v22 == -1 )
        break;
      v20 = *(_DWORD *)(v21 + 24);
    }
    v5 = v28;
    v7 = *(char **)(v28 + 24);
LABEL_24:
    ++v15;
    v13 += 24;
  }
  while ( *((__int16 *)v7 + 2) > v15 );
  v6 = v27;
  if ( v14 == -1 )
    goto LABEL_34;
  v8 = sub_A2974(*(_DWORD *)(*((_DWORD *)v7 + 6) + 24 * v14 + 12), a2, 0, 1);
  if ( !v8 )
    goto LABEL_34;
  return v8;
}
