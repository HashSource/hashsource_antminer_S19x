int __fastcall sub_559B8(int a1, _DWORD *a2, size_t *a3)
{
  while ( *a2 < (unsigned int)dword_954B4 )
  {
    if ( *(_DWORD *)(dword_954BC + 28 * *a2 + 4) != 8 )
    {
      if ( !a1 )
        return sub_55814(*(_DWORD *)(dword_954BC + 28 * *a2), a3);
      a1 = sub_55860(a1, a3);
      if ( a1 )
        return a1;
    }
    ++*a2;
  }
  return 0;
}
