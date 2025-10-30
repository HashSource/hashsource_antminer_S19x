int __fastcall sub_19348(int *a1, _BYTE **a2, __int16 *a3, int a4)
{
  char *v7; // r6
  size_t v8; // r0
  size_t v9; // r8
  int v10; // r3
  int v11; // r2
  int v12; // r11
  int v13; // r4
  int v14; // r6
  size_t v15; // r7
  char *v16; // r5
  int v17; // t1
  _BOOL4 v18; // r1
  char *v19; // r1
  _DWORD *v20; // r12
  size_t v21; // r0
  bool v22; // cf
  int result; // r0
  size_t v24; // r0
  const char *v25; // r4
  unsigned int v26; // r8
  int v27; // r3
  _BYTE *v28; // r5
  int v29; // r3
  bool v30; // zf
  _BOOL4 v31; // r2
  int v32; // r7
  size_t v33; // r0
  _DWORD v35[7]; // [sp+8h] [bp-1Ch] BYREF

  v7 = (&off_B36E0)[a4];
  v8 = sub_19254(0, v7);
  v9 = v8;
  if ( a4 == -2 )
  {
    v24 = 12;
    v14 = 0;
    v25 = "syntax error";
  }
  else
  {
    v10 = *a3;
    v35[0] = v7;
    v11 = asc_8E108[v10];
    if ( v11 == -215 )
    {
      v24 = 27;
      v14 = 1;
      v25 = "syntax error, unexpected %s";
    }
    else
    {
      v12 = 663 - v11;
      if ( v11 >= 0 )
        v13 = 0;
      else
        v13 = -v11;
      if ( v12 >= 208 )
        v12 = 208;
      if ( v13 >= v12 )
      {
        v24 = 27;
        v14 = 1;
        v25 = "syntax error, unexpected %s";
      }
      else
      {
        v14 = 1;
        v15 = v8;
        v16 = (char *)&asc_8E108[v13 + 435 + v11];
        do
        {
          v17 = *((__int16 *)v16 + 1);
          v16 += 2;
          v18 = v17 == v13;
          if ( v13 == 1 )
            v18 = 0;
          if ( v18 )
          {
            if ( v14 == 5 )
            {
              v24 = 27;
              v14 = 1;
              v25 = "syntax error, unexpected %s";
              goto LABEL_19;
            }
            v19 = (&off_B36E0)[v13];
            v20 = &v35[v14++ + 6];
            *(v20 - 6) = v19;
            v21 = sub_19254(0, v19);
            v22 = __CFADD__(v21, v15);
            v15 += v21;
            if ( v22 )
              return 2;
          }
          ++v13;
        }
        while ( v12 != v13 );
        switch ( v14 )
        {
          case 1:
            v9 = v15;
            v24 = 27;
            v25 = "syntax error, unexpected %s";
            break;
          case 2:
            v9 = v15;
            v24 = 41;
            v25 = "syntax error, unexpected %s, expecting %s";
            break;
          case 3:
            v9 = v15;
            v24 = 47;
            v25 = "syntax error, unexpected %s, expecting %s or %s";
            break;
          case 4:
            v9 = v15;
            v24 = 53;
            v25 = "syntax error, unexpected %s, expecting %s or %s or %s";
            break;
          case 5:
            v9 = v15;
            v24 = 59;
            v25 = "syntax error, unexpected %s, expecting %s or %s or %s or %s";
            break;
          default:
            v9 = v15;
            v24 = strlen(0);
            v25 = 0;
            break;
        }
      }
    }
  }
LABEL_19:
  v22 = __CFADD__(v9, v24);
  v26 = v9 + v24;
  if ( v22 )
    return 2;
  if ( *a1 >= v26 )
  {
    result = *(unsigned __int8 *)v25;
    v28 = *a2;
    v29 = 0;
    while ( 1 )
    {
      *v28 = result;
      if ( !result )
        break;
      v30 = result == 37;
      result = *((unsigned __int8 *)v25 + 1);
      if ( !v30 )
        goto LABEL_27;
      v31 = result == 115;
      if ( v29 >= v14 )
        v31 = 0;
      if ( v31 )
      {
        v32 = v29 + 1;
        v25 += 2;
        v33 = sub_19254((int)v28, (char *)v35[v29]);
        v29 = v32;
        v28 += v33;
        result = *(unsigned __int8 *)v25;
      }
      else
      {
LABEL_27:
        ++v28;
        ++v25;
      }
    }
  }
  else
  {
    v27 = 2 * v26;
    result = 1;
    if ( 2 * v26 < v26 )
      v27 = -1;
    *a1 = v27;
  }
  return result;
}
