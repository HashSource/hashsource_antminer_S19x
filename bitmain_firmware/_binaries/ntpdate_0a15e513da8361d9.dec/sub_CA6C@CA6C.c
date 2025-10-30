_QWORD *__fastcall sub_CA6C(_QWORD *a1, unsigned __int8 *a2)
{
  unsigned int v4; // r4
  int v5; // r0

  v4 = 7 * (sub_C7A0(*(unsigned __int16 *)a2 - 1) + a2[2] - 1) + a2[3];
  v5 = sub_C0F4(a2[4], a2[5], a2[6]);
  sub_BDB8(a1, v4 - 693596, v5);
  return a1;
}
