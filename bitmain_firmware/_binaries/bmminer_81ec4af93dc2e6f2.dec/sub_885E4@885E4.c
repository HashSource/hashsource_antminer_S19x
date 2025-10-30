void __fastcall sub_885E4(int a1)
{
  int i; // [sp+Ch] [bp-8h]

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
      {
        if ( *(_DWORD *)(*(_DWORD *)a1 + 4 * i) )
          (*(void (__fastcall **)(_DWORD))(a1 + 12))(*(_DWORD *)(*(_DWORD *)a1 + 4 * i));
      }
    }
    if ( *(_DWORD *)a1 )
      free(*(void **)a1);
    free((void *)a1);
  }
}
