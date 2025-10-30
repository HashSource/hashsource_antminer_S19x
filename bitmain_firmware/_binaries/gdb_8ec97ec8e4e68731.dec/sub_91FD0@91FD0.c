void *__fastcall sub_91FD0(int *a1, const void *a2, size_t a3)
{
  unsigned int v4; // r4
  unsigned int i; // r3
  int v8; // r7
  void *result; // r0
  int v10; // r2

  v4 = a1[1];
  if ( !v4 )
    v4 = 1;
  for ( i = a3 + a1[2]; v4 < i; v4 *= 2 )
    ;
  v8 = sub_93050(*a1, v4);
  result = memcpy((void *)(v8 + a1[2]), a2, a3);
  v10 = a1[2];
  *a1 = v8;
  a1[1] = v4;
  a1[2] = v10 + a3;
  return result;
}
