int __fastcall sub_126550(unsigned int *a1, _BYTE **a2)
{
  unsigned __int8 *v2; // r4
  unsigned int v3; // r6
  bool v4; // zf
  int v5; // r5
  unsigned int v6; // r2
  int v7; // r7
  int v8; // r3
  int v9; // lr
  int v10; // lr
  int result; // r0
  _BYTE *v12; // r3
  _BYTE *v13; // r5
  unsigned __int8 *v14; // r4
  int v15; // r3
  unsigned __int8 *v16; // r6
  int v17; // t1
  unsigned int v18; // r3
  char *v19; // r2
  int v20; // r12
  int v21; // r5
  bool v22; // cc
  int v23; // r9
  int v24; // r0
  int v25; // r12
  int v26; // r8
  int v27; // r0
  unsigned __int8 *v28; // r5
  int v29; // t1
  int v30; // r3

  v2 = (unsigned __int8 *)a1[2];
  v3 = *a1;
  v4 = v2 == 0;
  if ( v2 )
    v4 = v3 == 0;
  if ( v4 )
  {
    v5 = 0;
    result = 1;
    v7 = 0;
    v3 = 0;
    v10 = 1;
    if ( !a2 )
      return result;
    goto LABEL_12;
  }
  v6 = *v2;
  v7 = a1[1] & 0x100;
  v8 = v6 > 0x7F && (a1[1] & 0x100) == 0;
  if ( v8 )
  {
    v7 = 0;
    v9 = 1;
  }
  else
  {
    v9 = a1[1] & 0x100;
    if ( v7 )
    {
      if ( v6 <= 0x80 )
      {
        if ( v6 == 128 )
        {
          if ( v3 == 1 )
          {
            v7 = 0;
            v9 = 0;
          }
          else
          {
            if ( v3 <= 0x21 )
            {
              v21 = 1;
            }
            else
            {
              v19 = (char *)(v2 + 35);
              v20 = 1;
              do
              {
                v21 = v20 + 32;
                v22 = v3 - 31 > v20 + 33;
                v23 = (unsigned __int8)*(v19 - 29);
                v24 = (unsigned __int8)*(v19 - 30);
                v25 = (unsigned __int8)*(v19 - 34)
                    | (unsigned __int8)*(v19 - 33)
                    | (unsigned __int8)*(v19 - 32)
                    | (unsigned __int8)*(v19 - 31);
                v26 = (unsigned __int8)*(v19 - 28);
                __pld(v19);
                v19 += 32;
                v27 = (unsigned __int8)*(v19 - 47)
                    | (unsigned __int8)*(v19 - 48)
                    | (unsigned __int8)*(v19 - 49)
                    | (unsigned __int8)*(v19 - 50)
                    | (unsigned __int8)*(v19 - 51)
                    | (unsigned __int8)*(v19 - 52)
                    | (unsigned __int8)*(v19 - 53)
                    | (unsigned __int8)*(v19 - 54)
                    | (unsigned __int8)*(v19 - 55)
                    | (unsigned __int8)*(v19 - 56)
                    | (unsigned __int8)*(v19 - 57)
                    | (unsigned __int8)*(v19 - 58)
                    | (unsigned __int8)*(v19 - 59)
                    | v26
                    | v23
                    | v25
                    | v24
                    | (unsigned __int8)*(v19 - 46)
                    | (unsigned __int8)*(v19 - 45)
                    | (unsigned __int8)*(v19 - 44)
                    | (unsigned __int8)*(v19 - 43)
                    | (unsigned __int8)*(v19 - 42)
                    | (unsigned __int8)*(v19 - 41)
                    | (unsigned __int8)*(v19 - 40)
                    | (unsigned __int8)*(v19 - 39)
                    | (unsigned __int8)*(v19 - 38)
                    | (unsigned __int8)*(v19 - 37)
                    | (unsigned __int8)*(v19 - 36)
                    | (unsigned __int8)*(v19 - 35);
                v20 = v21;
                v8 |= v27;
              }
              while ( v22 );
            }
            v28 = &v2[v21];
            do
            {
              v29 = *v28++;
              v8 |= v29;
            }
            while ( v3 > v28 - v2 );
            if ( v8 )
              v30 = 255;
            else
              v30 = 0;
            v7 = v30;
            v9 = v30 & 1;
          }
        }
        else
        {
          v9 = 0;
          v7 = 255;
        }
      }
      else
      {
        v7 = 255;
        v9 = 1;
      }
    }
  }
  v10 = v9 + v3;
  result = v10;
  v5 = v10;
  if ( a2 )
  {
LABEL_12:
    v12 = *a2;
    if ( *a2 )
    {
      *v12 = v7;
      v13 = &v12[v5];
      v14 = &v2[v3];
      v15 = v7 & 1;
      if ( v3 )
      {
        v16 = &v14[-v3];
        do
        {
          v17 = *--v14;
          v18 = v15 + (v17 ^ v7);
          *--v13 = v18;
          v15 = v18 >> 8;
        }
        while ( v14 != v16 );
      }
      *a2 += v10;
    }
  }
  return result;
}
