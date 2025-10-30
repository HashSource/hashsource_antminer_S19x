int __fastcall sub_60970(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r4
  int v6; // r3
  int v7; // r1
  int result; // r0

  v2 = sub_191AC0(a1);
  v3 = sub_605EC(v2);
  v4 = a1;
  v5 = dword_487668;
  v6 = *(_DWORD *)(dword_487668 + 44);
  v7 = *(_DWORD *)(dword_487668 + 48);
  *(_DWORD *)(dword_487668 + 68) = 1;
  result = sub_6598C(v4, v7 == v6);
  if ( *(_DWORD *)(v5 + 68) == 1 )
    return sub_60938((_DWORD *)(v3 + 36));
  return result;
}
