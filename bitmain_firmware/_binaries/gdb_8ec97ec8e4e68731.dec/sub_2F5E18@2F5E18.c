int __fastcall sub_2F5E18(int *a1, unsigned int a2, int a3, const char *a4, int a5, int a6, int a7, int a8)
{
  unsigned int *v12; // r8
  int v13; // r0
  int v14; // r4
  int v15; // r3
  unsigned int v16; // r1
  int v17; // r2
  int result; // r0
  _DWORD *v19; // r3
  int v20; // r2
  int v21; // r1
  size_t v22; // r0
  char *v23; // r0
  unsigned int v24; // r12
  int v25; // r2
  unsigned int v26; // r0
  int v27; // r2
  unsigned int v28; // r1
  bool v29; // zf
  int v30; // r3
  int v31; // r0
  unsigned int v32; // lr
  unsigned int v33; // r3
  int v34; // r0

  v12 = (unsigned int *)a1[7];
  v13 = sub_2ACBF4(*a1, 28);
  v14 = v13;
  if ( !v13 )
    return 0;
  *(_DWORD *)(v13 + 4) = a2;
  *(_BYTE *)(v13 + 24) = a3;
  *(_DWORD *)(v13 + 12) = a5;
  *(_DWORD *)v13 = 0;
  *(_DWORD *)(v13 + 16) = a6;
  *(_DWORD *)(v13 + 20) = a7;
  *(_BYTE *)(v13 + 25) = a8;
  if ( !a4 || !*a4 )
  {
    *(_DWORD *)(v13 + 8) = 0;
    goto LABEL_5;
  }
  v22 = strlen(a4);
  v23 = (char *)sub_2ACBF4(*a1, v22 + 1);
  *(_DWORD *)(v14 + 8) = v23;
  if ( !v23 )
    return 0;
  strcpy(v23, a4);
LABEL_5:
  if ( !v12 )
  {
LABEL_12:
    v19 = sub_2AB368(20);
    if ( v19 )
    {
      v20 = a1[3];
      v21 = a1[7];
      *v19 = a2;
      v19[1] = v21;
      v19[2] = v14;
      a1[3] = v20 + 1;
      a1[8] = v14;
      a1[7] = (int)v19;
      return 1;
    }
    return 0;
  }
  v15 = v12[2];
  v16 = *(_DWORD *)(v15 + 4);
  if ( v16 != a2 || *(unsigned __int8 *)(v15 + 24) != a3 || *(unsigned __int8 *)(v15 + 25) != a8 )
  {
    if ( !*(_BYTE *)(v15 + 25) )
    {
      if ( *(_BYTE *)(v14 + 25)
        || (v24 = *(_DWORD *)(v14 + 4), v16 < v24)
        || v16 == v24 && *(unsigned __int8 *)(v15 + 24) < (unsigned int)*(unsigned __int8 *)(v14 + 24) )
      {
        v17 = a1[8];
        *(_DWORD *)v14 = v15;
        v12[2] = v14;
        if ( !v17 )
          a1[8] = v14;
      }
      else
      {
        v25 = a1[8];
        v26 = *(_DWORD *)(v25 + 4);
        if ( v24 <= v26
          && (v24 != v26 || *(unsigned __int8 *)(v14 + 24) <= (unsigned int)*(unsigned __int8 *)(v25 + 24)) )
        {
          v31 = *(_DWORD *)v25;
          if ( !*(_DWORD *)v25
            || (v32 = *(_DWORD *)(v31 + 4), v24 > v32)
            || v24 == v32 && *(unsigned __int8 *)(v14 + 24) > (unsigned int)*(unsigned __int8 *)(v31 + 24) )
          {
            *(_DWORD *)v14 = v31;
            *(_DWORD *)v25 = v14;
            return 1;
          }
        }
        v27 = *(_DWORD *)v15;
        if ( *(_DWORD *)v15 )
        {
          while ( 1 )
          {
            if ( v16 >= v24
              && (v16 != v24 || *(unsigned __int8 *)(v14 + 24) <= (unsigned int)*(unsigned __int8 *)(v15 + 24)) )
            {
              v28 = *(_DWORD *)(v27 + 4);
              if ( v24 > v28
                || v24 == v28 && *(unsigned __int8 *)(v14 + 24) > (unsigned int)*(unsigned __int8 *)(v27 + 24) )
              {
                break;
              }
            }
            v34 = *(_DWORD *)v27;
            v15 = v27;
            if ( !*(_DWORD *)v27 )
              goto LABEL_45;
            v16 = *(_DWORD *)(v27 + 4);
            v27 = *(_DWORD *)v27;
          }
          v34 = *(_DWORD *)v15;
          v27 = v15;
        }
        else
        {
          v34 = *(_DWORD *)v15;
          v27 = v12[2];
        }
LABEL_45:
        v33 = *v12;
        a1[8] = v27;
        *(_DWORD *)v14 = v34;
        *(_DWORD *)v27 = v14;
        if ( v33 > a2 )
        {
          *v12 = a2;
          return 1;
        }
      }
      return 1;
    }
    goto LABEL_12;
  }
  result = 1;
  v29 = v15 == a1[8];
  v30 = *(_DWORD *)v15;
  if ( v29 )
    a1[8] = v14;
  *(_DWORD *)v14 = v30;
  v12[2] = v14;
  return result;
}
