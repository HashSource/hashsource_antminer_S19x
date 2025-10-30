int __fastcall sub_189964(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r4
  int result; // r0
  unsigned int v5; // r6
  unsigned int v6; // r1
  unsigned int v7; // r6
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r2
  unsigned int v10; // r12
  unsigned __int64 v11; // r4
  int v12; // off
  int v13; // off
  int v14; // kr00_4

  v3 = a1;
  if ( a1 < a2 )
  {
    result = 0;
    goto LABEL_14;
  }
  v5 = __clz(HIDWORD(a2));
  if ( HIDWORD(a2) )
  {
    v6 = __clz(HIDWORD(a1));
    if ( HIDWORD(v3) )
      goto LABEL_5;
    goto LABEL_17;
  }
  v6 = __clz(HIDWORD(a1));
  v5 = __clz(a2) + 32;
  if ( !HIDWORD(v3) )
LABEL_17:
    v6 = __clz(a1) + 32;
LABEL_5:
  v7 = v5 - v6;
  v8 = a2 << v7;
  if ( v3 >= a2 << v7 )
  {
    result = 1 << v7;
    v3 -= v8;
  }
  else
  {
    result = 0;
  }
  if ( v7 )
  {
    v9 = v8 >> 1;
    v10 = v7;
    do
    {
      while ( v3 >= v9 )
      {
        v11 = v3 - v9;
        v12 = (v11 + (unsigned int)v11) >> 32;
        LODWORD(v11) = 2 * v11;
        HIDWORD(v11) += v12;
        v3 = v11 + 1;
        if ( !--v10 )
          goto LABEL_13;
      }
      v13 = (v3 + (unsigned int)v3) >> 32;
      LODWORD(v3) = 2 * v3;
      HIDWORD(v3) += v13;
      --v10;
    }
    while ( v10 );
LABEL_13:
    v14 = v3;
    v3 >>= v7;
    result = result + v14 - ((_DWORD)v3 << v7);
  }
LABEL_14:
  if ( a3 )
    *a3 = v3;
  return result;
}
