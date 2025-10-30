int __fastcall sub_1E1630(_BYTE **a1, _DWORD *a2, int a3, int a4)
{
  int v5; // r4
  int result; // r0
  int v9; // r3
  int v10; // r2
  bool v11; // zf

  v5 = 2 * a4;
  if ( 2 * a4 > *a2 )
    sub_946E0("Packet too long for target.");
  result = sub_99420(a3, *a1, a4);
  v9 = (int)*a1;
  v10 = *a2 - v5;
  v11 = *a2 == v5;
  *a1 += v5;
  *a2 = v10;
  if ( !v11 )
    *(_BYTE *)(v9 + 2 * a4) = 0;
  return result;
}
