int __fastcall sub_54D48(int a1, _DWORD *a2, size_t *a3)
{
  while ( *a2 < (unsigned int)dword_9431C )
  {
    if ( *(_DWORD *)(dword_94324 + 28 * *a2 + 4) != 8 )
    {
      if ( !a1 )
        return sub_54B9C(*(_DWORD *)(dword_94324 + 28 * *a2), a3);
      a1 = sub_54BE8(a1, a3);
      if ( a1 )
        return a1;
    }
    ++*a2;
  }
  return 0;
}
