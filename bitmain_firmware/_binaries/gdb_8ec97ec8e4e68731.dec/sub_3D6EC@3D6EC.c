int __fastcall sub_3D6EC(int a1, const char *a2, _DWORD *a3, const char *a4)
{
  const char *v8; // r6
  size_t v9; // r0
  const char *v10; // r5
  bool v11; // r8
  size_t v12; // r2
  int v13; // r2
  unsigned int v14; // r3
  int v15; // r6
  unsigned int v16; // r5
  int v17; // r3
  unsigned int v18; // r2
  int v19; // t1
  int v20; // r3
  int v21; // r11
  int v22; // r6
  unsigned int v23; // r5
  unsigned int v24; // r2
  int v25; // r3
  int v26; // r5
  bool v27; // r10
  int v29; // r3
  unsigned int v30; // r8
  unsigned int v31; // r2
  int v32; // r3
  int v33; // t1
  int v34; // r6
  int v35; // t1
  int v36; // r3
  int v37; // r6
  unsigned int v38; // r5
  int v39; // r3
  size_t v40; // r2
  char *v41; // r6
  char *v42; // r3
  char *v43; // r5
  bool v44; // zf
  char *v45; // r5
  int v47; // r8
  char *v48; // r0
  char *v49; // r7
  _DWORD *v50; // [sp+14h] [bp-28h]
  void *ptr; // [sp+20h] [bp-1Ch] BYREF
  int v53; // [sp+24h] [bp-18h]
  _BYTE v54[20]; // [sp+28h] [bp-14h] BYREF

  v8 = (const char *)sub_3D0F4();
  v9 = strlen(a4);
  v11 = v9 > 2 && (v10 = &a4[v9], *(v10 - 3) == 99) && *(v10 - 2) == 115 && *(v10 - 1) == 104;
  sub_33BC54(a1 + 12, 0, *(_DWORD *)(a1 + 16), "exec ", 5u);
  if ( v8 )
  {
    v12 = strlen(v8);
    if ( 0x7FFFFFFF - *(_DWORD *)(a1 + 16) < v12 )
LABEL_65:
      sub_33D184("basic_string::append");
    sub_33C320(a1 + 12, v8, v12);
    v13 = *(_DWORD *)(a1 + 12);
    v14 = a1 + 20;
    v15 = *(_DWORD *)(a1 + 16);
    if ( v13 != a1 + 20 )
      v14 = *(_DWORD *)(a1 + 20);
    v16 = v15 + 1;
    if ( v13 == a1 + 20 )
      v14 = 15;
    if ( v16 > v14 )
    {
      sub_33B4F8(a1 + 12, v15, 0);
      v13 = *(_DWORD *)(a1 + 12);
    }
    *(_BYTE *)(v13 + v15) = 32;
    v17 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 16) = v16;
    *(_BYTE *)(v17 + v16) = 0;
  }
  v18 = (unsigned int)(a2 - 1);
  while ( 2 )
  {
    v19 = *(unsigned __int8 *)++v18;
    switch ( v19 )
    {
      case 0:
        v40 = strlen(a2);
        if ( 0x7FFFFFFF - *(_DWORD *)(a1 + 16) < v40 )
          goto LABEL_65;
        sub_33C320(a1 + 12, a2, v40);
        goto LABEL_47;
      case 9:
      case 10:
      case 32:
      case 33:
      case 34:
      case 36:
      case 38:
      case 39:
      case 40:
      case 41:
      case 59:
      case 60:
      case 62:
        v20 = *(_DWORD *)(a1 + 12);
        v21 = a1 + 20;
        v22 = *(_DWORD *)(a1 + 16);
        if ( v20 != a1 + 20 )
          v18 = *(_DWORD *)(a1 + 20);
        v23 = v22 + 1;
        if ( v20 == a1 + 20 )
          v18 = 15;
        if ( v23 > v18 )
        {
          sub_33B4F8(a1 + 12, v22, 0);
          v20 = *(_DWORD *)(a1 + 12);
        }
        v24 = 0;
        *(_BYTE *)(v20 + v22) = 39;
        v25 = *(_DWORD *)(a1 + 12);
        *(_DWORD *)(a1 + 16) = v23;
        *(_BYTE *)(v25 + v23) = 0;
        v26 = *(unsigned __int8 *)a2;
        if ( !*a2 )
          goto LABEL_38;
        v50 = a3;
        v27 = v11;
        break;
      default:
        continue;
    }
    break;
  }
  do
  {
    while ( 1 )
    {
      v34 = *(_DWORD *)(a1 + 16);
      if ( v26 == 39 )
        break;
      if ( v26 == 33 && v27 )
      {
        if ( (unsigned int)(0x7FFFFFFF - v34) <= 1 )
          goto LABEL_65;
        sub_33C320(a1 + 12, "\\!", 2);
      }
      else
      {
        v29 = *(_DWORD *)(a1 + 12);
        v30 = v34 + 1;
        if ( v21 == v29 )
          v31 = 15;
        else
          v31 = *(_DWORD *)(a1 + 20);
        if ( v30 > v31 )
        {
          sub_33B4F8(a1 + 12, v34, 0);
          v29 = *(_DWORD *)(a1 + 12);
        }
        *(_BYTE *)(v29 + v34) = v26;
        v24 = 0;
        v32 = *(_DWORD *)(a1 + 12);
        *(_DWORD *)(a1 + 16) = v30;
        *(_BYTE *)(v32 + v30) = 0;
      }
      v33 = *(unsigned __int8 *)++a2;
      v26 = v33;
      if ( !v33 )
        goto LABEL_37;
    }
    if ( (unsigned int)(0x7FFFFFFF - v34) <= 3 )
      goto LABEL_65;
    sub_33C320(a1 + 12, "'\\''", 4);
    v35 = *(unsigned __int8 *)++a2;
    v26 = v35;
  }
  while ( v35 );
LABEL_37:
  a3 = v50;
LABEL_38:
  v36 = *(_DWORD *)(a1 + 12);
  v37 = *(_DWORD *)(a1 + 16);
  if ( v21 != v36 )
    v24 = *(_DWORD *)(a1 + 20);
  v38 = v37 + 1;
  if ( v21 == v36 )
    v24 = 15;
  if ( v38 > v24 )
  {
    sub_33B4F8(a1 + 12, v37, 0);
    v36 = *(_DWORD *)(a1 + 12);
  }
  *(_BYTE *)(v36 + v37) = 39;
  v39 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 16) = v38;
  *(_BYTE *)(v39 + v38) = 0;
LABEL_47:
  ptr = v54;
  v53 = 0;
  v54[0] = 0;
  sub_33B7B0(&ptr);
  sub_33BA6C((int)&ptr, v53, 0, 1u, 32);
  sub_33C320(&ptr, *a3, a3[1]);
  sub_33C320(a1 + 12, ptr, v53);
  if ( ptr != v54 )
    sub_339E64(ptr);
  v41 = *(char **)a1;
  v42 = *(char **)(a1 + 8);
  v43 = *(char **)(a1 + 4);
  if ( (unsigned int)&v42[-*(_DWORD *)a1] <= 0xF )
  {
    v47 = v43 - v41;
    v48 = (char *)sub_9836C(16);
    v49 = v48;
    if ( v41 != v43 )
      memmove(v48, v41, v43 - v41);
    if ( *(_DWORD *)a1 )
      sub_339E64(*(void **)a1);
    v43 = &v49[v47];
    *(_DWORD *)(a1 + 4) = &v49[v47];
    *(_DWORD *)a1 = v49;
    *(_DWORD *)(a1 + 8) = v49 + 16;
    if ( &v49[v47] != v49 + 16 )
      goto LABEL_51;
LABEL_62:
    sub_3E040(a1);
    goto LABEL_54;
  }
  if ( v43 == v42 )
    goto LABEL_62;
LABEL_51:
  v44 = v43 == 0;
  v45 = v43 + 4;
  if ( !v44 )
    *((_DWORD *)v45 - 1) = a4;
  *(_DWORD *)(a1 + 4) = v45;
LABEL_54:
  ptr = "-c";
  sub_3E130(a1, &ptr);
  ptr = *(void **)(a1 + 12);
  sub_3E130(a1, &ptr);
  ptr = 0;
  return sub_3E130(a1, &ptr);
}
