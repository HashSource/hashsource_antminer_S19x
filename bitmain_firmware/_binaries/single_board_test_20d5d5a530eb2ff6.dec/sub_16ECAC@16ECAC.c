int __fastcall sub_16ECAC(int a1, int a2, int a3)
{
  int v6; // r0
  char *v7; // r0

  if ( !a2 )
    return sub_16EB04((char *)0x38E, a1, a3 | 8);
  v6 = sub_16EC6C(a2);
  if ( v6 == -1 )
    return off_21FFE8(a2, a1, a3);
  v7 = sub_16EC3C(v6);
  return (*((int (__fastcall **)(char *, int, int))v7 + 2))(v7, a1, a3);
}
