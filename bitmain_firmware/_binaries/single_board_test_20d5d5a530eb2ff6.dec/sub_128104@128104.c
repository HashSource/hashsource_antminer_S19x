int __fastcall sub_128104(signed int *a1)
{
  int v2; // r6
  int v3; // r1
  unsigned __int8 *v4; // r5
  int v5; // r2
  _BYTE *v6; // r3
  int v7; // r4
  int v8; // r3
  signed int i; // r2
  unsigned __int8 v10; // r2
  int v12; // r1
  const char *v13; // r0
  int v14; // r3
  bool v15; // cf
  int v16; // r1
  signed int v17; // r1
  int v18; // r0

  if ( a1[1] != 28 )
    return 0;
  v2 = *a1;
  v3 = *a1 & 3;
  if ( !v3 )
  {
    v4 = (unsigned __int8 *)a1[2];
    if ( v2 <= 0 )
      goto LABEL_17;
    if ( !*v4 )
    {
      v3 = v4[1];
      if ( !v4[1] )
      {
        v5 = v4[2];
        v6 = (_BYTE *)a1[2];
        if ( v4[2] )
          return v3;
        while ( 1 )
        {
          v5 += 4;
          if ( v2 <= v5 )
            break;
          v7 = (unsigned __int8)v6[4];
          if ( v6[4] )
            return 0;
          v3 = (unsigned __int8)v6[5];
          v6 += 4;
          if ( v3 )
            return v7;
          if ( v6[2] )
            return v3;
        }
        if ( v2 > 3 )
        {
          v8 = 3;
          for ( i = a1[2]; ; i = a1[2] )
          {
            v10 = *(_BYTE *)(i + v8);
            v8 += 4;
            *v4++ = v10;
            if ( *a1 <= v8 )
              break;
          }
        }
LABEL_17:
        *v4 = 0;
        v12 = *a1;
        v13 = (const char *)a1[2];
        v14 = v12 + 3;
        v15 = v12 < 0;
        v16 = v12 & ~(v12 >> 31);
        if ( v15 )
          v16 = v14;
        v17 = v16 >> 2;
        *a1 = v17;
        v18 = sub_1280A8(v13, v17);
        v3 = 1;
        a1[1] = v18;
        return v3;
      }
      return *v4;
    }
    return v3;
  }
  return 0;
}
