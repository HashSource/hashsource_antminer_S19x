int __fastcall sub_26E9E0(int a1)
{
  _DWORD *v2; // r5
  int result; // r0
  int v4; // r0

  v2 = (_DWORD *)sub_171258(*(_DWORD **)(a1 + 64));
  result = sub_173720(v2);
  if ( result )
  {
    v4 = sub_26E978((_DWORD *)a1);
    result = ((int (__fastcall *)(int, _DWORD *))loc_2523FC)(v4, v2);
    if ( !result )
      sub_946E0("Invalid floating value found in program.");
  }
  return result;
}
