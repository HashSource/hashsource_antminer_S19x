int __fastcall sub_54C6C(_DWORD *a1, size_t *a2)
{
  for ( *a1 = 0; *a1 < (unsigned int)dword_9431C; ++*a1 )
  {
    if ( *(_DWORD *)(dword_94324 + 28 * *a1 + 4) != 8 )
      return sub_54B9C(*(_DWORD *)(dword_94324 + 28 * *a1), a2);
  }
  return 0;
}
