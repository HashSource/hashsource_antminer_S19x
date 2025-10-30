int __fastcall sub_115F98(size_t *a1, _DWORD *a2, _DWORD *a3)
{
  if ( sub_115C40(a1, 0) <= 0 )
    return 0;
  if ( a2 )
    *a2 = *(_DWORD *)(a1[2] + 4);
  if ( a3 )
    *a3 = *(_DWORD *)a1[2];
  return 1;
}
