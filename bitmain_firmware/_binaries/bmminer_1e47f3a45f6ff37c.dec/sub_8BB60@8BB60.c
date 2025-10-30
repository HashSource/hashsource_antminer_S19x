int __fastcall sub_8BB60(int a1, int a2, int a3)
{
  if ( *(_DWORD *)(a1 + 8) - 1 < a2 && sub_8BA58(a1, a2) )
  {
    sub_8CD10(2, "src/zc_arraylist.c", 81, "expand_internal fail");
    return -1;
  }
  else
  {
    if ( *(_DWORD *)(*(_DWORD *)a1 + 4 * a2) && *(_DWORD *)(a1 + 12) )
      (*(void (__fastcall **)(_DWORD))(a1 + 12))(*(_DWORD *)(*(_DWORD *)a1 + 4 * a2));
    *(_DWORD *)(*(_DWORD *)a1 + 4 * a2) = a3;
    if ( *(_DWORD *)(a1 + 4) <= a2 )
      *(_DWORD *)(a1 + 4) = a2 + 1;
    return 0;
  }
}
