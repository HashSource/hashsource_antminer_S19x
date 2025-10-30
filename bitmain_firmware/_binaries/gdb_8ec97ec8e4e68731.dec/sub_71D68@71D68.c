int *__fastcall sub_71D68(int a1, _BOOL4 a2)
{
  int *v4; // r6
  int v5; // r7
  int *result; // r0
  int v7; // r2
  int v8; // r0

  v4 = _errno_location();
  v5 = *v4;
  result = sub_71CE8((int *)a1);
  *(_DWORD *)a1 = a2;
  v7 = dword_474948;
  *(_DWORD *)(a1 + 40) = 1;
  if ( !v7 || a1 != *(_DWORD *)(v7 + 4 * dword_47494C) )
    *(_QWORD *)(a1 + 32) = 1;
  if ( a2 )
  {
    v8 = fileno((FILE *)a2);
    result = (int *)isatty(v8);
    a2 = (int)result > 0;
  }
  *(_DWORD *)(a1 + 24) = a2;
  *v4 = v5;
  return result;
}
