int __fastcall sub_5CD70(int a1)
{
  int *v1; // r7
  _BYTE *v3; // r3
  int v4; // r2
  char v5; // r12
  char v6; // r0
  bool v7; // zf
  char v8; // r1
  int v9; // r2
  int result; // r0
  char buf; // [sp+3h] [bp-9h] BYREF
  int v12; // [sp+4h] [bp-8h]

  v1 = *(int **)(a1 + 84);
  v3 = (_BYTE *)*v1;
  v4 = *(unsigned __int8 *)(*v1 + 28);
  v5 = *(_BYTE *)(*v1 + 30);
  v6 = *(_BYTE *)(*v1 + 31);
  v7 = v4 == 0;
  v3[28] = *(_BYTE *)(*v1 + 29);
  buf = v4;
  v8 = v3[32];
  v9 = _stack_chk_guard;
  v3[29] = v5;
  v3[30] = v6;
  v3[31] = v8;
  v12 = v9;
  if ( !v7 && write(v1[7], &buf, 1u) != 1 )
    sub_65D40(5, "ARCRON: write to fd %d failed", v1[7]);
  result = v12;
  *(_DWORD *)(*(_DWORD *)(a1 + 84) + 48) = current_time + 2;
  return result;
}
