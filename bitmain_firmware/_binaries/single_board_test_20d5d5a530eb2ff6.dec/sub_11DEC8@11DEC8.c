int __fastcall sub_11DEC8(int a1)
{
  int v1; // r0
  unsigned int v3; // r0
  _DWORD *v4; // [sp+Ch] [bp-3Ch] BYREF
  _DWORD v5[14]; // [sp+10h] [bp-38h] BYREF

  v4 = v5;
  if ( a1 < 0 )
    return 0;
  v5[0] = a1;
  v1 = sub_EAC70((int)&v4, (int)&off_21FC98, 47, 4, (int (__fastcall *)(int, int))sub_11DE34);
  if ( v1 )
    return *(_DWORD *)v1;
  if ( !dword_6E1C58 )
    return 0;
  v3 = sub_10BC4C(dword_6E1C58, (int)v5);
  return sub_10C01C((_DWORD *)dword_6E1C58, v3);
}
