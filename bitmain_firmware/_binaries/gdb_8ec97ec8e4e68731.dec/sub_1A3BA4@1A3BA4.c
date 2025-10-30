int __fastcall sub_1A3BA4(int *a1, int a2, char *a3, int a4, char **a5, char *s1)
{
  int *v7; // r4
  int v11; // r0
  int result; // r0

  v7 = (int *)*a1;
  if ( *(_DWORD *)(*a1 + 16)
    || (v11 = sub_1A3920(a1, a2, a3, 1, a4, (int)a5, s1)) == 0
    || (result = sub_1A3154(v11, a3, (int)a1, a2)) != 0 )
  {
    sub_1A32EC(v7, a3, (int)a1, a2);
    sub_1A334C(v7, 1, a4, a5, s1);
    return sub_326D80(v7[5]);
  }
  return result;
}
