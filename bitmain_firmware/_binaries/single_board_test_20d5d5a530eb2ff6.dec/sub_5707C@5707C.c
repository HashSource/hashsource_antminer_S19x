_DWORD *__fastcall sub_5707C(_DWORD *result, char *src, size_t n, int a4, int a5)
{
  size_t v5; // r7
  char *v6; // lr
  char *v7; // r4
  _DWORD *v10; // r4
  char *v11; // r3
  unsigned int v12; // r5
  unsigned int v13; // r8
  size_t v14; // r1
  size_t v15; // r2
  unsigned int v16; // r0
  char *v17; // r0
  size_t v18; // r2
  size_t v19; // r8
  int v20; // r3
  size_t v21; // r2
  size_t v22; // r2
  char *v23; // r0

  v5 = result[23];
  if ( !v5 )
  {
    result[22] = src;
    goto LABEL_24;
  }
  v6 = (char *)result[22];
  if ( src == &v6[v5] )
    goto LABEL_24;
  v7 = &src[n - a4];
  if ( (unsigned int)v7 >= 0x10000 )
  {
    result[22] = a4;
    result[23] = v7;
    return result;
  }
  v10 = result;
  if ( a5 )
  {
    v11 = (char *)result[21];
    if ( v6 == v11 )
    {
LABEL_24:
      result[23] = v5 + n;
      return result;
    }
    v12 = result[25];
    v13 = result[24] - (_DWORD)v11;
    v14 = v5 - result[26];
    if ( v12 <= 0x10000 )
    {
      v15 = 0x10000 - v12;
      if ( v13 < 0x10000 - v12 )
      {
        v15 = result[24] - (_DWORD)v11;
        v16 = 0;
        goto LABEL_19;
      }
    }
    else
    {
      v15 = 0;
    }
    v16 = v13 - v15;
LABEL_19:
    result = memcpy(&v11[v16], &v6[v14 - v15], v15);
    v21 = v10[26] + v13 + n;
    v10[22] = v10[21];
    v10[23] = v21;
    return result;
  }
  v17 = (char *)result[21];
  if ( v6 == v17 )
  {
    if ( v5 + n > v10[17] )
    {
      memcpy(v6, &v6[v5 - (0x10000 - n)], 0x10000 - n);
      v23 = (char *)v10[21];
      v22 = 0x10000 - n;
      v10[23] = 0x10000 - n;
    }
    else
    {
      v22 = v5;
      v23 = v6;
    }
    result = memcpy(&v23[v22], src, n);
    v10[23] += n;
  }
  else
  {
    v18 = 0x10000 - n;
    if ( v18 >= v5 )
      v18 = v5;
    v19 = v18;
    memcpy(v17, &v6[v5 - v18], v18);
    result = memcpy((void *)(v10[21] + v19), src, n);
    v20 = v10[21];
    v10[23] = v19 + n;
    v10[22] = v20;
  }
  return result;
}
