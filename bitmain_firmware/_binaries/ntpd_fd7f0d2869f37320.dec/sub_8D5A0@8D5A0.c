int __fastcall sub_8D5A0(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  bool v3; // cf
  bool v4; // zf
  unsigned __int64 v5; // r4
  __int64 v7; // r0
  unsigned int v8; // r6
  unsigned int v9; // r3
  unsigned int v10; // r3
  unsigned __int64 v11; // r6
  char v12; // lr
  unsigned __int64 v13; // r6
  unsigned __int64 v14; // r4
  int v15; // off
  int v16; // off
  __int64 v17; // r0

  v3 = HIDWORD(a1) >= HIDWORD(a2);
  v4 = HIDWORD(a1) == HIDWORD(a2);
  v5 = a1;
  if ( v4 )
    v3 = (unsigned int)v5 >= (unsigned int)a2;
  if ( !v3 )
  {
    LODWORD(v7) = 0;
    goto LABEL_16;
  }
  v8 = __clz(HIDWORD(a2));
  if ( HIDWORD(a2) )
  {
    v9 = __clz(HIDWORD(v5));
    if ( HIDWORD(v5) )
      goto LABEL_7;
    goto LABEL_19;
  }
  v8 = __clz(a2) + 32;
  v9 = __clz(HIDWORD(v5));
  if ( !HIDWORD(v5) )
LABEL_19:
    v9 = __clz(v5) + 32;
LABEL_7:
  v10 = v8 - v9;
  v11 = a2 << v10;
  v12 = v10;
  if ( v5 >= a2 << v10 )
  {
    LODWORD(v7) = 1 << v10;
    HIDWORD(v7) = (1 << (v10 - 32)) | (1u >> (32 - v10));
    v5 -= v11;
  }
  else
  {
    v7 = 0;
  }
  if ( v10 )
  {
    v13 = v11 >> 1;
    do
    {
      while ( v5 >= v13 )
      {
        v14 = v5 - v13;
        v15 = (v14 + (unsigned int)v14) >> 32;
        LODWORD(v14) = 2 * v14;
        HIDWORD(v14) += v15;
        v5 = v14 + 1;
        if ( !--v10 )
          goto LABEL_15;
      }
      v16 = (v5 + (unsigned int)v5) >> 32;
      LODWORD(v5) = 2 * v5;
      HIDWORD(v5) += v16;
      --v10;
    }
    while ( v10 );
LABEL_15:
    v17 = v7 + v5;
    v5 >>= v12;
    v7 = v17 - (v5 << v12);
  }
LABEL_16:
  if ( a3 )
    *a3 = v5;
  return v7;
}
