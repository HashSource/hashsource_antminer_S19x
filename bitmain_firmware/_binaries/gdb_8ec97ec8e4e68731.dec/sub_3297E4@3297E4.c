int __fastcall sub_3297E4(int a1, int a2)
{
  char v2; // r2
  int v3; // r12
  int result; // r0
  unsigned int v5; // r5
  _DWORD *v6; // lr
  int v7; // r3
  int v8; // r4
  int v9; // r6
  int v10; // t1
  _BOOL4 v11; // r12
  unsigned int v12; // r3

  v2 = *(_BYTE *)(a1 + 8);
  if ( (v2 & 0x70) != 0 )
    goto LABEL_3;
  v3 = *(_DWORD *)a1;
  if ( *(int *)a1 > 10 )
    goto LABEL_3;
  if ( *(_DWORD *)(a1 + 4) )
    goto LABEL_3;
  v5 = *(unsigned __int16 *)(a1 + 10) / 0xAu;
  if ( v3 > 3 )
  {
    v6 = dword_438D00;
    v7 = a1 + 10;
    v8 = 3;
    do
    {
      v9 = v6[2];
      v8 += 3;
      v10 = *(unsigned __int16 *)(v7 + 2);
      v7 += 2;
      v6 += 3;
      v5 += v9 * v10;
    }
    while ( v3 > v8 );
    if ( v5 > 0xCCCCCCC )
      goto LABEL_3;
  }
  v11 = v5 == 214748364;
  v12 = *(unsigned __int16 *)(a1 + 10) % 0xAu;
  if ( v12 <= 7 )
    v11 = 0;
  if ( v11 )
  {
    if ( v2 < 0 && v12 == 8 )
      return 0x80000000;
LABEL_3:
    sub_3313E4(a2);
    return 0;
  }
  result = 10 * v5 + v12;
  if ( v2 < 0 )
    return -result;
  return result;
}
