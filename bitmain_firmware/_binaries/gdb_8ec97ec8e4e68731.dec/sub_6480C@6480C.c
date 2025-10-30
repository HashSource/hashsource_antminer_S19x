int __fastcall sub_6480C(int a1, int a2, int a3)
{
  int v5; // r10
  int v6; // r7
  int v7; // r9
  int v8; // r0
  int v9; // r9
  int result; // r0
  int v11; // r6
  unsigned int v12; // r8
  int v13; // t1
  int v14; // r0
  int v15; // r0
  bool v16; // cc
  int v17; // r4

  v5 = sub_1DDBBC(a1);
  v6 = sub_1DD58C(v5);
  v7 = ((int (*)(void))loc_166E9C)();
  v8 = ((int (__fastcall *)(int))loc_166F48)(v6);
  v9 = v7 + v8;
  if ( !a3 )
    sub_946E0(
      "-data-write-register-values: Usage: -data-write-register-values <format> [<regnum1> <value1>...<regnumN> <valueN>]");
  result = sub_22EB0C(v8);
  if ( !result )
    sub_946E0("-data-write-register-values: No registers.");
  if ( a3 == 1 )
    sub_946E0("-data-write-register-values: No regs and values specified.");
  if ( (a3 & 1) == 0 )
    sub_946E0("-data-write-register-values: Regs and vals are not in pairs.");
  if ( a3 > 1 )
  {
    v11 = 1;
    v12 = ((a3 - 2) & 0xFFFFFFFE) + 3;
    do
    {
      v15 = strtol(*(const char **)(a2 + 4), 0, 10);
      v16 = v15 <= 0;
      if ( v15 >= 0 )
        v16 = v9 <= v15;
      v17 = v15;
      if ( v16
        || !((int (__fastcall *)(int, int))loc_1677C0)(v6, v15)
        || !*(_BYTE *)((int (__fastcall *)(int, int))loc_1677C0)(v6, v17) )
      {
        sub_946E0("bad register number");
      }
      v13 = *(_DWORD *)(a2 + 8);
      a2 += 8;
      v11 += 2;
      v14 = sub_14CB9C(v13);
      result = ((int (__fastcall *)(int, int, int, _DWORD))loc_1DFBE0)(v5, v17, v14, 0);
    }
    while ( v11 != v12 );
  }
  return result;
}
