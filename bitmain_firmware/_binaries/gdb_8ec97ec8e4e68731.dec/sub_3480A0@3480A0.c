int __fastcall sub_3480A0(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  bool v3; // cf
  unsigned __int64 v4; // r4
  unsigned int v5; // r12
  unsigned int v6; // r1
  unsigned int v7; // r12
  char v8; // r8
  char v9; // r9
  unsigned __int64 v10; // r6
  unsigned __int64 v11; // r6
  unsigned int v12; // r2
  int v13; // off

  v3 = a1 >= a2;
  LODWORD(v4) = a1;
  if ( a1 < a2 )
    LODWORD(a1) = 0;
  HIDWORD(v4) = HIDWORD(a1);
  if ( !v3 )
    goto LABEL_16;
  v5 = __clz(HIDWORD(a2));
  if ( HIDWORD(a2) )
  {
    v6 = __clz(HIDWORD(a1));
    if ( HIDWORD(v4) )
      goto LABEL_7;
    goto LABEL_19;
  }
  v6 = __clz(HIDWORD(a1));
  v5 = __clz(a2) + 32;
  if ( !HIDWORD(v4) )
LABEL_19:
    v6 = __clz(v4) + 32;
LABEL_7:
  v7 = v5 - v6;
  v8 = v7 - 32;
  v9 = 32 - v7;
  v10 = a2 << v7;
  if ( v4 >= a2 << v7 )
  {
    LODWORD(a1) = 1 << v7;
    v4 -= v10;
    HIDWORD(a1) = (1 << v8) | (1u >> v9);
  }
  else
  {
    a1 = 0;
  }
  if ( v7 )
  {
    v11 = v10 >> 1;
    v12 = v7;
    do
    {
      while ( v4 >= v11 )
      {
        v4 = 2 * (v4 - v11) + 1;
        if ( !--v12 )
          goto LABEL_15;
      }
      v13 = (v4 + (unsigned int)v4) >> 32;
      LODWORD(v4) = 2 * v4;
      HIDWORD(v4) += v13;
      --v12;
    }
    while ( v12 );
LABEL_15:
    v3 = __CFADD__((_DWORD)a1, (_DWORD)v4);
    LODWORD(a1) = a1 + v4;
    LODWORD(v4) = ((unsigned int)v4 >> v7) | (HIDWORD(v4) << v9) | (HIDWORD(v4) >> v8);
    HIDWORD(a1) += v3 + HIDWORD(v4);
    HIDWORD(v4) >>= v7;
    a1 -= v4 << v7;
  }
LABEL_16:
  if ( a3 )
    *a3 = v4;
  return a1;
}
