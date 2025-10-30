char *__fastcall sub_3398DC(int a1, unsigned __int8 *a2, int a3)
{
  int v5; // r7
  char *v6; // r4
  int v7; // r6
  char *v8; // r0
  int v9; // r3
  char *v10; // r0
  int v11; // r4
  int v12; // r2
  char v13; // t1
  int v14; // r3
  char v15; // r3
  int v16; // r4
  char *result; // r0
  int v18; // r2
  char v19; // t1
  int v20; // r3

  v5 = a1;
  if ( a1 )
    a1 = sub_349194(a1);
  *(_DWORD *)a3 = a1;
  v6 = (char *)(a2 + 1);
  v7 = *a2;
  if ( v7 == 255 )
  {
    *(_DWORD *)(a3 + 4) = a1;
  }
  else
  {
    v8 = (char *)sub_3398A4(v7, v5);
    v6 = (char *)sub_3397E0(v7, v8, v6, (unsigned int *)(a3 + 4));
  }
  v9 = (unsigned __int8)*v6;
  v10 = v6 + 1;
  *(_BYTE *)(a3 + 20) = v9;
  if ( v9 == 255 )
  {
    *(_DWORD *)(a3 + 12) = 0;
  }
  else
  {
    v11 = 0;
    v12 = 0;
    *(_BYTE *)(a3 + 20) = -112;
    do
    {
      v13 = *v10++;
      v14 = (v13 & 0x7F) << v12;
      v12 += 7;
      v11 |= v14;
    }
    while ( v13 < 0 );
    *(_DWORD *)(a3 + 12) = &v10[v11];
  }
  v15 = *v10;
  v16 = 0;
  result = v10 + 1;
  v18 = 0;
  *(_BYTE *)(a3 + 21) = v15;
  do
  {
    v19 = *result++;
    v20 = (v19 & 0x7F) << v18;
    v18 += 7;
    v16 |= v20;
  }
  while ( v19 < 0 );
  *(_DWORD *)(a3 + 16) = &result[v16];
  return result;
}
