int __fastcall sub_3DD80(_DWORD *a1)
{
  int result; // r0
  int v3; // r3
  _DWORD v4[4]; // [sp+8h] [bp-10h] BYREF

  result = lldiv(v4);
  v3 = (_DWORD)&unk_F4240 * v4[2];
  *a1 = v4[0];
  a1[1] = v3;
  return result;
}
