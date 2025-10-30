void __fastcall sub_843E0(_DWORD *a1)
{
  if ( a1 )
  {
    if ( *a1 == 6 )
    {
      sub_7C38C((_DWORD *)a1[2]);
      free(a1);
    }
    else
    {
      *_errno_location() = 22;
    }
  }
}
