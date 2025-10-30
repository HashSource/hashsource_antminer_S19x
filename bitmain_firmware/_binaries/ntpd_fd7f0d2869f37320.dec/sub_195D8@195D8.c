int __fastcall sub_195D8(int *a1, _BYTE **a2, __int16 *a3, int a4)
{
  char *v6; // r6
  size_t v8; // r0
  size_t v9; // r9
  int v10; // r3
  int v11; // r2
  int v12; // r11
  int v13; // r4
  size_t v14; // r7
  char *v15; // r5
  int v16; // r6
  int v17; // t1
  _BOOL4 v18; // r1
  char *v19; // r1
  _DWORD *v20; // r12
  size_t v21; // r0
  bool v22; // cf
  size_t v23; // r0
  size_t v25; // r0
  const char *v26; // r4
  unsigned int v27; // r0
  int v28; // r3
  int v29; // r1
  _BYTE *v30; // r5
  int v31; // r3
  bool v32; // zf
  _BOOL4 v33; // r2
  int v34; // r7
  size_t v35; // r0
  _DWORD v37[7]; // [sp+8h] [bp-1Ch] BYREF

  v6 = (&off_B46E0)[a4];
  v8 = sub_194E4(0, v6);
  v9 = v8;
  if ( a4 == -2 )
  {
    v14 = v8;
    v16 = 0;
    v25 = 12;
    v26 = "syntax error";
  }
  else
  {
    v10 = *a3;
    v37[0] = v6;
    v11 = asc_8F658[v10];
    if ( v11 == -215 )
      goto LABEL_43;
    v12 = 663 - v11;
    if ( v11 >= 0 )
      v13 = 0;
    else
      v13 = -v11;
    if ( v12 >= 208 )
      v12 = 208;
    if ( v13 >= v12 )
    {
LABEL_43:
      v14 = v9;
      v25 = 27;
      v16 = 1;
      v26 = "syntax error, unexpected %s";
    }
    else
    {
      v14 = v8;
      v15 = (char *)&unk_8F9C0 + 2 * v11 + -2 + 2 * v13;
      v16 = 1;
      do
      {
        v17 = *((__int16 *)v15 + 1);
        v15 += 2;
        v18 = v13 == v17;
        if ( v13 == 1 )
          v18 = 0;
        if ( v18 )
        {
          if ( v16 == 5 )
            goto LABEL_43;
          v19 = (&off_B46E0)[v13];
          v20 = &v37[v16++ + 6];
          *(v20 - 6) = v19;
          v21 = sub_194E4(0, v19);
          v22 = __CFADD__(v21, v14);
          v23 = v21 + v14;
          if ( v22 )
            return 2;
          v14 = v23;
        }
        ++v13;
      }
      while ( v13 != v12 );
      switch ( v16 )
      {
        case 1:
          v9 = v14;
          goto LABEL_43;
        case 2:
          v25 = 41;
          v26 = "syntax error, unexpected %s, expecting %s";
          break;
        case 3:
          v25 = 47;
          v26 = "syntax error, unexpected %s, expecting %s or %s";
          break;
        case 4:
          v25 = 53;
          v26 = "syntax error, unexpected %s, expecting %s or %s or %s";
          break;
        case 5:
          v25 = 59;
          v26 = "syntax error, unexpected %s, expecting %s or %s or %s or %s";
          break;
        default:
          v26 = 0;
          v25 = strlen(0);
          break;
      }
    }
  }
  v22 = __CFADD__(v25, v14);
  v27 = v25 + v14;
  if ( v22 )
    return 2;
  if ( v27 <= *a1 )
  {
    v29 = 0;
    v30 = *a2;
    v31 = *(unsigned __int8 *)v26;
    while ( 1 )
    {
      *v30 = v31;
      if ( !v31 )
        return 0;
      v32 = v31 == 37;
      v31 = *((unsigned __int8 *)v26 + 1);
      if ( !v32 )
        goto LABEL_32;
      v33 = v31 == 115;
      if ( v29 >= v16 )
        v33 = 0;
      if ( v33 )
      {
        v34 = v29 + 1;
        v26 += 2;
        v35 = sub_194E4((int)v30, (char *)v37[v29]);
        v31 = *(unsigned __int8 *)v26;
        v29 = v34;
        v30 += v35;
      }
      else
      {
LABEL_32:
        ++v30;
        ++v26;
      }
    }
  }
  else
  {
    v28 = 2 * v27;
    if ( v27 > 2 * v27 )
      v28 = -1;
    else
      *a1 = v28;
    if ( v27 > 2 * v27 )
      *a1 = v28;
    return 1;
  }
}
