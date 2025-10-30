int *__fastcall sub_DB104(int a1, int a2, int a3, int a4)
{
  int *result; // r0
  int *v7; // r4
  int v8; // [sp+Ch] [bp-4h] BYREF

  v8 = 0;
  result = (int *)sub_DB6A8(a1, a2);
  v7 = result;
  if ( result )
  {
    if ( sub_DAFF4(result) > 0 && sub_DB77C(v7, -1, 4, 6, a4, a3) > 0 )
      sub_DB03C(v7, &v8);
    sub_DB4BC(v7);
    return (int *)v8;
  }
  return result;
}
