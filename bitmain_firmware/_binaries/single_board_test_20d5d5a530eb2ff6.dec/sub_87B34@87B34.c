int __fastcall sub_87B34(int *a1, const void *a2, size_t a3)
{
  int result; // r0
  int v4; // r6
  int v6; // r5
  _DWORD v7[83]; // [sp+4h] [bp-214h] BYREF
  char dest; // [sp+150h] [bp-C8h] BYREF

  if ( a3 > 0x20 )
    return 0;
  v4 = *a1;
  v7[82] = a3;
  v7[0] = v4;
  memcpy(&dest, a2, a3);
  sub_10C544(*(_DWORD *)(a1[376] + 536));
  v6 = sub_DFA98(*(_DWORD *)(a1[376] + 20), v7);
  sub_10C564(*(_DWORD *)(a1[376] + 536));
  result = v6;
  if ( v6 )
    return 1;
  return result;
}
