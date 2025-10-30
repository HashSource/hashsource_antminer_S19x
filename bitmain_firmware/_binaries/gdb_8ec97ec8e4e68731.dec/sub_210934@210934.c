int __fastcall sub_210934(int a1)
{
  int v2; // r5
  int v3; // r0

  v2 = sub_15ECB4(a1);
  if ( ((int (*)(void))loc_1673E0)() < 0 )
    sub_946E0("Standard register ``$ps'' is not available for this target");
  v3 = ((int (__fastcall *)(int))loc_1673E0)(v2);
  return sub_15B1AC(v3, a1);
}
