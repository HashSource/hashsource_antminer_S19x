int __fastcall sub_1D8780(int result)
{
  int *v1; // r4
  int v2; // r5
  char *v3; // r0
  int v4; // r2

  v1 = (int *)result;
  if ( (unsigned int)dword_487D4C > 1 )
  {
    v2 = *(_DWORD *)sub_242FC8(result);
    v3 = sub_98EEC((int)v1);
    result = sub_2594B0(v2, "Process record: record_full_arch_list_add %s.\n", v3);
  }
  v4 = dword_4880A0;
  if ( dword_4880A0 )
  {
    *(_DWORD *)(dword_4880A0 + 4) = v1;
    dword_4880A0 = (int)v1;
    *v1 = v4;
  }
  else
  {
    dword_4880A4 = (int)v1;
    dword_4880A0 = (int)v1;
  }
  return result;
}
