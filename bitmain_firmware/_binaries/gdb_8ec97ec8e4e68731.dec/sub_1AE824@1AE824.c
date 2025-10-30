int __fastcall sub_1AE824(int a1, _DWORD *a2)
{
  int v3; // r5
  int v4; // r6
  int result; // r0
  size_t v6; // r8
  size_t v7; // r2
  int v8; // [sp+0h] [bp-24h] BYREF
  size_t n[2]; // [sp+4h] [bp-20h] BYREF

  v3 = a2[1];
  v4 = ((int (__fastcall *)(int, _DWORD, size_t *))loc_169250)(a1, a2[9], n);
  result = sub_230020(v3, &v8, n[0]);
  if ( !result )
  {
    v6 = n[0];
    v7 = n[0];
    a2[8] = n[0];
    memcpy(a2 + 4, &v8, v7);
    return sub_2304E4(v3, v4, v6);
  }
  return result;
}
