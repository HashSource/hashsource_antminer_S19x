int __fastcall sub_CACD8(int result)
{
  int v1; // r6
  _DWORD *v2; // r5
  int v3; // r3
  int *v4; // r4
  int v5; // r8

  v1 = result;
  if ( result )
  {
    if ( (*(_DWORD *)(result + 12) & 0xA) == 0xA )
    {
      v2 = (_DWORD *)dword_478348;
      if ( dword_478348 )
      {
        do
        {
          v3 = v2[3];
          if ( (unsigned int)(v3 - 1) <= 1 || (unsigned int)(v3 - 27) <= 3 )
          {
            v4 = (int *)v2[7];
            if ( v4 )
            {
              v5 = 0;
              do
              {
                if ( (unsigned int)v4[3] <= 1 && !*((_BYTE *)v4 + 37) && *(_DWORD *)(v1 + 16) == v4[12] )
                {
                  result = sub_1B8630(v4[13], v1);
                  if ( result )
                  {
                    *((_BYTE *)v4 + 37) = 1;
                    v5 = 1;
                    result = sub_CA320((int)(v4 + 4), v4 + 7);
                  }
                }
                v4 = (int *)*v4;
              }
              while ( v4 );
              if ( v5 )
                result = sub_1B9D50(v2);
            }
          }
          v2 = (_DWORD *)v2[2];
        }
        while ( v2 );
      }
    }
  }
  return result;
}
