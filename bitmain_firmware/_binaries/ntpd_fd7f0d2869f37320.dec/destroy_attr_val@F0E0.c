void __fastcall destroy_attr_val(int a1)
{
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 8) == 419 )
      free(*(void **)(a1 + 16));
    free((void *)a1);
  }
}
