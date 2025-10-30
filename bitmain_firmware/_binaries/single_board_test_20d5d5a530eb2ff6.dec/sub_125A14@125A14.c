size_t *__fastcall sub_125A14(size_t *result, int a2, int a3)
{
  char v3; // r3
  int v4; // r6
  int v5; // r5
  bool v6; // cf
  int v7; // r1
  int v8; // r7
  int v9; // r5
  size_t v10; // r1
  size_t *v11; // r4
  bool v12; // cc
  size_t v13; // r0
  size_t v14; // r2
  int v15; // r3
  int v16; // r1
  size_t v17; // r2
  int v18; // t1
  int v19; // r9
  char *v20; // r0
  char *v21; // r8

  v3 = ~(_BYTE)a2 & 7;
  v4 = 1 << v3;
  v5 = a2 + 7;
  v6 = a2 < 0;
  v7 = a2 & ~(a2 >> 31);
  if ( v6 )
    v7 = v5;
  if ( a3 )
    v8 = 1 << v3;
  else
    LOBYTE(v8) = 0;
  if ( result )
  {
    v9 = v7 >> 3;
    v10 = *result;
    v11 = result;
    v12 = v9 < (int)*result;
    result[3] &= 0xFFFFFFF0;
    if ( !v12 || (v13 = result[2]) == 0 )
    {
      if ( !a3 )
        return (size_t *)1;
      v19 = v9 + 1;
      v20 = (char *)sub_E0788((void *)v11[2], v10, (void *)(v9 + 1), (size_t)"crypto/asn1/a_bitstr.c", 165);
      v21 = v20;
      if ( !v20 )
      {
        sub_D0048(13, 183, 65, (int)"crypto/asn1/a_bitstr.c", 167);
        return 0;
      }
      if ( (int)(v19 - *v11) > 0 )
        memset(&v20[*v11], 0, v19 - *v11);
      v13 = (size_t)v21;
      v11[2] = (size_t)v21;
      *v11 = v19;
    }
    *(_BYTE *)(v13 + v9) = v8 | *(_BYTE *)(v13 + v9) & ~(_BYTE)v4;
    if ( (int)*v11 > 0 )
    {
      v14 = v11[2];
      v15 = *v11 - 1;
      v16 = *(unsigned __int8 *)(v14 + v15);
      v17 = v14 + v15;
      if ( !v16 )
      {
        do
        {
          *v11 = v15;
          if ( !v15 )
            break;
          v18 = *(unsigned __int8 *)--v17;
          --v15;
        }
        while ( !v18 );
      }
    }
    return (size_t *)1;
  }
  return result;
}
