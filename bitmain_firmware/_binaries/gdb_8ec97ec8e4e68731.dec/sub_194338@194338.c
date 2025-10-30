int sub_194338(int a1, ...)
{
  _DWORD *v1; // r0
  int v2; // r0
  _DWORD *v3; // r0
  char *v5; // r0
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  if ( dword_4879EC == 1 )
    return sub_25BD6C(a1, (char *)varg_r1);
  if ( dword_4879EC )
  {
    if ( dword_4879EC == 2 )
      sub_2589F8(a1, (char *)varg_r1);
    v5 = (char *)sub_94700((int)"language.c", 468, "bad switch");
    return sub_1943DC(v5);
  }
  else
  {
    v1 = (_DWORD *)sub_242FB4(a1);
    v2 = sub_25A4C0(*v1, a1, (char *)varg_r1);
    v3 = (_DWORD *)sub_242FB4(v2);
    return sub_25A418(*v3, (const char *)&word_356638);
  }
}
