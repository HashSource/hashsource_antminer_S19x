int __fastcall sub_7ED54(const char *a1)
{
  const char *v1; // r4
  char *v2; // r2
  int v3; // r4
  char *v4; // r2
  int v5; // r0
  int v6; // r7
  size_t v7; // r0
  int v8; // r6
  int v10; // r3
  bool v11; // zf
  char *v12; // r3
  const char *v13; // r1
  int v14; // r3
  bool v15; // zf
  int v17; // t1
  int v18; // r0
  __int16 v19; // r12
  int v20; // r0
  __int16 v21; // r12
  char *v22; // r2
  int v23; // r0
  char *v24; // r2
  int v25; // r0
  char *v26; // r2
  int v27; // r0
  const unsigned __int16 **v28; // r0
  const char *v29; // r3
  const unsigned __int16 *v30; // r12
  int v31; // r1
  int v32; // t1
  const char *v33; // [sp+0h] [bp-10h] BYREF
  const char *v34; // [sp+4h] [bp-Ch] BYREF
  __int16 v35; // [sp+8h] [bp-8h] BYREF
  char v36[2]; // [sp+Ah] [bp-6h] BYREF

  v1 = a1;
  v2 = strchr(a1, 58);
  if ( v2 )
  {
    v34 = v1;
    v3 = sub_7EC68(0, &v34, v2, 3600);
    v4 = strchr(++v34, 58);
    if ( v4 )
    {
      v5 = sub_7EC68(v3, &v34, v4, 60);
      ++v34;
      v6 = v5;
      v7 = strlen(v34);
      return sub_7EC68(v6, &v34, &v34[v7], 1);
    }
LABEL_39:
    v8 = -1;
    *_errno_location() = 22;
    return v8;
  }
  v10 = *(unsigned __int8 *)v1;
  if ( !*v1 )
    goto LABEL_26;
  v11 = v10 == 72;
  if ( v10 != 72 )
    v11 = v10 == 77;
  LOBYTE(v2) = !v11;
  if ( v10 == 83 )
    v12 = 0;
  else
    v12 = v2;
  if ( !v12 )
    goto LABEL_28;
  v13 = v1 + 1;
  v14 = *((unsigned __int8 *)v1 + 1);
  if ( !v1[1] )
  {
LABEL_26:
    if ( strlen(v1) == 6 )
    {
      v35 = *(_WORD *)v1;
      v36[0] = 0;
      v34 = (const char *)&v35;
      v18 = sub_7EC68(0, &v34, v36, 3600);
      v19 = *((_WORD *)v1 + 1);
      v36[0] = 0;
      v35 = v19;
      v34 = (const char *)&v35;
      v20 = sub_7EC68(v18, &v34, v36, 60);
      v21 = *((_WORD *)v1 + 2);
      v36[0] = 0;
      v34 = (const char *)&v35;
      v35 = v21;
      return sub_7EC68(v20, &v34, v36, 1);
    }
    goto LABEL_39;
  }
  while ( 1 )
  {
    v15 = v14 == 72;
    if ( v14 != 72 )
      v15 = v14 == 77;
    LOBYTE(v2) = !v15;
    if ( !(v14 == 83 ? 0 : v2) )
      break;
    v17 = *(unsigned __int8 *)++v13;
    v14 = v17;
    if ( !v17 )
      goto LABEL_26;
  }
LABEL_28:
  v33 = v1;
  v22 = strchr(v1, 72);
  if ( v22 )
  {
    v23 = sub_7EC68(0, &v33, v22, 3600);
    v1 = ++v33;
    v8 = v23;
  }
  else
  {
    v8 = 0;
  }
  v24 = strchr(v1, 77);
  if ( v24 )
  {
    v25 = sub_7EC68(v8, &v33, v24, 60);
    v1 = ++v33;
    v8 = v25;
  }
  v26 = strchr(v1, 83);
  if ( v26 )
  {
    v27 = sub_7EC68(v8, &v33, v26, 1);
    v1 = ++v33;
    v8 = v27;
  }
  v28 = _ctype_b_loc();
  v29 = v1;
  v30 = *v28;
  while ( 1 )
  {
    v32 = *(unsigned __int8 *)v29++;
    v31 = v32;
    if ( (v30[v32] & 0x2000) == 0 )
      break;
    v33 = v29;
  }
  if ( v31 )
    goto LABEL_39;
  return v8;
}
