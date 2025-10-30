int sub_1C7810()
{
  int result; // r0
  int v1; // r0
  _DWORD *v2; // r0

  result = dword_487CFC;
  if ( dword_487CFC >= 0 )
  {
    v1 = sub_1C77B8(dword_487CFC);
    v2 = (_DWORD *)sub_242FB4(v1);
    result = sub_2594B0(*v2, "Disabling display %d to avoid infinite recursion.\n", dword_487CFC);
  }
  dword_487CFC = -1;
  return result;
}
