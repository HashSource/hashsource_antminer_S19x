int __fastcall sub_1A2C54(int a1, _DWORD *a2)
{
  int v4; // r0
  int result; // r0

  v4 = ((int (__fastcall *)(int))loc_1A349C)(dword_487A1C);
  result = sub_1A3D54(v4, -1, a1);
  if ( !result )
    return sub_1A3D54(*a2, a2[1], a1);
  return result;
}
