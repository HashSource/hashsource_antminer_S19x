bool __fastcall sub_A8450(int a1, unsigned __int64 a2, unsigned int a3)
{
  int v6; // r3
  unsigned int v7; // r2
  int v8; // [sp+4h] [bp-4h] BYREF

  if ( a3 > 8 || !sub_A82B8(a1, a3, &v8) )
    return 0;
  v6 = v8 + a3 - 1;
  if ( a3 )
  {
    *(_BYTE *)(v8 + a3 - 1) = a2;
    a2 >>= 8;
    if ( a3 != 1 )
    {
      *(_BYTE *)(v6 - 1) = a2;
      a2 >>= 8;
      if ( a3 != 2 )
      {
        *(_BYTE *)(v6 - 2) = a2;
        a2 >>= 8;
        if ( a3 != 3 )
        {
          *(_BYTE *)(v6 - 3) = a2;
          a2 = (unsigned int)((__int64)a2 >> 8);
          if ( a3 != 4 )
          {
            *(_BYTE *)(v6 - 4) = a2;
            LODWORD(a2) = (unsigned int)a2 >> 8;
            if ( a3 != 5 )
            {
              *(_BYTE *)(v6 - 5) = a2;
              LODWORD(a2) = (unsigned int)a2 >> 8;
              if ( a3 != 6 )
              {
                v7 = (unsigned int)a2 >> 8;
                *(_BYTE *)(v6 - 6) = a2;
                LODWORD(a2) = (unsigned int)a2 >> 8;
                if ( a3 != 7 )
                {
                  LODWORD(a2) = 0;
                  *(_BYTE *)(v6 - 7) = v7;
                }
              }
            }
          }
        }
      }
    }
  }
  return a2 == 0;
}
