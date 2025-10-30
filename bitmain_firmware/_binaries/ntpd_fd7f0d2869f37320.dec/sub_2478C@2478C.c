unsigned int *__fastcall sub_2478C(unsigned int *result, unsigned __int8 *a2, size_t a3, __int16 a4)
{
  bool v4; // zf
  unsigned int v6; // r4
  unsigned __int8 *v9; // lr
  int v10; // r3
  unsigned __int8 *v11; // r3
  int v12; // r1
  int v13; // r12
  int v14; // r2
  int v15; // t1
  unsigned __int8 *v16; // r12
  void *v17; // r0
  int v18; // r0
  size_t v19; // r1
  void *v20; // r0

  v4 = a3 == 0;
  if ( a3 )
    v4 = a2 == 0;
  if ( v4 )
    return result;
  v6 = *result;
  if ( !*result || (*(_WORD *)(v6 + 2) & 0x80) != 0 )
  {
LABEL_15:
    v17 = (void *)sub_246C8(result, a3, a4);
    return (unsigned int *)memcpy(v17, a2, a3);
  }
  while ( 1 )
  {
    v9 = *(unsigned __int8 **)(v6 + 4);
    if ( !v9 )
      break;
    v10 = *v9;
    if ( v10 == 61 )
    {
      v16 = a2;
    }
    else
    {
      if ( *a2 != v10 )
        goto LABEL_14;
      v11 = a2 + 1;
      v12 = *(_DWORD *)(v6 + 4);
      while ( 1 )
      {
        v15 = *(unsigned __int8 *)++v12;
        v14 = v15;
        v16 = v11;
        if ( v15 == 61 )
          break;
        v13 = *v11++;
        if ( v13 != v14 )
          goto LABEL_14;
      }
    }
    if ( *v16 == 61 )
    {
      v18 = *(_DWORD *)(v6 + 4);
      v19 = a3;
      goto LABEL_17;
    }
LABEL_14:
    v6 += 8;
    if ( (*(_WORD *)(v6 + 2) & 0x80) != 0 )
      goto LABEL_15;
  }
  v19 = a3;
  v18 = 0;
LABEL_17:
  v20 = (void *)sub_64B04(v18, v19, 0, 0);
  result = (unsigned int *)memcpy(v20, a2, a3);
  *(_WORD *)(v6 + 2) = a4;
  *(_DWORD *)(v6 + 4) = result;
  return result;
}
