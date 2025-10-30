int __fastcall sub_E0D88(int *a1, const char *a2)
{
  char *v4; // r8
  int result; // r0
  const char *v6; // r5
  int v7; // r0
  int v8; // r9
  int v9; // r10
  int v10; // r6
  int v11; // r4
  _DWORD *v12; // r0

  v4 = sub_E0BE8(*a1, a1[1]);
  result = a1[1];
  if ( result )
  {
    v7 = sub_2209DC(result);
    result = ((int (__fastcall *)(int))loc_2043D4)(v7);
    v6 = (const char *)result;
  }
  else
  {
    v6 = "<unknown>";
  }
  if ( dword_487D4C )
  {
    v8 = a1[9];
    v9 = a1[5];
    v10 = a1[6];
    v11 = a1[11];
    v12 = (_DWORD *)sub_242FC8(result);
    return sub_2594B0(
             *v12,
             "[btrace] [ftrace] %s: fun = %s, file = %s, level = %d, insn = [%u; %u)\n",
             a2,
             v4,
             v6,
             v11,
             v8,
             v8 + ((v10 - v9) >> 4));
  }
  return result;
}
