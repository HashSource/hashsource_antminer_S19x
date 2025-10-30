int __fastcall sub_A23FC(void *src, signed int n, int *a3)
{
  int v3; // r7
  _BOOL4 v4; // r4
  char *v8; // r0
  char *v9; // r5
  int v10; // r3
  char **v11; // r3
  __int16 v12; // r3
  int v13; // r7
  int v14; // r2
  int v15; // r7
  int v16; // r0
  int *v17; // r2
  int v18; // r3
  int v19; // t1
  int v20; // r4
  const char *v21; // r3
  char **v22; // r5
  __int16 v23; // r2
  int v24; // r3
  char *v25; // [sp+0h] [bp-34h] BYREF
  char *v26; // [sp+4h] [bp-30h] BYREF
  char dest[44]; // [sp+8h] [bp-2Ch] BYREF

  v25 = 0;
  v26 = 0;
  if ( !src )
    return 0;
  v3 = *a3;
  v4 = n > 39;
  if ( *a3 == 52 )
    v4 = 1;
  if ( v4 )
    return 0;
  memcpy(dest, src, n);
  dest[n] = 0;
  v8 = strchr(dest, 43);
  v9 = v8;
  if ( v8 )
  {
    v10 = (unsigned __int8)v8[1];
    *v8 = 0;
    if ( !v10 )
      return 0;
    sub_A2348(&v25, &v26, dest);
    sub_A2348(&v25, &v26, v9 + 1);
    if ( !v25 || !v26 )
      return 0;
    v11 = &off_202A94;
    while ( v26 != v11[2] || v25 != v11[4] )
    {
      v11 += 8;
      if ( v11 == &off_202DD4 )
        return 0;
    }
    v12 = *((_WORD *)v11 + 2);
    v13 = *a3 + 1;
    v14 = (int)a3 + 2 * *a3;
    *a3 = v13;
    *(_WORD *)(v14 + 4) = v12;
  }
  else
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = (&off_202A94)[v20];
      v22 = &(&off_202A94)[v20];
      v20 += 8;
      if ( v21 )
      {
        if ( !strcmp(dest, v21) )
          break;
      }
      if ( v20 == 208 )
        return 0;
    }
    v23 = *((_WORD *)v22 + 2);
    v24 = (int)a3 + 2 * v3;
    v13 = v3 + 1;
    *a3 = v13;
    *(_WORD *)(v24 + 4) = v23;
  }
  v15 = v13 - 1;
  if ( !v15 )
    return 1;
  v16 = *((unsigned __int16 *)a3 + v15 + 2);
  if ( *((unsigned __int16 *)a3 + 2) != v16 )
  {
    v17 = a3 + 1;
    v18 = 0;
    while ( v15 != ++v18 )
    {
      v19 = *((unsigned __int16 *)v17 + 1);
      v17 = (int *)((char *)v17 + 2);
      if ( v19 == v16 )
        goto LABEL_28;
    }
    return 1;
  }
LABEL_28:
  *a3 = v15;
  return 0;
}
