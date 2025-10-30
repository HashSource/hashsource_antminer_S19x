int __fastcall sub_68F08(_QWORD *a1, int *a2)
{
  int v4; // r1
  int result; // r0
  __int64 v6; // [sp+4h] [bp+0h] BYREF

  if ( socketpair(1, 1, 0, (int *)&v6) != -1 )
  {
    v4 = 0;
    goto LABEL_4;
  }
  result = pipe((int *)&v6);
  if ( result != -1 )
  {
    v4 = 1;
LABEL_4:
    result = 0;
    *a1 = v6;
    if ( a2 )
      *a2 = v4;
  }
  return result;
}
