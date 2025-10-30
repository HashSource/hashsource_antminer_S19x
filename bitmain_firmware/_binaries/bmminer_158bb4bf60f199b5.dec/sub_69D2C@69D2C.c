int __fastcall sub_69D2C(int a1)
{
  int *v1; // r2
  int v2; // r3
  int v3; // r1

  if ( !dword_1B13B4 )
    return -1;
  v1 = (int *)&unk_1B135C;
  v2 = 0;
  while ( 1 )
  {
    v3 = *v1;
    v1 += 3;
    if ( v3 == a1 )
      break;
    if ( ++v2 == 6 )
      return -2;
  }
  return dword_1B125C[3 * v2 + 65];
}
