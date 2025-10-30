int __fastcall sub_7D90C(const char *a1)
{
  const char *v1; // r4
  char *v2; // r0
  char *v3; // r2
  int v4; // r5
  char *v5; // r2
  char *v6; // r2
  const unsigned __int16 *v7; // r2
  const char *i; // r0
  int v9; // r3
  int v10; // t1
  int v12; // r4
  char *v13; // r2
  int v14; // r7
  size_t v15; // r0
  __int16 v16; // r12
  int v17; // r0
  __int16 v18; // r12
  int v19; // r0
  __int16 v20; // r12
  const char *v21; // [sp+0h] [bp-14h] BYREF
  const char *v22; // [sp+4h] [bp-10h] BYREF
  __int16 v23; // [sp+8h] [bp-Ch] BYREF
  char v24[2]; // [sp+Ah] [bp-Ah] BYREF

  v1 = a1;
  v2 = strchr(a1, 58);
  if ( v2 )
  {
    v21 = v1;
    v12 = sub_7D81C(0, &v21, v2, 3600);
    v13 = strchr(++v21, 58);
    if ( v13 )
    {
      v14 = sub_7D81C(v12, &v21, v13, 60);
      v15 = strlen(++v21);
      return sub_7D81C(v14, &v21, &v21[v15], 1);
    }
LABEL_20:
    v4 = -1;
    *_errno_location() = 22;
    return v4;
  }
  if ( !strpbrk(v1, "HMS") )
  {
    if ( strlen(v1) == 6 )
    {
      v16 = *(_WORD *)v1;
      v24[0] = 0;
      v23 = v16;
      v22 = (const char *)&v23;
      v17 = sub_7D81C(0, &v22, v24, 3600);
      v18 = *((_WORD *)v1 + 1);
      v24[0] = 0;
      v23 = v18;
      v22 = (const char *)&v23;
      v19 = sub_7D81C(v17, &v22, v24, 60);
      v20 = *((_WORD *)v1 + 2);
      v24[0] = 0;
      v22 = (const char *)&v23;
      v23 = v20;
      return sub_7D81C(v19, &v22, v24, 1);
    }
    goto LABEL_20;
  }
  v22 = v1;
  v3 = strchr(v1, 72);
  if ( v3 )
  {
    v4 = sub_7D81C(0, &v22, v3, 3600);
    v1 = ++v22;
  }
  else
  {
    v4 = 0;
  }
  v5 = strchr(v1, 77);
  if ( v5 )
  {
    v4 = sub_7D81C(v4, &v22, v5, 60);
    v1 = ++v22;
  }
  v6 = strchr(v1, 83);
  if ( v6 )
  {
    v4 = sub_7D81C(v4, &v22, v6, 1);
    v1 = ++v22;
  }
  v7 = *_ctype_b_loc();
  for ( i = v1; ; v22 = i )
  {
    v10 = *(unsigned __int8 *)i++;
    v9 = v10;
    if ( (v7[v10] & 0x2000) == 0 )
      break;
  }
  if ( v9 )
  {
    v4 = -1;
    *_errno_location() = 22;
  }
  return v4;
}
