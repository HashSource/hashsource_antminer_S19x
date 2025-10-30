char *__fastcall sub_5FFE0(_DWORD *a1, int a2, int a3)
{
  int v4; // r5
  char *result; // r0

  v4 = a1[4];
  sub_2564E4(a1 + 2, a2, a3);
  result = strchr((const char *)(a1[3] + v4), 10);
  if ( result )
    return (char *)(*(int (__fastcall **)(_DWORD *))(*a1 + 28))(a1);
  return result;
}
