char *__fastcall sub_159DD0(_DWORD *a1, _BYTE *a2, _DWORD *a3)
{
  char *result; // r0
  _DWORD *v6; // r4
  int **v7; // [sp+4h] [bp-4h] BYREF

  v7 = 0;
  result = sub_135A8C(&v7, a2);
  if ( result )
  {
    v6 = sub_159C58(a1, v7, a3);
    sub_B87C8((int *)v7);
    return (char *)v6;
  }
  return result;
}
