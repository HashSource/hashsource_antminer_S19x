int __fastcall sub_DB290(int a1)
{
  int v1; // r1
  int result; // r0
  _DWORD *v3; // [sp+8h] [bp-88h] BYREF
  _DWORD v4[33]; // [sp+Ch] [bp-84h] BYREF

  v4[0] = a1;
  v3 = v4;
  if ( dword_6E1948 )
  {
    v1 = sub_10BC4C(dword_6E1948, v4);
    if ( v1 >= 0 )
      return sub_10C01C(dword_6E1948, v1);
  }
  result = sub_EAC70(&v3, &off_21FAE4, 18, 4, sub_DB260);
  if ( result )
    return *(_DWORD *)result;
  return result;
}
