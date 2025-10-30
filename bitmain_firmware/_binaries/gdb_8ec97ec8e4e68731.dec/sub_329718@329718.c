int __fastcall sub_329718(int a1, signed int a2)
{
  if ( a2 < 0 )
  {
    if ( a2 == 0x80000000 )
    {
      *(_BYTE *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 4) = 0;
      *(_WORD *)(a1 + 10) = 0;
      *(_DWORD *)a1 = 1;
    }
    else
    {
      a2 = -a2;
      *(_DWORD *)a1 = 1;
      *(_BYTE *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 4) = 0;
      *(_WORD *)(a1 + 10) = 0;
    }
    sub_3290C0((int *)a1, a2);
    *(_BYTE *)(a1 + 8) = 0x80;
    return a1;
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_WORD *)(a1 + 10) = 0;
    *(_DWORD *)a1 = 1;
    if ( a2 )
      sub_3290C0((int *)a1, a2);
    return a1;
  }
}
