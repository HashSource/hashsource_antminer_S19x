int __fastcall sub_127724(_BYTE *a1, __int64 a2, int a3)
{
  char *v4; // r4
  int v5; // r5
  unsigned int v6; // r6
  int v7; // r1
  unsigned int v8; // r2
  int v9; // r3
  int v10; // r5
  unsigned int v11; // r7
  _BYTE *v12; // r1
  char *v13; // r4
  _BYTE *v14; // r6
  int v15; // r3
  int v16; // t1
  unsigned int v17; // r3
  char *v19; // r1
  int v20; // r6
  char *v21; // r7
  int v22; // r8
  int v23; // lr
  int v24; // r12
  int v25; // r5
  int v26; // r5
  int v27; // lr
  int v28; // r8
  int v29; // r5
  int v30; // r12
  char *v31; // r6
  int v32; // t1
  int v33; // r3
  char v34; // [sp+7h] [bp-5h] BYREF

  v4 = &v34;
  v5 = 8;
  while ( 1 )
  {
    v6 = (unsigned __int8)a2;
    v7 = a2 >> 8;
    HIDWORD(a2) >>= 8;
    --v5;
    LODWORD(a2) = v7;
    *v4 = v6;
    if ( !a2 )
      break;
    --v4;
  }
  v8 = 8 - v5;
  if ( v5 == 8 )
  {
    if ( a1 )
      *a1 = v8;
    return 1;
  }
  v9 = a3 == 0;
  if ( v6 <= 0x7F )
    v9 = 0;
  if ( v9 )
  {
    v10 = 0;
    v9 = 1;
  }
  else if ( a3 )
  {
    if ( v6 <= 0x80 )
    {
      if ( v6 == 128 )
      {
        if ( v8 == 1 )
        {
          v10 = 0;
        }
        else
        {
          if ( v8 <= 0x21 )
          {
            v20 = 1;
          }
          else
          {
            v19 = v4 + 35;
            v20 = 1;
            v21 = &v4[((-26 - v5) & 0xFFFFFFE0) + 67];
            do
            {
              v20 += 32;
              v22 = (unsigned __int8)*(v19 - 22);
              v23 = (unsigned __int8)*(v19 - 20);
              v24 = (unsigned __int8)*(v19 - 21);
              v25 = (unsigned __int8)*(v19 - 23)
                  | (unsigned __int8)*(v19 - 24)
                  | (unsigned __int8)*(v19 - 26)
                  | (unsigned __int8)*(v19 - 27)
                  | (unsigned __int8)*(v19 - 34)
                  | (unsigned __int8)*(v19 - 33)
                  | (unsigned __int8)*(v19 - 32)
                  | (unsigned __int8)*(v19 - 31)
                  | (unsigned __int8)*(v19 - 30)
                  | (unsigned __int8)*(v19 - 29)
                  | (unsigned __int8)*(v19 - 28)
                  | (unsigned __int8)*(v19 - 25);
              __pld(v19);
              v26 = (unsigned __int8)*(v19 - 13)
                  | (unsigned __int8)*(v19 - 14)
                  | (unsigned __int8)*(v19 - 15)
                  | (unsigned __int8)*(v19 - 16)
                  | (unsigned __int8)*(v19 - 17)
                  | (unsigned __int8)*(v19 - 18)
                  | (unsigned __int8)*(v19 - 19)
                  | v23
                  | v24
                  | v22
                  | v25
                  | (unsigned __int8)*(v19 - 12)
                  | (unsigned __int8)*(v19 - 11)
                  | (unsigned __int8)*(v19 - 10)
                  | (unsigned __int8)*(v19 - 9)
                  | (unsigned __int8)*(v19 - 8)
                  | (unsigned __int8)*(v19 - 7);
              v27 = (unsigned __int8)*(v19 - 4);
              v28 = v26 | (unsigned __int8)*(v19 - 6);
              v29 = (unsigned __int8)*(v19 - 3);
              v30 = v28 | (unsigned __int8)*(v19 - 5);
              v19 += 32;
              v9 |= v30 | v27 | v29;
            }
            while ( v21 != v19 );
          }
          v31 = &v4[v20];
          do
          {
            v32 = (unsigned __int8)*v31++;
            v9 |= v32;
          }
          while ( v8 > v31 - v4 );
          if ( v9 )
            v33 = 255;
          else
            v33 = 0;
          v10 = v33;
          v9 = v33 & 1;
        }
      }
      else
      {
        v10 = 255;
      }
    }
    else
    {
      v10 = 255;
      v9 = 1;
    }
  }
  else
  {
    v10 = 0;
    v9 = 0;
  }
  v11 = v8 + v9;
  if ( !a1 )
    return v11;
  v12 = &a1[v11];
  v13 = &v4[v8];
  v14 = &a1[v9];
  v15 = v10 & 1;
  *a1 = v10;
  do
  {
    v16 = (unsigned __int8)*--v13;
    v17 = v15 + (v16 ^ v10);
    *--v12 = v17;
    v15 = v17 >> 8;
  }
  while ( v12 != v14 );
  return v11;
}
