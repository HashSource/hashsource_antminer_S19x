int __fastcall sub_231D04(int a1)
{
  __int64 v2; // r0
  _DWORD *v3; // r0
  int v4; // r5

  LODWORD(v2) = sub_231C68((int *)a1);
  if ( !(_DWORD)v2 )
  {
    v3 = (_DWORD *)sub_242FB4(0);
    sub_2594B0(*v3, "pop_all_targets couldn't find target %s\n", *(const char **)(a1 + 4));
    v2 = sub_94700((int)"target.c", 737, "failed internal consistency check");
    if ( dword_489AD8 > (int)v2 )
    {
      v4 = v2;
      do
        LODWORD(v2) = sub_231D04(dword_489F70, HIDWORD(v2));
      while ( dword_489AD8 > v4 );
    }
  }
  return v2;
}
