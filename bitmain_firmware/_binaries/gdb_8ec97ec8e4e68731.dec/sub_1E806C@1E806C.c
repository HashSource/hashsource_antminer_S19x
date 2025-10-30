int sub_1E806C()
{
  int result; // r0
  int v1; // r0
  int v2; // r4

  if ( ((int (__fastcall *)(int))loc_1E2198)(85) != 1 )
    return 0;
  v1 = sub_16F654(1);
  ((void (__fastcall *)(int))loc_1E2770)(v1);
  v2 = dword_488C94;
  if ( !((int (__fastcall *)(_DWORD))loc_1E2198)(0) )
    sub_1E7E3C(v2);
  result = *(_DWORD *)(v2 + 40);
  if ( result )
    return *(_DWORD *)(v2 + 44) != 0;
  return result;
}
