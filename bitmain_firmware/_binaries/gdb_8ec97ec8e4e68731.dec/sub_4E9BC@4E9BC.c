int __fastcall sub_4E9BC(int a1, int *a2, int a3, unsigned int *a4)
{
  int v6; // r0
  unsigned int v7; // r4
  int v8; // r0
  int result; // r0

  *a2 = a3;
  v6 = sub_2484C(a1, a3);
  if ( v6 )
    v7 = a3 & 0xFFFFFFFE;
  else
    v7 = a3 & 0xFFFFFFFC;
  if ( v6 )
    v8 = 3;
  else
    v8 = 15;
  *a4 = v7;
  result = ((int (__fastcall *)(int, _DWORD))loc_4E934)(v8, 0);
  a4[1] = result;
  return result;
}
