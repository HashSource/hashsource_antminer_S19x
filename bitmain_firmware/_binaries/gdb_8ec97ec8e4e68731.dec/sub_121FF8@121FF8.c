int __fastcall sub_121FF8(int a1, int a2, int a3)
{
  int v3; // r3
  int result; // r0
  int v8; // r0
  int *v9; // r0
  int v10; // r3

  if ( *(_BYTE *)(dword_4872D8 + 432) )
  {
    v3 = *(_DWORD *)(a2 + 16);
    return !v3 || *(_DWORD *)(v3 + 148) == 0;
  }
  else
  {
    if ( a1 )
    {
      v8 = *(_DWORD *)(a1 + 152);
      if ( !v8 )
      {
        v8 = sub_323980(5, off_4714A0, off_47149C[0], 0, a1 + 88, sub_25AEEC, nullsub_44);
        *(_DWORD *)(a1 + 152) = v8;
      }
      v9 = (int *)sub_324030(v8, a2, 1);
      if ( !*v9 )
        *v9 = a2;
    }
    result = *(_BYTE *)(a2 + 10) & 1;
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
    {
      return 0;
    }
    else
    {
      v10 = *(_DWORD *)(a2 + 16);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 140) = result;
      }
      else
      {
        sub_11D040(a2, a3);
        return 1;
      }
    }
  }
  return result;
}
