unsigned int __fastcall sub_66E78(_DWORD *a1, int a2)
{
  unsigned int result; // r0
  int v4; // r2
  int v5; // r3
  _DWORD v6[3]; // [sp+0h] [bp-14h] BYREF

  result = sub_664D8(v6, a2);
  v4 = v6[1];
  v5 = v6[2];
  a1[2] = v6[0];
  a1[1] = v4;
  *a1 = v5;
  return result;
}
