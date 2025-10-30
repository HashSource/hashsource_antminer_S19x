int __fastcall sub_887C8(int a1, int a2, int a3)
{
  if ( a2 > *(_DWORD *)(a1 + 8) - 1 && sub_886C0(a1, a2) )
  {
    sub_89984(2, "src/zc_arraylist.c", 81, "expand_internal fail");
    return -1;
  }
  else
  {
    if ( *(_DWORD *)(*(_DWORD *)a1 + 4 * a2) && *(_DWORD *)(a1 + 12) )
      (*(void (__fastcall **)(_DWORD))(a1 + 12))(*(_DWORD *)(*(_DWORD *)a1 + 4 * a2));
    *(_DWORD *)(*(_DWORD *)a1 + 4 * a2) = a3;
    if ( a2 >= *(_DWORD *)(a1 + 4) )
      *(_DWORD *)(a1 + 4) = a2 + 1;
    return 0;
  }
}
