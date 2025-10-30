int __fastcall sub_8F114(int a1, int a2, int a3)
{
  int v6; // r9
  int v7; // r7
  unsigned int v8; // r5
  _DWORD *v9; // r6
  int v10; // r0
  int v11; // r3
  _BYTE v13[8]; // [sp+4h] [bp-8h] BYREF

  if ( (a2 & 0x80) != 0 )
  {
    v6 = 1;
  }
  else if ( (a2 & 0x100) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 2;
  }
  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 1028) + 244) + 26;
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 1028) + 244) != -26 )
  {
    v8 = 0;
    v9 = &unk_2162B0;
    do
    {
      if ( *(_DWORD *)(a3 + 8) )
      {
        if ( v8 <= 0x19 )
        {
          __pld(v9 + 41);
          v11 = v9[1];
        }
        else
        {
          v10 = sub_92300(*(_DWORD *)(a1 + 1028) + 240, v6, *(_DWORD *)(a3 + 16), v13);
          if ( !v10 )
            return 0;
          v11 = *(_DWORD *)(v10 + 8);
        }
        if ( (v11 & a2) == 0 )
          return 0;
        if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8) != 0 )
        {
          if ( (v11 & 1) != 0 )
            return 0;
        }
        else if ( (v11 & 2) != 0 )
        {
          return 0;
        }
      }
      ++v8;
      a3 += 24;
      v9 += 8;
    }
    while ( v7 != v8 );
  }
  return 1;
}
