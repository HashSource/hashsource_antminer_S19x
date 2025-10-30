int __fastcall sub_1EA004(int a1)
{
  int v1; // r0
  unsigned __int8 **v2; // r4
  int v3; // r5
  bool v4; // zf
  int v5; // r5
  int v6; // r3
  bool v7; // zf

  v1 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v1);
  v2 = (unsigned __int8 **)dword_488C94;
  sub_1E7DEC("qTfV");
  sub_1E4EB8((char **)v2, (size_t *)v2 + 1, 0, 0, 0);
  v3 = **v2;
  v4 = v3 == 0;
  if ( **v2 )
    v4 = v3 == 108;
  v5 = v4;
  if ( !v4 )
  {
    do
    {
      sub_24D310();
      sub_1E7DEC("qTsV");
      sub_1E4EB8((char **)v2, (size_t *)v2 + 1, 0, 0, (_DWORD *)v5);
      v6 = **v2;
      v7 = v6 == 0;
      if ( **v2 )
        v7 = v6 == 108;
    }
    while ( !v7 );
  }
  return 0;
}
