int __fastcall sub_45438(int result)
{
  int v1; // lr
  int v2; // r3
  int v3; // r4
  int i; // r6
  int j; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r2

  v1 = dword_705300;
  v2 = *(_DWORD *)(dword_705300 + 8);
  if ( v2 > 0 )
  {
    v3 = *(_DWORD *)(dword_705300 + 12);
    for ( i = 0; i < v2; ++i )
    {
      if ( v3 > 0 )
      {
        for ( j = 0; j < v3; ++j )
        {
          v6 = j + v3 * i;
          if ( *(_BYTE *)(result + v6) )
          {
            v7 = *((unsigned __int16 *)&dword_6E3468[34189] + v6);
            v8 = v6 + 69020;
            if ( v7 )
            {
              *((_WORD *)dword_6E3468 + v8) = v7;
              v3 = *(_DWORD *)(v1 + 12);
            }
          }
        }
        v2 = *(_DWORD *)(v1 + 8);
      }
    }
  }
  return result;
}
