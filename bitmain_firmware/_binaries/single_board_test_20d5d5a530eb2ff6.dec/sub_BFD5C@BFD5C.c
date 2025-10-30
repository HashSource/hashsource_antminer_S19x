int __fastcall sub_BFD5C(int a1)
{
  int v1; // r0
  int v2; // r3
  int v3; // r0

  v1 = sub_B85BC(*(_DWORD **)(a1 + 8));
  v2 = v1 + 14;
  v3 = v1 + 7;
  if ( v3 < 0 )
    v3 = v2;
  return v3 >> 3;
}
