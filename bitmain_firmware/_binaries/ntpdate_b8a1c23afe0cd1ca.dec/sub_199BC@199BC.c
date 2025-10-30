unsigned int __fastcall sub_199BC(time_t *a1, char *a2, size_t a3)
{
  struct tm *v6; // r0
  size_t v7; // r0
  time_t v9; // [sp+0h] [bp-Ch] BYREF

  if ( !a3 )
    sub_1073C();
  v9 = *a1;
  v6 = localtime(&v9);
  v7 = strftime(a2, a3, "%d-%b-%Y %X", v6);
  if ( a3 <= v7 )
    sub_1073C();
  if ( v7 )
    return sub_F5F4((int)&a2[v7], a3 - v7, ".%03u", a1[1] / 0xF4240u);
  else
    return sub_F5F4((int)a2, a3, "99-Bad-9999 99:99:99.999");
}
