int __fastcall sub_8F658(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // r1
  int v10; // r6
  unsigned int v12; // r4
  unsigned int v13; // r1
  int v15; // r4
  int v16; // r5
  _DWORD *i; // r6
  int (__fastcall *v18)(_DWORD *, int, _DWORD); // r3

  v7 = a1[257];
  v10 = *(_DWORD *)(v7 + 244) + 26;
  if ( *(_DWORD *)(v7 + 244) != -26 )
  {
    v12 = 0;
    do
    {
      v13 = v12++;
      if ( !sub_8F5C4(a1, v13, a2, a3, a4, a5) )
        return 0;
    }
    while ( v10 != v12 );
  }
  if ( a6 )
  {
    v15 = a3;
    v16 = a3 + 624;
    for ( i = &unk_2162B0; ; i += 8 )
    {
      while ( 1 )
      {
        v18 = (int (__fastcall *)(_DWORD *, int, _DWORD))i[7];
        __pld(i + 55);
        if ( v18 )
        {
          if ( (a2 & i[1]) != 0 )
            break;
        }
        v15 += 24;
        i += 8;
        if ( v15 == v16 )
          return 1;
      }
      if ( !v18(a1, a2, *(_DWORD *)(v15 + 8)) )
        break;
      v15 += 24;
      if ( v15 == v16 )
        return 1;
    }
    return 0;
  }
  return 1;
}
