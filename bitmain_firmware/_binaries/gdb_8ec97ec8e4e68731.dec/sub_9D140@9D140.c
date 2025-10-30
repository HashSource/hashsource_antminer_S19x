int __fastcall sub_9D140(int a1, int a2)
{
  int v2; // r1
  int result; // r0

  v2 = *(_DWORD *)(a1 + 24) + 24 * a2;
  result = *(_DWORD *)(v2 + 16);
  if ( result )
    return **(_BYTE **)(*(_DWORD *)(v2 + 12) + 24) == 1 && sub_338BD4(result, "___XVL") != 0;
  return result;
}
