int __fastcall sub_EC388(int a1, char **a2)
{
  int *v4; // r0
  int *v5; // r7
  int v6; // r0
  int v7; // r0
  char **v8; // r0
  size_t *v9; // r0
  int v10; // r4
  char *v11; // t1
  char **v12; // r3
  char ***v13; // r5
  int v14; // r6

  v4 = (int *)sub_EBA70();
  v5 = v4;
  if ( v4 )
  {
    X509_NAME_free(*v4);
    v6 = sub_115E5C(a1);
    *v5 = v6;
    if ( v6 )
    {
      if ( !a2 || !*a2 )
        goto LABEL_19;
      v7 = sub_10BFCC(v6);
      v5[1] = v7;
      if ( v7 )
      {
        if ( *a2 )
        {
          do
          {
            v13 = (char ***)sub_11DC68();
            if ( !v13 )
              goto LABEL_15;
            v8 = sub_EAA20(0xB2u);
            *v13 = v8;
            if ( !v8 )
              goto LABEL_17;
            v9 = (size_t *)sub_B220C();
            v10 = (int)v9;
            if ( !v9 )
              goto LABEL_18;
            v11 = *a2++;
            if ( !sub_AE088(v9, v11, -1) )
            {
              v14 = 0;
              goto LABEL_16;
            }
            v12 = v13[1];
            v12[1] = (char *)v10;
            *v12 = (char *)6;
            v8 = (char **)sub_10BD3C(v5[1], v13);
            if ( !v8 )
            {
LABEL_17:
              v10 = (int)v8;
LABEL_18:
              v14 = v10;
              goto LABEL_16;
            }
          }
          while ( a2 && *a2 );
        }
LABEL_19:
        v13 = 0;
        v10 = 0;
        v14 = sub_11B8E8(371, 0, v5);
        goto LABEL_16;
      }
    }
  }
LABEL_15:
  v13 = 0;
  v10 = 0;
  v14 = 0;
LABEL_16:
  j_ASN1_STRING_free_5(v10);
  ACCESS_DESCRIPTION_free(v13);
  sub_EBA84((int)v5);
  return v14;
}
