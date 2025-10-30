int *__fastcall sub_416C4(int a1)
{
  int *result; // r0
  int *v3; // r4
  int v4; // r5
  _DWORD *v5; // r0

  result = _errno_location();
  v3 = result;
  v4 = *result;
  if ( dword_47202C )
  {
    v5 = (_DWORD *)sub_242FC8(result);
    result = (int *)sub_256838(*v5, "sigchld\n", 8);
  }
  if ( a1 != 17 || dword_46AF74 == -1 )
  {
    *v3 = v4;
  }
  else
  {
    result = sub_40FCC();
    *v3 = v4;
  }
  return result;
}
