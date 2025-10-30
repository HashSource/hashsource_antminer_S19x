int __fastcall sub_69E6C(_DWORD *a1, int *a2)
{
  int v4; // r1
  int v5; // r3
  int result; // r0
  int v7[2]; // [sp+4h] [bp+0h] BYREF

  if ( socketpair(1, 1, 0, v7) != -1 )
  {
    v4 = 0;
    goto LABEL_4;
  }
  result = pipe(v7);
  if ( result != -1 )
  {
    v4 = 1;
LABEL_4:
    v5 = v7[1];
    result = 0;
    *a1 = v7[0];
    a1[1] = v5;
    if ( a2 )
      *a2 = v4;
  }
  return result;
}
