int __fastcall sub_1352FC(int a1, int a2, int a3)
{
  int v6; // r6
  int result; // r0
  int v8; // r6
  int v9; // r0
  int v10; // r3

  v6 = sub_1345C4(a1, (_DWORD *)a2);
  result = sub_11D4EC(*(_DWORD *)(a1 + 8), *(_DWORD *)(a2 + 136));
  if ( !result )
  {
    v8 = sub_170220(v6, a3);
    v9 = sub_12E694(a1, 11, a2);
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 8);
    else
      v10 = *(unsigned __int8 *)(a2 + 14);
    *(_DWORD *)(v8 + 20) = v10;
    return sub_134FA4(a1, v8, (int *)a2);
  }
  return result;
}
