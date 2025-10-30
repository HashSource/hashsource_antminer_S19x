int __fastcall sub_126AF4(int a1, unsigned int *a2)
{
  int v2; // r4
  unsigned int v3; // r3
  unsigned int v5; // r1
  unsigned __int8 *v6; // r5
  signed __int64 v7; // r2
  bool v8; // cf
  int v9; // r1
  int v10; // r5
  bool v11; // zf

  v2 = (int)a2;
  if ( !a2 )
  {
    sub_D0048(13, 227, 67, (int)"crypto/asn1/a_int.c", 322);
    return v2;
  }
  v3 = a2[1];
  if ( (v3 & 0xFFFFFEFF) != 2 )
  {
    v2 = 0;
    sub_D0048(13, 227, 225, (int)"crypto/asn1/a_int.c", 326);
    return v2;
  }
  v5 = *a2;
  if ( v5 > 8 )
  {
    sub_D0048(13, 225, 223, (int)"crypto/asn1/a_int.c", 213);
  }
  else
  {
    v6 = *(unsigned __int8 **)(v2 + 8);
    if ( v6 )
    {
      v2 = v3 & 0x100;
      if ( v5 )
      {
        v7 = *v6;
        if ( v5 != 1 )
        {
          v7 = v6[1] | ((unsigned __int64)*v6 << 8);
          if ( v5 != 2 )
          {
            v7 = v6[2] | (unsigned __int64)(v7 << 8);
            if ( v5 != 3 )
            {
              v7 = v6[3] | (unsigned __int64)(v7 << 8);
              if ( v5 != 4 )
              {
                v7 = v6[4] | (unsigned __int64)(v7 << 8);
                if ( v5 != 5 )
                {
                  v7 = v6[5] | (unsigned __int64)(v7 << 8);
                  if ( v5 != 6 )
                  {
                    v7 = v6[6] | (unsigned __int64)(v7 << 8);
                    if ( v5 == 8 )
                      v7 = v6[7] | (unsigned __int64)(v7 << 8);
                  }
                }
              }
            }
          }
        }
        if ( v2 )
        {
          if ( v7 < 0 )
          {
            v11 = HIDWORD(v7) == 0x80000000;
            if ( HIDWORD(v7) == 0x80000000 )
              v11 = (_DWORD)v7 == 0;
            if ( !v11 )
            {
              v2 = 0;
              sub_D0048(13, 224, 224, (int)"crypto/asn1/a_int.c", 265);
              return v2;
            }
          }
          else
          {
            v8 = (_DWORD)v7 == 0;
            LODWORD(v7) = -(int)v7;
            HIDWORD(v7) -= 2 * HIDWORD(v7) + !v8;
          }
          goto LABEL_19;
        }
        v9 = HIDWORD(v7);
        v10 = v7;
        if ( v7 < 0 )
        {
          sub_D0048(13, 224, 223, (int)"crypto/asn1/a_int.c", 272);
          return v2;
        }
      }
      else
      {
        v10 = 0;
        v9 = 0;
        if ( (v3 & 0x100) != 0 )
        {
          v7 = 0;
LABEL_19:
          *(_QWORD *)a1 = v7;
          return 1;
        }
      }
      *(_DWORD *)a1 = v10;
      v2 = 1;
      *(_DWORD *)(a1 + 4) = v9;
      return v2;
    }
  }
  return 0;
}
