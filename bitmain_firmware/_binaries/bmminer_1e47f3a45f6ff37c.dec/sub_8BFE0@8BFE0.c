void __fastcall sub_8BFE0(int a1)
{
  _DWORD *v2; // [sp+14h] [bp-10h]
  _DWORD *ptr; // [sp+18h] [bp-Ch]
  unsigned int i; // [sp+1Ch] [bp-8h]

  if ( a1 )
  {
    for ( i = 0; *(_DWORD *)(a1 + 8) > i; ++i )
    {
      for ( ptr = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 4 * i); ptr; ptr = v2 )
      {
        v2 = (_DWORD *)ptr[4];
        if ( *(_DWORD *)(a1 + 20) )
          (*(void (__fastcall **)(_DWORD))(a1 + 20))(ptr[1]);
        if ( *(_DWORD *)(a1 + 24) )
          (*(void (__fastcall **)(_DWORD))(a1 + 24))(ptr[2]);
        free(ptr);
      }
    }
    if ( *(_DWORD *)(a1 + 4) )
      free(*(void **)(a1 + 4));
    free((void *)a1);
  }
  else
  {
    sub_8CD10(2, "src/zc_hashtable.c", 68, "a_table[%p] is NULL, just do nothing", 0);
  }
}
