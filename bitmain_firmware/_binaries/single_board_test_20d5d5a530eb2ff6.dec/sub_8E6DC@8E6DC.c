int __fastcall sub_8E6DC(int a1)
{
  unsigned int *v1; // r2
  int result; // r0

  v1 = *(unsigned int **)(a1 + 124);
  result = 1;
  if ( (*v1 & 0x200) != 0 )
    *v1 = *v1 & 0xFFFFEDFF | 0x1000;
  return result;
}
