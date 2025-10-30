int __fastcall sub_4342C(int a1, int a2, time_t *a3)
{
  int result; // r0

  result = dword_BDBF8;
  if ( dword_BDBF8 && *(_BYTE *)dword_BDBF8 )
  {
    result = sub_2E9C8((const char *)dword_BDBF8, dword_BDCD8, dword_BDCD4 == 0, a1);
    if ( result )
    {
      dword_BDCD4 = 1;
    }
    else if ( !dword_BDCD4 )
    {
      return result;
    }
    return sub_424FC(a1, a2, a3);
  }
  return result;
}
