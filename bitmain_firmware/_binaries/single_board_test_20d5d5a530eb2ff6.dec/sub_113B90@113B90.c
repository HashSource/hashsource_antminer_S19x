bool __fastcall sub_113B90(int a1)
{
  unsigned int *v1; // r3
  signed int v2; // r0

  v1 = (unsigned int *)(a1 + 68);
  do
    v2 = __ldrex(v1);
  while ( __strex(v2 + 1, v1) );
  return v2 > 0;
}
