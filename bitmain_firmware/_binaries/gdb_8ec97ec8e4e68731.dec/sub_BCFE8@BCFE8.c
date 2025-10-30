int __fastcall sub_BCFE8(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8, const char *a9)
{
  _BYTE *v11; // r3
  int result; // r0
  int (__fastcall *v16)(int, int); // r3

  v11 = *(_BYTE **)(*(_DWORD *)a4 + 24);
  if ( *v11 != 8 || **(_BYTE **)(*(_DWORD *)a5 + 24) != 8 )
    sub_946E0("Invalid combination of types in %s.", a9);
  if ( (v11[1] & 1) == 0 )
    a7 = a6;
  result = sub_C09B8(a1, a7);
  if ( a8 )
  {
    v16 = sub_C0A74;
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)a4 + 24) + 1) & 1) == 0 )
      v16 = sub_C0A68;
    result = v16(a1, 8 * *(_DWORD *)(*(_DWORD *)a4 + 20));
  }
  *a3 = *(_DWORD *)a4;
  *a2 = 0;
  return result;
}
