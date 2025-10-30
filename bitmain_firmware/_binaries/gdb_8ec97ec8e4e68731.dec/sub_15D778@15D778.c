int sub_15D778()
{
  int i; // r4
  void (__fastcall *v1)(int); // r3
  void (__fastcall *v2)(int); // r3
  int v3; // r0
  int result; // r0
  _DWORD *v5; // r0

  for ( i = dword_487758; i; i = *(_DWORD *)(i + 84) )
  {
    if ( *(_DWORD *)(i + 12) )
    {
      v1 = *(void (__fastcall **)(int))(*(_DWORD *)(i + 16) + 24);
      if ( v1 )
        v1(i);
    }
    if ( *(_DWORD *)(i + 72) )
    {
      v2 = *(void (__fastcall **)(int))(**(_DWORD **)(i + 68) + 24);
      if ( v2 )
        v2(i);
    }
  }
  obstack_free(&stru_487728, 0);
  v3 = obstack_begin(&stru_487728, 0, 0, (void *(*)(int))sub_93028, sub_15C3B0);
  if ( dword_487758 )
    sub_B7718(v3);
  dword_487758 = 0;
  dword_487754 = 0;
  result = sub_323C1C(dword_487720);
  if ( dword_487724 )
  {
    v5 = (_DWORD *)sub_242FC8(result);
    return sub_2594B0(*v5, "{ reinit_frame_cache () }\n");
  }
  return result;
}
