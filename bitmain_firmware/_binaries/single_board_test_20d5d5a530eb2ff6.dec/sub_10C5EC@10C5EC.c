int __fastcall sub_10C5EC(unsigned int *a1, int a2, unsigned int *a3)
{
  unsigned int v3; // r3
  unsigned int v4; // r3

  __dmb(0xBu);
  do
  {
    v3 = __ldrex(a1);
    v4 = v3 + a2;
  }
  while ( __strex(v4, a1) );
  __dmb(0xBu);
  *a3 = v4;
  return 1;
}
