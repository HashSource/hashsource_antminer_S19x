int __fastcall sub_1B64FC(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r3
  bool v7; // zf
  int v8; // r3

  result = sub_21C7C8(a1, a2);
  v6 = *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(a1 + 32) >> 3));
  v7 = v6 == 2;
  if ( v6 != 2 )
    v7 = v6 == 9;
  if ( v7 )
  {
    v8 = *(__int16 *)(a1 + 22);
    if ( v8 >= 0 )
      *(_DWORD *)(a1 + 8) += *(_DWORD *)(a3 + 4 * v8);
  }
  return result;
}
