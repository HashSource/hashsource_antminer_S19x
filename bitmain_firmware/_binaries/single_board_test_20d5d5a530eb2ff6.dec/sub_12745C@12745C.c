int __fastcall sub_12745C(unsigned __int64 *a1, int *a2, unsigned __int8 **a3, unsigned int a4)
{
  unsigned __int8 *v6; // r2
  int v7; // lr
  int v9; // r0
  unsigned int v10; // r6
  int v12; // r6
  unsigned __int8 *v13; // r6
  int v14; // t1
  unsigned __int64 v15; // r2
  unsigned int v16; // r8
  char *v17; // r3
  int v18; // r9
  int v19; // r10
  int v20; // r1
  unsigned int v21; // r12
  int v22; // r9
  int v23; // r1
  _BYTE v24[8]; // [sp+8h] [bp-8h] BYREF

  if ( a4 )
  {
    v6 = *a3;
    if ( a4 == 1 )
    {
      sub_126300(v24, a2, v6, 1u);
      v15 = v24[0];
LABEL_17:
      *a1 = v15;
      return 1;
    }
    v7 = *v6;
    if ( *v6 )
    {
      if ( v7 != 255 )
      {
        v9 = 0;
LABEL_7:
        v10 = a4 - v9;
        if ( a4 - v9 > 8 )
        {
          sub_D0048(13, 101, 223, (int)"crypto/asn1/a_int.c", 615);
          return 0;
        }
        sub_126300(v24, a2, v6, a4);
        v15 = v24[0];
        if ( v10 != 1 )
        {
          v15 = v24[1] | ((unsigned __int64)v24[0] << 8);
          if ( v10 != 2 )
          {
            v15 = v24[2] | (v15 << 8);
            if ( v10 != 3 )
            {
              v15 = v24[3] | (v15 << 8);
              if ( v10 != 4 )
              {
                v15 = v24[4] | (v15 << 8);
                if ( v10 != 5 )
                {
                  v15 = v24[5] | (v15 << 8);
                  if ( v10 != 6 )
                  {
                    v15 = v24[6] | (v15 << 8);
                    if ( v10 == 8 )
                      v15 = v24[7] | (v15 << 8);
                  }
                }
              }
            }
          }
        }
        goto LABEL_17;
      }
      v16 = a4 - 31;
      if ( a4 <= 0x21 )
      {
        v9 = 0;
        v12 = 1;
      }
      else
      {
        v17 = (char *)(v6 + 35);
        v9 = 0;
        v18 = 1;
        do
        {
          v19 = (unsigned __int8)*(v17 - 34);
          v12 = v18 + 32;
          v20 = (unsigned __int8)*(v17 - 33);
          v21 = v18 + 33;
          v22 = (unsigned __int8)*(v17 - 32);
          __pld(v17);
          v17 += 32;
          v23 = (unsigned __int8)*(v17 - 43)
              | (unsigned __int8)*(v17 - 44)
              | (unsigned __int8)*(v17 - 45)
              | (unsigned __int8)*(v17 - 46)
              | (unsigned __int8)*(v17 - 47)
              | (unsigned __int8)*(v17 - 48)
              | (unsigned __int8)*(v17 - 49)
              | (unsigned __int8)*(v17 - 61)
              | (unsigned __int8)*(v17 - 62)
              | (unsigned __int8)*(v17 - 63)
              | v22
              | v19
              | v20
              | (unsigned __int8)*(v17 - 60)
              | (unsigned __int8)*(v17 - 59)
              | (unsigned __int8)*(v17 - 58)
              | (unsigned __int8)*(v17 - 57)
              | (unsigned __int8)*(v17 - 56)
              | (unsigned __int8)*(v17 - 55)
              | (unsigned __int8)*(v17 - 54)
              | (unsigned __int8)*(v17 - 53)
              | (unsigned __int8)*(v17 - 52)
              | (unsigned __int8)*(v17 - 51)
              | (unsigned __int8)*(v17 - 50)
              | (unsigned __int8)*(v17 - 42)
              | (unsigned __int8)*(v17 - 41)
              | (unsigned __int8)*(v17 - 40)
              | (unsigned __int8)*(v17 - 39)
              | (unsigned __int8)*(v17 - 38)
              | (unsigned __int8)*(v17 - 37)
              | (unsigned __int8)*(v17 - 36)
              | (unsigned __int8)*(v17 - 35);
          v18 = v12;
          v9 |= v23;
        }
        while ( v16 > v21 );
      }
      v13 = &v6[v12];
      do
      {
        v14 = *v13++;
        v9 |= v14;
      }
      while ( a4 > v13 - v6 );
      if ( !v9 )
        goto LABEL_7;
    }
    if ( (v7 & 0x80) != (v6[1] & 0x80) )
    {
      v9 = 1;
      goto LABEL_7;
    }
    sub_D0048(13, 226, 221, (int)"crypto/asn1/a_int.c", 187);
  }
  else
  {
    sub_D0048(13, 226, 222, (int)"crypto/asn1/a_int.c", 154);
  }
  return 0;
}
