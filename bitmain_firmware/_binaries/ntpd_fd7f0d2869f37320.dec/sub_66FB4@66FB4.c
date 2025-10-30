int __fastcall sub_66FB4(_BYTE *a1, __int64 *a2)
{
  int v3; // r6
  unsigned int v4; // r0
  int v6[2]; // [sp+4h] [bp-Ch] BYREF

  sub_66A00(v6, a2);
  v3 = v6[0];
  v4 = sub_66E14(a1, v6[1]);
  return sub_66C70((int)a1, v4 + v3 + 719163);
}
