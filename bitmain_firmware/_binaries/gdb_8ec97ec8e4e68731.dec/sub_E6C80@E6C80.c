char *__fastcall sub_E6C80(char *result, char *a2, char **a3, int a4, int a5, char *dest, int a7, char a8)
{
  int v8; // r7
  int v9; // r12
  char **v10; // r3
  char *v11; // r6
  char *v12; // r5
  char *v13; // r4
  int v14; // r2
  char ***v15; // r11
  size_t v16; // r8
  char *v17; // r8
  unsigned int *v18; // r3
  unsigned int v19; // r1
  int v20; // r9
  size_t v21; // r5
  char *v22; // r2
  char **v23; // r6
  char *v24; // r2
  bool v25; // zf
  _BYTE *v26; // r2
  size_t v27; // r2
  char *v28; // r1
  char *v29; // r0
  int v30; // r3
  char *v31; // r11
  int v32; // r1
  char *v33; // r0
  unsigned int v34; // lr
  _BOOL4 v35; // r3
  char *v36; // r3
  int v37; // r1
  int v38; // r2
  char *v39; // r0
  unsigned int v40; // lr
  int v41; // r3
  size_t v42; // r3
  int v43; // r2
  int v44; // [sp+18h] [bp-1Ch]
  int v45; // [sp+1Ch] [bp-18h]
  int v46; // [sp+20h] [bp-14h]
  char *src; // [sp+24h] [bp-10h]
  size_t n; // [sp+28h] [bp-Ch]
  char *na; // [sp+28h] [bp-Ch]
  size_t v50; // [sp+2Ch] [bp-8h]

  while ( 1 )
  {
    v8 = (int)a3;
    v9 = a4;
    v10 = a3;
    v11 = a2;
    v12 = result;
    v13 = dest;
    if ( a5 >= a7 )
      v14 = a7;
    else
      v14 = a5;
    if ( v9 <= v14 )
    {
      v15 = (char ***)a2;
      v16 = a2 - result;
      if ( result != a2 )
        result = (char *)memmove(dest, result, v16);
      v17 = &dest[v16];
      if ( dest != v17 )
      {
        if ( (char *)v8 == v11 )
        {
LABEL_30:
          if ( v17 == v13 )
            return result;
          v27 = v17 - v13;
          v28 = v13;
          v29 = v12;
          return (char *)memmove(v29, v28, v27);
        }
        while ( 1 )
        {
          v18 = *(unsigned int **)v13;
          v12 += 4;
          v19 = **(_DWORD **)v13;
          result = **v15;
          if ( (unsigned int)result > v19 )
            *((_DWORD *)v12 - 1) = *v15;
          else
            v13 += 4;
          if ( (unsigned int)result > v19 )
            ++v15;
          else
            *((_DWORD *)v12 - 1) = v18;
          if ( v17 == v13 )
            break;
          if ( (char ***)v8 == v15 )
            goto LABEL_30;
        }
      }
      return result;
    }
    v20 = (int)result;
    if ( a5 <= a7 )
      break;
    if ( v9 <= a5 )
    {
      v37 = (a2 - result) >> 2;
      v31 = &v11[4 * (a5 / 2)];
      v45 = a5 / 2;
      while ( v37 > 0 )
      {
        v38 = v37 >> 1;
        v39 = &v12[4 * (v37 >> 1)];
        v40 = **(_DWORD **)v31;
        if ( v40 > **(_DWORD **)v39 )
        {
          while ( 1 )
          {
            v41 = v38 >> 1;
            if ( !v38 )
              goto LABEL_67;
            v39 = &v12[4 * v41];
            if ( v40 <= **(_DWORD **)v39 )
              goto LABEL_77;
            v38 >>= 1;
          }
        }
        v41 = v37 >> 1;
        v38 = v37;
LABEL_77:
        v12 = v39 + 4;
        v37 = v38 - v41 - 1;
      }
LABEL_67:
      v44 = (int)&v12[-v20] >> 2;
    }
    else
    {
      v30 = (v8 - (int)a2) >> 2;
      v31 = a2;
      v12 = &result[4 * (v9 / 2)];
      v44 = v9 / 2;
      while ( v30 > 0 )
      {
        v32 = v30 >> 1;
        v33 = &v31[4 * (v30 >> 1)];
        v34 = **(_DWORD **)v12;
        if ( v34 >= **(_DWORD **)v33 )
        {
          while ( 1 )
          {
            v43 = v32 >> 1;
            if ( !v32 )
              goto LABEL_41;
            v33 = &v31[4 * v43];
            if ( **(_DWORD **)v33 > v34 )
              goto LABEL_78;
            v32 >>= 1;
          }
        }
        v43 = v30 >> 1;
        v32 = v30;
LABEL_78:
        v31 = v33 + 4;
        v30 = v32 - v43 - 1;
      }
LABEL_41:
      v45 = (v31 - v11) >> 2;
    }
    src = v12;
    v35 = v9 - v44 > v45;
    v46 = v9 - v44;
    if ( v45 > a7 )
      v35 = 0;
    if ( v35 )
    {
      if ( v45 )
      {
        n = v31 - v11;
        if ( v31 != v11 )
          memmove(dest, v11, v31 - v11);
        v36 = &dest[n];
        if ( v12 != v11 )
        {
          memmove(&v31[-(v11 - v12)], v12, v11 - v12);
          v36 = &dest[n];
        }
        if ( v36 != dest )
          memmove(v12, dest, n);
        v12 += n;
      }
    }
    else if ( v46 > a7 )
    {
      sub_E75B4(v12);
      v12 += v31 - v11;
    }
    else if ( v46 )
    {
      v42 = v11 - v12;
      if ( v12 != v11 )
      {
        memmove(dest, v12, v11 - v12);
        v42 = v11 - v12;
      }
      na = &dest[v42];
      if ( v31 != v11 )
      {
        v50 = v42;
        memmove(v12, v11, v31 - v11);
        v42 = v50;
      }
      v12 = &v31[-v42];
      if ( na != dest )
        memmove(&v31[-v42], dest, v42);
    }
    else
    {
      v12 = v31;
    }
    sub_E6C80(v20, (int)src, (int)v12, v44, v45, dest, a7, a8);
    a3 = (char **)v8;
    a5 -= v45;
    a2 = v31;
    result = v12;
    a4 = v46;
  }
  v21 = v8 - (_DWORD)a2;
  if ( v8 != (_DWORD)a2 )
  {
    result = (char *)memmove(dest, a2, v8 - (_DWORD)a2);
    v10 = (char **)v8;
  }
  v22 = &dest[v21];
  if ( v11 == (char *)v20 )
  {
    if ( v22 != dest )
    {
      v28 = dest;
      v29 = (char *)(v8 - v21);
      v27 = v21;
      return (char *)memmove(v29, v28, v27);
    }
  }
  else if ( dest != v22 )
  {
    v23 = (char **)(v11 - 4);
    v24 = v22 - 4;
    do
    {
      while ( 1 )
      {
        --v10;
        result = *v23;
        if ( **(_DWORD **)v24 > *(_DWORD *)*v23 )
          break;
        v25 = dest == v24;
        *v10 = *(char **)v24;
        v24 -= 4;
        if ( v25 )
          return result;
      }
      v25 = v20 == (_DWORD)v23;
      *v10 = result;
      --v23;
    }
    while ( !v25 );
    v26 = v24 + 4;
    if ( v26 != dest )
    {
      v27 = v26 - dest;
      v28 = dest;
      v29 = (char *)v10 - v27;
      return (char *)memmove(v29, v28, v27);
    }
  }
  return result;
}
