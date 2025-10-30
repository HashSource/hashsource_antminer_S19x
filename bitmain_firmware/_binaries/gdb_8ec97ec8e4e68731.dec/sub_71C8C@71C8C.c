void __fastcall sub_71C8C(_DWORD *a1)
{
  void *v2; // r0

  if ( a1 )
  {
    if ( dword_474948 && a1 == *(_DWORD **)(dword_474948 + 4 * dword_47494C) )
      *(_DWORD *)(dword_474948 + 4 * dword_47494C) = 0;
    if ( a1[5] )
    {
      v2 = (void *)a1[1];
      if ( v2 )
        free(v2);
    }
    free(a1);
  }
}
