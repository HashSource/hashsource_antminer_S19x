_DWORD *__fastcall sub_1FE15C(_DWORD *result, int a2, int a3)
{
  int v3; // r3

  v3 = result[2060];
  result[2059] = a3;
  result[2060] = a2;
  if ( (a2 == 0) != (v3 == 0) )
    return (_DWORD *)(*(int (**)(void))(result[3] + 72))();
  return result;
}
