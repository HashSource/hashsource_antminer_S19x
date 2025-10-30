int __fastcall sub_2DCE44(int a1, int a2)
{
  unsigned int v3; // r4
  unsigned int v4; // r0

  v3 = sub_2DCDC4(*(_DWORD *)(*(_DWORD *)a1 + 16));
  v4 = sub_2DCDC4(*(_DWORD *)(*(_DWORD *)a2 + 16));
  if ( v3 < v4 )
    return -1;
  else
    return v3 > v4;
}
