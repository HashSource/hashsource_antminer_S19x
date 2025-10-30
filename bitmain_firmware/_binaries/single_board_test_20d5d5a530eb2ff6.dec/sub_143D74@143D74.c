int __fastcall sub_143D74(_BYTE *a1, int a2)
{
  int v2; // r2
  _BYTE *v3; // r4
  int v4; // r3
  char v5; // r5
  int v6; // r7
  _BYTE *v7; // r6
  _BYTE *v8; // r5
  int result; // r0
  _BYTE *v10; // r4
  int v11; // r1
  int v12; // r3
  int v13; // t1
  int v14; // r2
  int v15; // r3
  int v16; // r2
  _BYTE *v17; // r3

  v2 = 0;
  v3 = a1 - 1;
  do
  {
    v4 = v2 >> 3;
    v5 = v2++ & 7;
    *++v3 = ((int)*(unsigned __int8 *)(a2 + v4) >> v5) & 1;
  }
  while ( v2 != 256 );
  v6 = 0;
  v7 = a1;
  v8 = a1 + 256;
  result = 0;
  do
  {
    if ( *v7 )
    {
      v10 = v7;
      v11 = 1;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (unsigned int)(v11 + v6) > 0xFF )
            goto LABEL_15;
          v13 = (char)*++v10;
          v12 = v13;
          if ( v13 )
            break;
LABEL_14:
          if ( ++v11 == 7 )
            goto LABEL_15;
        }
        v14 = (char)*v7;
        v15 = v12 << v11;
        if ( v14 + v15 <= 15 )
        {
          *v7 = v14 + v15;
          *v10 = 0;
          goto LABEL_14;
        }
        v16 = v14 - v15;
        if ( v16 >= -15 )
        {
          v17 = v10;
          *v7 = v16;
          while ( *v17 )
          {
            *v17++ = 0;
            if ( v8 == v17 )
              goto LABEL_14;
          }
          ++v11;
          *v17 = 1;
          if ( v11 != 7 )
            continue;
        }
        break;
      }
    }
LABEL_15:
    ++v6;
    ++v7;
  }
  while ( v6 != 256 );
  return result;
}
