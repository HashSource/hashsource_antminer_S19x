bool __fastcall sub_112B8C(unsigned __int8 *a1, unsigned int a2, int *a3)
{
  unsigned __int8 *v4; // lr
  unsigned __int8 v5; // r9
  int v6; // r7
  unsigned __int8 *v7; // r0
  int v8; // r6
  int v9; // r3
  unsigned int v10; // r12
  int v11; // r8
  unsigned __int8 v12; // t1
  unsigned int v13; // r4
  char v14; // r3
  char v15; // r10
  _BYTE *v16; // r0
  _BYTE *v17; // r0
  bool v18; // zf

  if ( a2 <= (unsigned int)a1 || *a1 != 145 )
    return 0;
  v4 = a1 + 1;
  if ( a2 <= (unsigned int)(a1 + 1) )
    return 0;
  v5 = a1[1];
  v6 = 0;
  v7 = a1 + 2;
  v8 = v5 & 0x7F;
  if ( (v5 & 0x80) != 0 )
  {
    v10 = 7;
    while ( 1 )
    {
      v14 = v10 - 32;
      v15 = 32 - v10;
      if ( a2 <= (unsigned int)v7 )
        return 0;
      v12 = *v7++;
      v5 = v12;
      v13 = v12 & 0x7F;
      v11 = v8 | (v13 << v10);
      v10 += 7;
      v8 = v11;
      v9 = (v13 << v14) | (v13 >> v15) | v6;
      v6 = v9;
      if ( (v12 & 0x80) == 0 )
      {
        if ( v10 <= 0x3F )
          goto LABEL_20;
        goto LABEL_12;
      }
    }
  }
  v9 = 0;
  LOBYTE(v10) = 7;
  v11 = v5 & 0x7F;
LABEL_20:
  if ( (v5 & 0x40) != 0 )
  {
    v8 = -(1 << v10) | v11;
    v6 = ((unsigned __int64)-__SPAIR64__((1 << (v10 - 32)) | (1u >> (32 - v10)), 1 << v10) >> 32) | v9;
  }
LABEL_12:
  v16 = (_BYTE *)(v7 - v4);
  if ( !v16 )
    return 0;
  v17 = &v16[(_DWORD)v4];
  if ( !v17 )
    return 0;
  *a3 = v8;
  if ( (_BYTE *)a2 != v17 )
    return 0;
  v18 = v6 == 0;
  if ( !v6 )
    return 1;
  return v18;
}
