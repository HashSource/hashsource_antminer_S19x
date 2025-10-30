unsigned int *__fastcall sub_2446C(unsigned int *result, unsigned __int8 *a2, size_t a3, __int16 a4)
{
  bool v4; // zf
  unsigned int v6; // r4
  unsigned __int8 *v9; // lr
  int v10; // r9
  int v11; // r3
  unsigned __int8 *v12; // r1
  unsigned __int8 *v13; // r2
  int v14; // r3
  int v15; // t1
  int v16; // r12
  int v17; // t1
  size_t v18; // r1
  unsigned __int8 *v19; // r0
  void *v20; // r0
  void *v21; // r0

  v4 = a3 == 0;
  if ( a3 )
    v4 = a2 == 0;
  if ( v4 )
    return result;
  v6 = *result;
  if ( !*result || (*(_WORD *)(v6 + 2) & 0x80) != 0 )
  {
LABEL_20:
    v21 = (void *)sub_243AC(result, a3, a4);
    return (unsigned int *)memcpy(v21, a2, a3);
  }
  v9 = *(unsigned __int8 **)(v6 + 4);
  if ( !v9 )
  {
LABEL_17:
    v18 = a3;
    v19 = 0;
    goto LABEL_18;
  }
  v10 = *a2;
  while ( 1 )
  {
    v11 = *v9;
    if ( v11 == 61 )
    {
      v16 = v10;
    }
    else
    {
      if ( v11 != v10 )
        goto LABEL_15;
      v12 = a2;
      v13 = v9;
      while ( 1 )
      {
        v15 = *++v13;
        v14 = v15;
        v17 = *++v12;
        v16 = v17;
        if ( v14 == 61 )
          break;
        if ( v14 != v16 )
          goto LABEL_15;
      }
    }
    if ( v16 == 61 )
      break;
LABEL_15:
    v6 += 8;
    if ( (*(_WORD *)(v6 + 2) & 0x80) != 0 )
      goto LABEL_20;
    v9 = *(unsigned __int8 **)(v6 + 4);
    if ( !v9 )
      goto LABEL_17;
  }
  v19 = v9;
  v18 = a3;
LABEL_18:
  v20 = (void *)sub_63BA4(v19, v18, 0, 0);
  result = (unsigned int *)memcpy(v20, a2, a3);
  *(_WORD *)(v6 + 2) = a4;
  *(_DWORD *)(v6 + 4) = result;
  return result;
}
