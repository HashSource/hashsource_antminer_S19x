int __fastcall sub_7F7E4(_DWORD *a1, int a2, int a3, int a4)
{
  int result; // r0
  int v8; // r7
  int v9; // r0
  int v10; // r10
  int v11; // r0
  int v12; // r8
  bool v13; // r9
  bool v14; // zf
  int v15; // r1
  int v16; // r0
  int v17; // r0
  int v18; // r6
  int v19; // r2
  int v20; // r1
  int v21; // r11
  int v22; // r2

  if ( a3 != 1 )
    return 0;
  if ( a4 )
  {
    v8 = a1[251];
    if ( v8 )
      goto LABEL_5;
LABEL_23:
    memmove(*(void **)(a2 + 20), *(const void **)(a2 + 24), *(_DWORD *)(a2 + 8));
    result = 1;
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(a2 + 20);
    return result;
  }
  v8 = a1[243];
  if ( !v8 )
    goto LABEL_23;
LABEL_5:
  v9 = sub_D8920(v8);
  if ( !a1[285] || !v9 )
    goto LABEL_23;
  v10 = *(_DWORD *)(a2 + 8);
  v11 = sub_D8904(v8);
  v12 = v11;
  v13 = v11 != 1;
  v14 = a4 == 0;
  if ( a4 )
    v14 = v11 == 1;
  if ( v14 )
  {
    if ( !a4 )
    {
      if ( !v10 )
        return 0;
      sub_1892EC(v10, v11);
      if ( v15 )
        return 0;
    }
  }
  else
  {
    sub_1892EC(v10, v11);
    v21 = v12 - v20;
    v10 += v12 - v20;
    memset((void *)(*(_DWORD *)(a2 + 8) + *(_DWORD *)(a2 + 24)), 0, v12 - v20);
    v22 = *(_DWORD *)(a2 + 24) + v10;
    *(_DWORD *)(a2 + 8) += v21;
    *(_BYTE *)(v22 - 1) = v21 - 1;
  }
  if ( sub_D8910(v8, *(_DWORD *)(a2 + 20), *(_DWORD *)(a2 + 24), v10) <= 0 )
    return -1;
  v16 = sub_D8D8C(a1[248]);
  if ( v16 && (v17 = sub_D8D8C(a1[248]), v16 = sub_D8C78(v17), v16 < 0) )
  {
    sub_95494(a1, 80, 608, 68, "ssl/record/ssl3_record.c", 914);
    return -1;
  }
  else
  {
    if ( a4 )
      v18 = 0;
    else
      v18 = v13;
    v19 = v16;
    result = 1;
    if ( v18 )
      return sub_7F788(a2, v12, v19);
  }
  return result;
}
