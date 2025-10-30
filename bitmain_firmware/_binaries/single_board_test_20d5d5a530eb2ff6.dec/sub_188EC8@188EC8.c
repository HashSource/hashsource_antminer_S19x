int __fastcall sub_188EC8(int a1, const char *a2, size_t a3)
{
  if ( sub_EAC84(*(_DWORD *)(a1 + 16)) == (char *)26 )
    return sub_161F80(
             *(int **)(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 4) + 4),
             (int)PKCS12_SAFEBAGS_it,
             a2,
             a3,
             *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 4) + 8),
             1);
  else
    return 0;
}
