int __fastcall sub_1E7FE8(int a1)
{
  int v1; // r0
  int result; // r0
  int v3; // r4

  v1 = sub_16F654(a1);
  result = ((int (__fastcall *)(int))loc_1E2770)(v1);
  if ( dword_46DB2C )
  {
    v3 = dword_488C94;
    if ( !*(_DWORD *)(dword_488C94 + 56) )
      return sub_946B0("Range stepping is not supported by the current target");
    if ( !((int (__fastcall *)(_DWORD))loc_1E2198)(0) )
      sub_1E7E3C(v3);
    result = ((int (__fastcall *)(_DWORD))loc_1E2198)(0);
    if ( result != 1 || !*(_DWORD *)(v3 + 36) )
      return sub_946B0("Range stepping is not supported by the current target");
  }
  return result;
}
