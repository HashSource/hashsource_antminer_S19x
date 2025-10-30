int __fastcall sub_126D44(unsigned __int64 *a1, unsigned int *a2)
{
  unsigned int v3; // r3
  int v4; // r5
  unsigned int v5; // r1
  unsigned __int8 *v6; // r4
  unsigned __int64 v7; // r2

  if ( !a2 )
  {
    v4 = 0;
    sub_D0048(13, 230, 67, (int)"crypto/asn1/a_int.c", 357);
    return v4;
  }
  v3 = a2[1];
  if ( (v3 & 0xFFFFFEFF) == 2 )
  {
    v4 = a2[1] & 0x100;
    if ( (v3 & 0x100) == 0 )
    {
      v5 = *a2;
      if ( v5 > 8 )
      {
        sub_D0048(13, 225, 223, (int)"crypto/asn1/a_int.c", 213);
      }
      else
      {
        v6 = (unsigned __int8 *)a2[2];
        if ( v6 )
        {
          if ( v5 )
          {
            v7 = *v6;
            if ( v5 != 1 )
            {
              v7 = v6[1] | ((unsigned __int64)*v6 << 8);
              if ( v5 != 2 )
              {
                v7 = v6[2] | (v7 << 8);
                if ( v5 != 3 )
                {
                  v7 = v6[3] | (v7 << 8);
                  if ( v5 != 4 )
                  {
                    v7 = v6[4] | (v7 << 8);
                    if ( v5 != 5 )
                    {
                      v7 = v6[5] | (v7 << 8);
                      if ( v5 != 6 )
                      {
                        v7 = v6[6] | (v7 << 8);
                        if ( v5 == 8 )
                          v7 = v6[7] | (v7 << 8);
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v7 = 0;
          }
          v4 = 1;
          *a1 = v7;
        }
      }
      return v4;
    }
    sub_D0048(13, 230, 226, (int)"crypto/asn1/a_int.c", 365);
    return 0;
  }
  else
  {
    sub_D0048(13, 230, 225, (int)"crypto/asn1/a_int.c", 361);
    return 0;
  }
}
