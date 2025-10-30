void __fastcall sub_85938(_DWORD *a1)
{
  if ( a1 )
  {
    if ( *a1 == 6 )
    {
      sub_7D71C((_DWORD *)a1[2]);
      free(a1);
    }
    else
    {
      *_errno_location() = 22;
    }
  }
}
