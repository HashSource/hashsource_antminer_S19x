int __fastcall sub_13AB30(int **a1, unsigned int a2, int a3)
{
  size_t *v6; // r0
  int v7; // r5
  _DWORD *v8; // r4
  char **v9; // r0
  int v10; // r2
  int v11; // r1
  int *v12; // r0
  char **v14; // r0

  if ( a3 > 0 )
  {
    v6 = (size_t *)sub_B20A4();
    v7 = (int)v6;
    if ( v6 )
    {
      if ( sub_126EFC(v6, a3) )
      {
        v8 = (_DWORD *)sub_B2888();
        if ( v8 )
        {
          v9 = sub_EAA20(a2);
          v10 = 2;
          v11 = (int)v9;
          goto LABEL_6;
        }
      }
    }
LABEL_10:
    ASN1_INTEGER_free(v7);
    return 0;
  }
  v8 = (_DWORD *)sub_B2888();
  v7 = (int)v8;
  if ( !v8 )
    goto LABEL_10;
  v7 = 0;
  v14 = sub_EAA20(a2);
  v10 = -1;
  v11 = (int)v14;
LABEL_6:
  sub_B28F8(v8, v11, v10, v7);
  v12 = *a1;
  if ( *a1 || (v12 = (int *)sub_10BFCC(), (*a1 = v12) != 0) )
  {
    if ( sub_10BD3C(v12, (int)v8) )
      return 1;
  }
  X509_ALGOR_free((int)v8);
  return 0;
}
