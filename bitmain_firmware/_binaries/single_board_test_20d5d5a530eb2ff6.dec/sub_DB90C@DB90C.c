int __fastcall sub_DB90C(int a1, char *s1, int a3)
{
  int (__fastcall *v5)(int, char *, int); // r6

  if ( a1 && *(_DWORD *)a1 && (v5 = *(int (__fastcall **)(int, char *, int))(*(_DWORD *)a1 + 104)) != 0 )
  {
    if ( !strcmp(s1, "digest") )
      return sub_DB8C0(a1, 248, 1, a3);
    else
      return v5(a1, s1, a3);
  }
  else
  {
    sub_D0048(6, 150, 147, (int)"crypto/evp/pmeth_lib.c", 411);
    return -2;
  }
}
