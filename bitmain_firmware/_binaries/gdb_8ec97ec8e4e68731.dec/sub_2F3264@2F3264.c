int __fastcall sub_2F3264(int a1, int a2, int a3, int (__fastcall *a4)(int, int, int, int, int), int *a5)
{
  int *v5; // r4
  int v9; // r3

  v5 = *(int **)(*(_DWORD *)(a2 + 140) + 128);
  if ( !v5 )
    return 1;
  while ( sub_2F16C4(a1, a3, v5, a4, a5) )
  {
    v9 = *v5;
    if ( *v5 )
    {
      if ( (*(_BYTE *)(v9 + 6) & 1) == 0 )
      {
        *(_BYTE *)(v9 + 6) |= 1u;
        if ( !sub_2F16C4(a1, a3, (_DWORD *)v9, a4, a5) )
          break;
      }
    }
    v5 = (int *)v5[1];
    if ( !v5 )
      return 1;
  }
  return 0;
}
