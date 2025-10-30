void __fastcall sub_C76D0(int a1, unsigned int a2, int a3)
{
  _DWORD *v3; // r4
  unsigned int v4; // r6
  int *i; // r5
  __int64 v6; // r2
  unsigned int v7; // [sp+4h] [bp-8h]

  v3 = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    v4 = a3 + a2;
    do
    {
      if ( v3[4] == 1 && v3[3] == 7 )
      {
        if ( v3[41] )
        {
          if ( v3[40] )
          {
            for ( i = (int *)v3[7]; i; i = (int *)*i )
            {
              if ( i[3] == 2 )
              {
                v6 = *(_QWORD *)(i + 13);
                if ( (int)v6 + HIDWORD(v6) > a2 && (unsigned int)v6 < v4 )
                {
                  v7 = a2;
                  ((void (__fastcall *)(_DWORD))loc_26C200)(v3[40]);
                  v3[40] = 0;
                  v3[41] = 0;
                  a2 = v7;
                }
              }
            }
          }
        }
      }
      v3 = (_DWORD *)v3[2];
    }
    while ( v3 );
  }
}
