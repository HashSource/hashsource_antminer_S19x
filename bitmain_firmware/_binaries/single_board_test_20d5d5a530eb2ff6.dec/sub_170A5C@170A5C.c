int *__fastcall sub_170A5C(int a1, int a2, _DWORD *a3)
{
  int v4; // r8
  int *v5; // r7
  unsigned int v6; // r4
  char **v7; // r0
  char **v8; // r5
  int v9; // r6
  char *v10; // r0

  v4 = sub_10C010((int)a3);
  v5 = (int *)sub_10BF44(0, v4);
  if ( v5 )
  {
    if ( v4 > 0 )
    {
      v6 = 0;
      do
      {
        v9 = sub_10C01C(a3, v6);
        v10 = *(char **)(v9 + 8);
        ++v6;
        if ( v10 )
        {
          v7 = sub_EB03C(v10, 0);
          v8 = v7;
          if ( !v7 )
            goto LABEL_9;
        }
        else
        {
          v7 = sub_EB03C(*(char **)(v9 + 4), 0);
          v8 = v7;
          if ( !v7 )
          {
LABEL_9:
            sub_10BFDC((int)v5, ASN1_OBJECT_free);
            sub_D0048(34, 103, 110, (int)"crypto/x509v3/v3_extku.c", 96);
            sub_D1240(6, "section:", *(_DWORD *)v9, ",name:", *(_DWORD *)(v9 + 4), ",value:", *(_DWORD *)(v9 + 8));
            return (int *)v8;
          }
        }
        sub_10BD3C(v5, (int)v7);
      }
      while ( v4 != v6 );
    }
    return v5;
  }
  else
  {
    sub_D0048(34, 103, 65, (int)"crypto/x509v3/v3_extku.c", 82);
    sub_10BDB4(0);
    return 0;
  }
}
