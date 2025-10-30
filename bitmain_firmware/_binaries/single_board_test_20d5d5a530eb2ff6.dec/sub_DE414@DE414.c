int __fastcall sub_DE414(char a1)
{
  int result; // r0
  int *v3; // r1
  bool v4; // zf
  int v5; // r3
  int v6; // r2
  __int64 v7; // r4
  int v8; // r3
  int v9; // r0
  int *v10; // r6
  int v11; // r0

  if ( !sub_DE05C(0, 0, 0) )
    return 0;
  v3 = (int *)sub_10C5B4(&dword_21FB2C);
  if ( !v3 )
  {
    v9 = sub_E0740(12, "crypto/init.c", 66);
    v10 = (int *)v9;
    if ( v9 )
    {
      v11 = sub_10C5BC(&dword_21FB2C, v9);
      v3 = v10;
      if ( v11 )
        goto LABEL_4;
      CRYPTO_free(v10, "crypto/init.c", 68);
    }
    return 0;
  }
LABEL_4:
  v5 = a1 & 1;
  v4 = v5 == 0;
  v6 = a1 & 2;
  if ( (a1 & 1) != 0 )
    v5 = 1;
  LODWORD(v7) = a1 & 4;
  if ( !v4 )
    *v3 = v5;
  v8 = v6;
  HIDWORD(v7) = 0;
  if ( v6 )
    v8 = 1;
  result = 1;
  if ( v6 )
    v3[1] = v8;
  if ( v7 )
    v3[2] = 1;
  return result;
}
