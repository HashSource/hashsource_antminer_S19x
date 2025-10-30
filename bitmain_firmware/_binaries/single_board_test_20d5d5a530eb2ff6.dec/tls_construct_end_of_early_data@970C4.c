int __fastcall tls_construct_end_of_early_data(_DWORD *a1)
{
  if ( (a1[26] & 0xFFFFFFFB) == 3 )
  {
    a1[26] = 7;
    return 1;
  }
  else
  {
    sub_95494(a1, 80, 536, 66, (int)"ssl/statem/statem_clnt.c", 3849);
    return 0;
  }
}
