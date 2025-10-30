_DWORD *__fastcall sub_31E68C(int a1, int a2, void **a3)
{
  size_t v6; // r0
  int v7; // r5
  int v8; // r8
  void *v9; // r5
  void *v10; // r0
  bool v11; // zf
  void *v12; // r6
  _DWORD *v13; // r5
  void *v14; // r0
  void *v16; // r0
  void *v17[4]; // [sp+0h] [bp-38h] BYREF
  void *v18; // [sp+10h] [bp-28h]
  int v19; // [sp+18h] [bp-20h]
  void *ptr; // [sp+1Ch] [bp-1Ch]
  int v21; // [sp+24h] [bp-14h]

  v6 = strlen((const char *)a1);
  if ( *(_BYTE *)a1 == 95 && *(_BYTE *)(a1 + 1) == 90 )
  {
    v8 = 0;
  }
  else
  {
    v7 = a2 & 0x10;
    if ( (a2 & 0x10) == 0 )
      return (_DWORD *)v7;
    v8 = 1;
  }
  sub_31D964(a1, a2, v6, v17);
  v9 = malloc(16 * v19);
  v18 = v9;
  v10 = malloc(4 * v21);
  v11 = v9 == 0;
  if ( v9 )
    v11 = v10 == 0;
  v12 = v10;
  ptr = v10;
  if ( v11 )
  {
    v16 = v9;
    v7 = 0;
    free(v16);
    free(v12);
    return (_DWORD *)v7;
  }
  if ( v8 )
  {
    v13 = sub_319DD0((int)v17);
    v14 = ptr;
    if ( (a2 & 1) == 0 )
      goto LABEL_14;
  }
  else
  {
    v13 = (_DWORD *)sub_31CFBC(v17, 1);
    v14 = ptr;
    if ( (a2 & 1) == 0 )
      goto LABEL_14;
  }
  if ( *(_BYTE *)v17[3] )
  {
    free(v14);
LABEL_11:
    v7 = 0;
    free(v18);
    return (_DWORD *)v7;
  }
LABEL_14:
  free(v14);
  if ( !v13 )
    goto LABEL_11;
  *a3 = v18;
  return v13;
}
