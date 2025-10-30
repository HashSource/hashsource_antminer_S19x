_DWORD *__fastcall sub_99300(_DWORD *a1, char *s)
{
  _DWORD *v3; // r10
  char *v4; // r5
  size_t v5; // r4
  int v6; // r0
  int v7; // r9
  int v8; // r3
  char v9; // r4
  char v10; // r0
  unsigned int v11; // r2
  int v12; // r3
  int v13; // r8
  char v14; // r4
  unsigned int v15; // r7

  v3 = a1 + 2;
  v4 = s;
  *a1 = a1 + 2;
  a1[1] = 0;
  *((_BYTE *)a1 + 8) = 0;
  v5 = strlen(s);
  sub_33B7B0(a1);
  if ( v5 )
  {
    v6 = (unsigned __int8)*v4;
    if ( *v4 )
    {
      if ( v4[1] )
      {
        v7 = (int)&v4[2 * v5 - 2];
        do
        {
          v9 = 16 * sub_990E4(v6);
          v10 = sub_990E4((unsigned __int8)v4[1]);
          v12 = *a1;
          v13 = a1[1];
          v14 = v9 + v10;
          if ( v3 != (_DWORD *)*a1 )
            v11 = a1[2];
          v15 = v13 + 1;
          if ( v3 == (_DWORD *)*a1 )
            v11 = 15;
          if ( v15 > v11 )
          {
            sub_33B4F8(a1, v13, 0);
            v12 = *a1;
          }
          *(_BYTE *)(v12 + v13) = v14;
          v8 = *a1;
          a1[1] = v15;
          *(_BYTE *)(v8 + v15) = 0;
          if ( v4 == (char *)v7 )
            break;
          v6 = (unsigned __int8)v4[2];
          if ( !v4[2] )
            break;
          v4 += 2;
        }
        while ( v4[1] );
      }
    }
  }
  return a1;
}
