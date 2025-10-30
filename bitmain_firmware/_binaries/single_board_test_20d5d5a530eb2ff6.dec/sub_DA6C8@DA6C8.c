int __fastcall sub_DA6C8(int a1, _DWORD *a2, int a3)
{
  int v4; // r5
  int (*v6)(void); // r5
  const char *v8; // r0

  v4 = a2[3];
  if ( v4 )
  {
    v6 = *(int (**)(void))(v4 + 80);
    if ( v6 )
      return v6();
  }
  sub_B6E94(a1, a3, 128);
  v8 = (const char *)sub_EAB40(*a2);
  sub_B550C(a1, "%s algorithm \"%s\" unsupported\n", "Parameters", v8);
  return 1;
}
