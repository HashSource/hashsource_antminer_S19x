int __fastcall sub_276D08(int a1, int a2, int *a3, char *s1)
{
  int v6; // r1

  v6 = sub_1BD8C8(s1);
  if ( v6 )
    return sub_23661C(*a3, v6);
  else
    return sub_946B0("Target description specified unknown osabi \"%s\"", s1);
}
