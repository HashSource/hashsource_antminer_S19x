int __fastcall sub_282054(int a1, int a2)
{
  char *v2; // r0
  int v3; // r3

  if ( dword_4900D8 > 0 )
    a1 = sub_29534C(1, a2);
  off_46DED0 = &unk_46E718;
  v2 = sub_281FB8(a1);
  v3 = dword_48AAA0;
  if ( (dword_48AAA0 & 0x400000) == 0 )
  {
    sub_2923B8(v2);
    v3 = dword_48AAA0;
  }
  dword_48AAA0 = v3 | 0x400000;
  return 0;
}
