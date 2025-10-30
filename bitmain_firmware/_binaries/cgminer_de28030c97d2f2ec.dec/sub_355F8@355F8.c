_BYTE *__fastcall sub_355F8(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // r0
  _BYTE v5[4]; // [sp+Ch] [bp-10h] BYREF
  unsigned int v6; // [sp+10h] [bp-Ch]
  unsigned int *v7; // [sp+14h] [bp-8h]

  v7 = (unsigned int *)v5;
  sub_207E8(v5, a1, 4);
  v6 = sub_2DE60(*v7) + a2;
  v2 = sub_2DE60(v6);
  *v7 = v2;
  return sub_20744((int)v5, 4);
}
