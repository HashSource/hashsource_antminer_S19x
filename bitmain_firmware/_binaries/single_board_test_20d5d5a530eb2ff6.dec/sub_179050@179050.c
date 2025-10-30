int __fastcall sub_179050(int a1)
{
  int result; // r0
  char ***v3; // r4
  int v4; // r5
  char **v5; // r0
  char ***v6; // r7

  result = sub_138E84();
  v3 = (char ***)result;
  if ( result )
  {
    v4 = sub_B2018((int)&CMS_DigestedData_it);
    if ( v4 )
    {
      v5 = sub_EAA20(0x19u);
      v3[1] = (char **)v4;
      v6 = *(char ****)(v4 + 8);
      *v3 = v5;
      *(_DWORD *)v4 = 0;
      *v6 = sub_EAA20(0x15u);
      sub_B2974(*(_DWORD **)(v4 + 4), a1);
      return (int)v3;
    }
    else
    {
      sub_138E98((int)v3);
      return 0;
    }
  }
  return result;
}
