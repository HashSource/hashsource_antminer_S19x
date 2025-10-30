void *__fastcall sub_1243D8(unsigned int a1, int a2)
{
  size_t v2; // r4
  void *v3; // r0

  if ( a1 > 0x3FFFFFFF )
    sub_33D01C(a1, a2);
  v2 = 4 * a1;
  v3 = sub_9836C(4 * a1);
  return memset(v3, 0, v2);
}
