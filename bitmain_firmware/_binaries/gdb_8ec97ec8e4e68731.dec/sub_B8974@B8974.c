int __fastcall sub_B8974(int a1)
{
  int v2; // r0
  int v3; // r0

  if ( dword_478214 )
    return sub_25A418(a1, "The target architecture is assumed to be %s\n", dword_478218);
  v2 = sub_B894C(a1);
  v3 = ((int (__fastcall *)(int))loc_163EB0)(v2);
  return sub_25A418(a1, "The target architecture is set automatically (currently %s)\n", *(_DWORD *)(v3 + 24));
}
