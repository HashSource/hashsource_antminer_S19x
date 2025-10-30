char *__fastcall sub_F5474(int a1, char *a2)
{
  char *result; // r0
  char *v5[4]; // [sp+4h] [bp-10h] BYREF

  v5[0] = (char *)(*((int (**)(void))off_46D5A4[0] + 29))();
  v5[1] = "'";
  v5[2] = off_47075C;
  result = sub_F5190(v5, 0, a2);
  *(_DWORD *)(a1 + 92) += result - a2;
  return result;
}
