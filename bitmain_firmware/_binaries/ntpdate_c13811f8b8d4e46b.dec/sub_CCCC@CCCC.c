void __fastcall sub_CCCC(int a1)
{
  int *v1; // r2
  int v2; // r5
  unsigned int v3; // r0

  v1 = (int *)&unk_31054;
  dword_31050 = a1;
  while ( 1 )
  {
    a1 = -2836 * (a1 / 127773) + 16807 * (a1 - (_DWORD)"ter_table() %s: %u" * (a1 / 127773));
    if ( a1 <= 0 )
      a1 += 0x7FFFFFFF;
    *v1 = a1;
    if ( &unk_310C8 == (_UNKNOWN *)v1 )
      break;
    ++v1;
  }
  v2 = 310;
  off_310CC = &unk_3105C;
  off_310D0 = (int)&dword_31050;
  do
  {
    v3 = sub_CC30();
    --v2;
  }
  while ( v2 );
  srand(v3);
}
