int __fastcall sub_179820(int result)
{
  int v1; // r4
  int v2; // r0

  if ( result )
  {
    if ( *(_DWORD *)(result + 8) )
    {
      return 1;
    }
    else
    {
      v1 = result;
      v2 = sub_DF6B4(
             (unsigned __int8 *(__fastcall *)(unsigned __int8 *))sub_179640,
             (int (**)(const char *, const char *))sub_179668);
      *(_DWORD *)(v1 + 8) = v2;
      return v2 != 0;
    }
  }
  return result;
}
