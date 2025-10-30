void *__fastcall sub_4C11C(void *a1, unsigned int a2)
{
  bool v2; // cc
  int v3; // r2

  v2 = a1 != 0;
  if ( a1 )
    v2 = a2 > 0x401F;
  v3 = !v2;
  if ( !v2 )
    return 0;
  if ( ((unsigned __int8)a1 & 3) != 0 )
    return (void *)v3;
  memset(a1, 0, 0x4014u);
  return a1;
}
