void __fastcall sub_89E54(unsigned int a1, int a2)
{
  bool v2; // cc
  int v5; // r8

  v2 = a2 != 0;
  if ( a2 )
    v2 = a1 > 0xF;
  if ( v2 && (*(_DWORD *)(a2 + 16) & 8) == 0 )
  {
    v5 = sub_8205C(*(const char **)(a2 + 24));
    if ( v5 == -1 )
    {
      fprintf(stderr, off_B9518, *(_DWORD *)(a1 + 28), *(_DWORD *)(a2 + 24));
      if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
        (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
    }
    if ( (*(_DWORD *)(a2 + 16) & 0x40) != 0 )
    {
      free(*(void **)(a2 + 24));
      *(_DWORD *)(a2 + 16) &= ~0x40u;
    }
    *(_DWORD *)(a2 + 24) = v5;
  }
}
