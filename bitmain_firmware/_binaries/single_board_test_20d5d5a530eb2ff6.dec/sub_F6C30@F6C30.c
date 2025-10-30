int *__fastcall sub_F6C30(int a1)
{
  int v2; // r7
  int v3; // r2
  int *result; // r0
  int *v5; // r5
  int *v6; // r4
  int v7; // r4
  char v8; // r0
  int v9; // [sp+Ch] [bp-10h]
  int v10; // [sp+10h] [bp-Ch] BYREF
  int v11; // [sp+14h] [bp-8h] BYREF

  v2 = sub_DB988(a1);
  if ( sub_DB77C(a1, -1, 248) <= 0 || sub_F89C8(a1, 1016, 4104, 0, &v10) <= 0 || !sub_F89C8(a1, 24, 4103, 0, &v11) )
    return 0;
  v3 = v11;
  if ( v11 == -1 )
  {
    v3 = sub_D8C78(v9);
    v11 = v3;
  }
  else if ( (unsigned int)(v11 + 3) <= 1 )
  {
    v7 = sub_D9AF8(v2);
    v11 = v7 - sub_D8C78(v9) - 2;
    v8 = sub_D9AD4(v2);
    v3 = v11;
    if ( (v8 & 7) == 1 )
      v3 = --v11;
    if ( v3 < 0 )
      return 0;
  }
  result = sub_F6BAC(v9, v10, v3);
  v5 = result;
  if ( result )
  {
    v6 = sub_AE2BC((int)result, (int)&RSA_PSS_PARAMS_it, 0);
    sub_F78A4(v5);
    return v6;
  }
  return result;
}
