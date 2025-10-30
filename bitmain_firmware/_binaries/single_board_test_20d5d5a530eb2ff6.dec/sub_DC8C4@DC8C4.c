bool __fastcall sub_DC8C4(int a1, const void *a2, size_t a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v8; // r4
  int v9; // r0
  size_t v10; // r0
  char *v11; // r7
  char *v12; // r3
  _BYTE *v13; // r1
  int v14; // t1
  _BOOL4 v15; // r4
  int v17; // r9
  int v18; // r0
  _BYTE *v19; // r2
  int v20; // t1
  int v21; // r0
  int v22; // r4
  int v23; // r0
  size_t v24; // [sp+4h] [bp-128h] BYREF
  _BYTE v25[140]; // [sp+8h] [bp-124h] BYREF
  char v26; // [sp+94h] [bp-98h] BYREF
  _BYTE dest[148]; // [sp+98h] [bp-94h] BYREF

  if ( a4 )
  {
    v8 = a4;
    if ( a4 != *(_DWORD **)a1 && (a2 == 0) | (a3 >> 31) )
      return 0;
    *(_DWORD *)a1 = a4;
  }
  else
  {
    v8 = *(_DWORD **)a1;
    if ( !*(_DWORD *)a1 )
      return 0;
  }
  if ( (sub_D8D70((int)v8) & 2) != 0 )
    return 0;
  if ( !a2 )
    return sub_D17B4(*(int **)(a1 + 4), *(int **)(a1 + 8)) != 0;
  v9 = sub_D8C6C((int)v8);
  if ( v9 > 144 )
    return 0;
  if ( (int)a3 > v9 )
  {
    if ( sub_D1520(*(_DWORD **)(a1 + 4), v8, a5)
      && sub_D16D8(*(_DWORD *)(a1 + 4), (int)a2, a3)
      && sub_D16E4(*(int **)(a1 + 4), (int)dest, &v24) )
    {
      v10 = v24;
      goto LABEL_11;
    }
    return 0;
  }
  if ( a3 > 0x90 )
    return 0;
  memcpy(dest, a2, a3);
  v10 = a3;
  v24 = a3;
LABEL_11:
  if ( v10 != 144 )
    memset(&dest[v10], 0, 144 - v10);
  v11 = &v26;
  v12 = &v26;
  v13 = v25;
  do
  {
    v14 = *((_DWORD *)v12 + 1);
    v12 += 4;
    *(_DWORD *)v13 = v14 ^ 0x36363636;
    v13 += 4;
  }
  while ( v13 != dest );
  if ( !sub_D1520(*(_DWORD **)(a1 + 8), v8, a5) )
    goto LABEL_16;
  v17 = *(_DWORD *)(a1 + 8);
  v18 = sub_D8C6C((int)v8);
  if ( !sub_D16D8(v17, (int)v25, v18) )
    goto LABEL_16;
  v19 = v25;
  do
  {
    v20 = *((_DWORD *)v11 + 1);
    v11 += 4;
    *(_DWORD *)v19 = v20 ^ 0x5C5C5C5C;
    v19 += 4;
  }
  while ( v19 != dest );
  if ( sub_D1520(*(_DWORD **)(a1 + 12), v8, a5)
    && (v21 = (int)v8, v22 = *(_DWORD *)(a1 + 12), v23 = sub_D8C6C(v21), sub_D16D8(v22, (int)v25, v23)) )
  {
    v15 = sub_D17B4(*(int **)(a1 + 4), *(int **)(a1 + 8)) != 0;
  }
  else
  {
LABEL_16:
    v15 = 0;
  }
  sub_E07F8((int)dest, 0x90u);
  sub_E07F8((int)v25, 0x90u);
  return v15;
}
