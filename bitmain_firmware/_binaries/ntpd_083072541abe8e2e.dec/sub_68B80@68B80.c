void __fastcall sub_68B80(int a1)
{
  int *v1; // r2
  int v2; // r5
  unsigned int v3; // r0

  v1 = (int *)&unk_B7CF8;
  dword_B7CF4 = a1;
  while ( 1 )
  {
    a1 = -2836 * (a1 / 127773) + 16807 * (a1 - (_DWORD)&loc_1F31C * (a1 / 127773));
    if ( a1 <= 0 )
      a1 += 0x7FFFFFFF;
    *v1 = a1;
    if ( &unk_B7D6C == (_UNKNOWN *)v1 )
      break;
    ++v1;
  }
  v2 = 310;
  off_B7D70 = &unk_B7D00;
  off_B7D74 = &dword_B7CF4;
  do
  {
    v3 = sub_68AE4();
    --v2;
  }
  while ( v2 );
  srand(v3);
}
