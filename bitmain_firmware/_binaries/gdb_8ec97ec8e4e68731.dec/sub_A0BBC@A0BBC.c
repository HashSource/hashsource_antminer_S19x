int __fastcall sub_A0BBC(int a1)
{
  int v1; // r0
  int result; // r0
  int v3; // r3

  v1 = sub_A0A60(a1);
  result = sub_A0870(v1);
  if ( result )
  {
    v3 = *(_DWORD *)(result + 24);
    result = *(_DWORD *)(v3 + 8);
    if ( result )
      return sub_338BD4(result, "___XP") != 0;
    result = *(_DWORD *)(v3 + 12);
    if ( result )
      return sub_338BD4(result, "___XP") != 0;
  }
  return result;
}
