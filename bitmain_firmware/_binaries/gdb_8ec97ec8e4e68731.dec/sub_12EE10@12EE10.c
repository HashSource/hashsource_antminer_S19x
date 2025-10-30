int *__fastcall sub_12EE10(int a1, int a2, int a3, int a4, const char ***a5)
{
  int v5; // r5
  const char ***v6; // r3
  const char **v7; // r7
  const char **v8; // r6
  const char **v9; // r8
  int *result; // r0
  int v11; // r2
  const char **v12; // r1
  __int64 v13; // r2
  bool v14; // zf
  int v15; // r5
  char *v16; // r3

  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(const char ****)(v5 + 136);
  v7 = *a5;
  v8 = *v6;
  v9 = v6[3];
  result = (int *)sub_12E694(a3, 8497, v5);
  if ( result )
  {
    v11 = *(_DWORD *)(v5 + 136);
    a5[2] = v7;
    v12 = *(const char ***)(v11 + 4);
    v13 = *((_QWORD *)result + 1);
    v14 = dword_4872F4 == 0;
    a5[6] = v9;
    a5[8] = v12;
    *((_QWORD *)a5 + 2) = v13;
    a5[7] = v8;
    if ( !v14 )
    {
      v15 = *(_DWORD *)sub_242FC8(result);
      v16 = sub_98B08((int)a5[4], (int)a5[5]);
      return (int *)sub_2594B0(v15, "  offset 0x%x, dwo_id %s\n", v8, v16);
    }
  }
  else if ( dword_47AC88 > 0 )
  {
    return sub_F43B4(
             &off_46D334,
             "Dwarf Error: debug entry at offset 0x%x is missing its dwo_id [in module %s]",
             v8,
             *v7);
  }
  return result;
}
