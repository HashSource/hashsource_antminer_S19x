ssize_t __fastcall sub_5BFCC(int a1)
{
  int *v1; // r5
  _BYTE *v3; // r3
  int v4; // r2
  char v5; // r12
  ssize_t result; // r0
  bool v7; // zf
  char v8; // r1
  int v9; // r2
  char buf; // [sp+3h] [bp-9h] BYREF
  int v11; // [sp+4h] [bp-8h]

  v1 = *(int **)(a1 + 84);
  v3 = (_BYTE *)*v1;
  v4 = *(unsigned __int8 *)(*v1 + 28);
  v5 = *(_BYTE *)(*v1 + 30);
  result = *(unsigned __int8 *)(*v1 + 31);
  v7 = v4 == 0;
  v3[28] = *(_BYTE *)(*v1 + 29);
  buf = v4;
  v8 = v3[32];
  v9 = _stack_chk_guard;
  v3[29] = v5;
  v3[30] = result;
  v3[31] = v8;
  v11 = v9;
  if ( !v7 )
  {
    result = write(v1[7], &buf, 1u);
    if ( result != 1 )
      result = sub_64E00(5, "ARCRON: write to fd %d failed", v1[7]);
    v1 = *(int **)(a1 + 84);
  }
  v1[12] = current_time + 2;
  return result;
}
