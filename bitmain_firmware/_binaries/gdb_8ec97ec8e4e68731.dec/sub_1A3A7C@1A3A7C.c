int __fastcall sub_1A3A7C(int *a1, int a2, char *a3, char *s1, int a5)
{
  int *v5; // r4
  int v10; // r0
  int result; // r0

  v5 = (int *)*a1;
  if ( *(_DWORD *)(*a1 + 16)
    || (v10 = sub_1A3920(a1, a2, a3, 0, 0, 0, s1)) == 0
    || (result = sub_1A3154(v10, a3, (int)a1, a2)) != 0 )
  {
    sub_1A32EC(v5, a3, (int)a1, a2);
    sub_1A334C(v5, 0, a5, 0, s1);
    return sub_326D80(v5[5]);
  }
  return result;
}
