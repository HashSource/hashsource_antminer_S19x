int sub_22EB0C()
{
  int v0; // r4

  v0 = dword_4899A0;
  if ( !dword_4899A0 )
    return 0;
  while ( !(*(int (__fastcall **)(int))(v0 + 328))(v0) )
  {
    v0 = *(_DWORD *)v0;
    if ( !v0 )
      return 0;
  }
  return 1;
}
