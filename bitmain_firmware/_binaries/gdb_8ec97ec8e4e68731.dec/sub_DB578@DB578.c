int __fastcall sub_DB578(int result)
{
  _DWORD *v1; // r4
  int v2; // r7
  _DWORD *v3; // r8
  _DWORD *v4; // r5
  _DWORD *v5; // r6
  _DWORD *i; // r3

  v1 = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    v2 = result;
    v3 = (_DWORD *)(result + 8);
    while ( 1 )
    {
      v4 = (_DWORD *)v1[2];
      if ( v1[3] == 12 && v1[28] == *(_DWORD *)(v2 + 20) )
      {
        v5 = (_DWORD *)v1[27];
        if ( v5 != v1 )
        {
          while ( v5[3] != 18 )
          {
            v5 = (_DWORD *)v5[27];
            if ( v5 == v1 )
              goto LABEL_3;
          }
          result = sub_15FE8C(v5[13], v5[14], v5[15], v5[16], v5[17]);
          if ( !result )
          {
            sub_10D67C(v5[13], v5[14], v5[15], v5[16], v5[17], *v3, v3[1], v3[2]);
            for ( i = (_DWORD *)v1[27]; i != v1; i = (_DWORD *)v1[27] )
            {
              if ( i == v4 )
                v4 = (_DWORD *)i[2];
              ((void (__fastcall *)(_DWORD *))loc_DB0B0)(i);
            }
            result = ((int (__fastcall *)(_DWORD *))loc_DB0B0)(v1);
          }
        }
      }
LABEL_3:
      if ( !v4 )
        break;
      v1 = v4;
    }
  }
  return result;
}
