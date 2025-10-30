void __fastcall sub_88D8C(int a1)
{
  _DWORD *v2; // [sp+Ch] [bp-10h]
  _DWORD *ptr; // [sp+10h] [bp-Ch]
  unsigned int i; // [sp+14h] [bp-8h]

  for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
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
    *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * i) = 0;
  }
  *(_DWORD *)a1 = 0;
}
