bool __fastcall sub_54CAC(int a1)
{
  int (__fastcall *v2)(int, int, int); // r0
  bool v3; // zf

  if ( *(_DWORD *)(a1 + 8) != 14 )
    return 0;
  v2 = *(int (__fastcall **)(int, int, int))(a1 + 16);
  v3 = v2 == sub_52C40;
  if ( v2 != sub_52C40 )
    return v2 == sub_52C54;
  return v3;
}
