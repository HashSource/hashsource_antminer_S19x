_BYTE *__fastcall sub_342F8(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // r0
  _BYTE v6[4]; // [sp+Ch] [bp-10h] BYREF
  unsigned int v7; // [sp+10h] [bp-Ch]
  unsigned int *v8; // [sp+14h] [bp-8h]

  v8 = (unsigned int *)v6;
  sub_1FF0C(v6, a1, 4);
  v7 = sub_2CD98(*v8) + a2;
  v2 = sub_2CD98(v7);
  *v8 = v2;
  return sub_1FDA0(a1, (int)v6, 4);
}
