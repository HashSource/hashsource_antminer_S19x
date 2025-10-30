int __fastcall sub_42670(int a1, int a2, time_t *a3)
{
  int result; // r0

  result = dword_BCBE8;
  if ( dword_BCBE8 && *(_BYTE *)dword_BCBE8 )
  {
    result = sub_2E578((const char *)dword_BCBE8, dword_BCCC8, dword_BCCC4 == 0, a1);
    if ( result )
    {
      dword_BCCC4 = 1;
    }
    else if ( !dword_BCCC4 )
    {
      return result;
    }
    return sub_41754(a1, a2, a3);
  }
  return result;
}
