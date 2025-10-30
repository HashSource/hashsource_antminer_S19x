int __fastcall sub_558E4(_DWORD *a1, size_t *a2)
{
  for ( *a1 = 0; *a1 < (unsigned int)dword_954B4; ++*a1 )
  {
    if ( *(_DWORD *)(dword_954BC + 28 * *a1 + 4) != 8 )
      return sub_55814(*(_DWORD *)(dword_954BC + 28 * *a1), a2);
  }
  return 0;
}
