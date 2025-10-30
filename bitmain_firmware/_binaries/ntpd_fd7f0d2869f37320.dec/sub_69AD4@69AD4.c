void __fastcall sub_69AD4(int a1)
{
  int v1; // r3
  int *v2; // r12
  int *v3; // r0
  int v4; // r1
  int v5; // t1
  int v6; // r2
  int v7; // r5
  unsigned int v8; // r0

  v1 = a1;
  dword_B8CF4 = a1;
  v2 = &dword_B8CF4;
  v3 = &dword_B8CF4;
  v4 = 1;
  while ( 1 )
  {
    ++v4;
    v6 = -2836 * (v1 / 127773) + 16807 * (v1 - (_DWORD)&loc_1F31C * (v1 / 127773));
    if ( v6 <= 0 )
      v6 += 0x7FFFFFFF;
    v3[1] = v6;
    ++v3;
    if ( v4 == 31 )
      break;
    v5 = v2[1];
    ++v2;
    v1 = v5;
  }
  v7 = 310;
  off_B8D70 = &unk_B8D00;
  off_B8D74 = &dword_B8CF4;
  do
  {
    v8 = sub_69A2C();
    --v7;
  }
  while ( v7 );
  srand(v8);
}
