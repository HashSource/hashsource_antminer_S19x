int *__fastcall sub_72040(int a1, unsigned int a2)
{
  unsigned int v2; // r7
  int *v3; // r4
  unsigned int v4; // r1
  int v5; // r6
  int *v7; // r0

  if ( a2 <= 1 )
    return 0;
  v2 = a2 - 2;
  v3 = (int *)*(unsigned __int8 *)(a1 + a2 - 2);
  if ( *(_BYTE *)(a1 + a2 - 2) )
    return 0;
  v4 = a1 + a2;
  v5 = *(unsigned __int8 *)(v4 - 1);
  if ( !*(_BYTE *)(v4 - 1) )
  {
    v7 = (int *)sub_93028(48);
    v7[3] = v2;
    v7[1] = a1;
    v3 = v7;
    v7[2] = a1;
    v7[5] = v5;
    *v7 = v5;
    v7[4] = v2;
    v7[6] = v5;
    v7[10] = v5;
    v7[11] = v5;
    v7[7] = 1;
    sub_71BF4(v7);
  }
  return v3;
}
