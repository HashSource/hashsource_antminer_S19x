int __fastcall sub_5A078(int a1, void **a2)
{
  *a2 = malloc(*(_DWORD *)(a1 + 4));
  if ( !*a2 )
    return 3;
  memcpy(*a2, *(const void **)a1, *(_DWORD *)(a1 + 4));
  return 0;
}
