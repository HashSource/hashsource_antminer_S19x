int __fastcall sub_1E2A9C(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r5
  int v4; // r4
  int result; // r0
  int v6; // r0
  void *v7; // r5
  int v8; // r0
  int v9; // r4

  v1 = sub_16F654(a1);
  v2 = ((int (__fastcall *)(int))loc_1E2770)(v1);
  v3 = dword_488C94;
  v4 = *(_DWORD *)(dword_488C94 + 84);
  result = sub_24B59C(v2);
  if ( v4 != result )
  {
    v6 = sub_24B59C(result);
    *(_DWORD *)(v3 + 84) = v6;
    v7 = off_489BC0;
    v8 = sub_24B59C(v6);
    v9 = ((int (__fastcall *)(int *, _DWORD, int, _DWORD, _DWORD, _DWORD))v7)(&dword_4899A0, 0, v8, 0, 0, 0);
    result = sub_24B59C(v9);
    if ( v9 != result )
      return sub_946B0("could not set remote traceframe");
  }
  return result;
}
