int *__fastcall sub_11139C(int a1, int *a2, _DWORD *a3)
{
  int *result; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // lr
  int v12; // r0
  _DWORD v13[6]; // [sp+0h] [bp-18h] BYREF

  result = (int *)sub_110B00(a1, a2);
  if ( result[1] )
  {
    v12 = sub_15E058(a1);
    sub_15CCC8(v13, v12);
  }
  else
  {
    if ( result[2] )
      return result;
    v6 = *result;
    v7 = sub_15E058(a1);
    sub_15CD0C(v13, v6, v7);
  }
  result = (int *)v13[0];
  v8 = v13[1];
  v9 = v13[2];
  v10 = v13[3];
  v11 = v13[4];
  *a3 = v13[0];
  a3[1] = v8;
  a3[2] = v9;
  a3[3] = v10;
  a3[4] = v11;
  return result;
}
