int __fastcall sub_1BC3C(int a1)
{
  int v2; // r4
  int result; // r0

  v2 = sub_163E78(a1);
  result = *(_DWORD *)(v2 + 76);
  if ( !result )
  {
    result = sub_177448(a1, -1, "builtin_type_arm_ext", &off_46D4E0);
    *(_DWORD *)(v2 + 76) = result;
  }
  return result;
}
