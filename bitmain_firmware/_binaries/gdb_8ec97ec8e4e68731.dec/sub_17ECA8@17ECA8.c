int __fastcall sub_17ECA8(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int result; // r0
  int v9; // r0

  sub_243C34(a1);
  if ( sub_98F78(&dword_4878EC, &dword_475848) )
    sub_946E0("The program is not being run.");
  v4 = sub_24B28C(a2);
  sub_24B39C(v4);
  sub_230848(a1, a2);
  sub_DB35C(2);
  v6 = sub_16F654(v5);
  v7 = ((int (__fastcall *)(int))loc_16D884)(v6);
  if ( v7 )
  {
    result = sub_183CA8(v7);
    if ( result )
      goto LABEL_4;
  }
  else
  {
    v9 = sub_201A40(0, a2);
    result = sub_183CA8(v9);
    if ( result )
      goto LABEL_4;
  }
  result = sub_23E154();
LABEL_4:
  if ( off_48A56C )
    return off_48A56C();
  return result;
}
