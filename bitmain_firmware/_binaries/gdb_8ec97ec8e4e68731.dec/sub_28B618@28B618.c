int __fastcall sub_28B618(_DWORD *a1, int a2)
{
  int *v2; // r5
  char *v5; // r0
  int v6; // r0
  int v7; // r3
  int v8; // r12
  int v9; // r2
  signed int v10; // r0
  int result; // r0
  int v12; // r2

  if ( a2 < 0 )
    LOWORD(v2) = -21008;
  if ( a2 < 0 )
  {
    HIWORD(v2) = 72;
    goto LABEL_10;
  }
  v2 = &dword_48ADF0;
  v5 = strcpy((char *)dword_48AAD4, *(const char **)(a1[5] + 4 * a1[11]));
  sub_28D478(v5);
  if ( dword_48ADF0 )
    free((void *)dword_48ADF0);
  v6 = a1[12];
  v7 = a1[11];
  v8 = a1[2];
  v9 = a1[3];
  a1[2] = 0;
  dword_48ADF0 = v8;
  dword_48ADF4 = v9;
  if ( v6 < v7 )
  {
    sub_2974E4(v7 - v6, 0);
    v10 = a1[26];
    if ( v10 >= 0 )
      goto LABEL_9;
LABEL_14:
    if ( a1[12] == a1[11] )
      v10 = a1[9];
    else
      v10 = strlen((const char *)dword_48AAD4);
    a1[26] = v10;
    dword_4900D4 = a1[10];
    goto LABEL_9;
  }
  sub_2975E4(v6 - v7, 0);
  v10 = a1[26];
  if ( v10 < 0 )
    goto LABEL_14;
LABEL_9:
  dword_4900D8 = v10;
  sub_28D50C(v10);
LABEL_10:
  sub_28B5D4(a1);
  result = a2;
  v12 = dword_48AAA0;
  if ( a2 )
    result = 1;
  v2[2] = 0;
  dword_48AAA0 = v12 & 0xFFFFFF7F;
  return result;
}
