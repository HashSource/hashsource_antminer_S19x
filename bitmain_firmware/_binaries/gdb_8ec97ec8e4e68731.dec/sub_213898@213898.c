char *__fastcall sub_213898(const char *a1, unsigned int a2, _DWORD *a3, int a4)
{
  char *v8; // r4
  const char **v10; // [sp+Ch] [bp-8h] BYREF

  sub_21278C(&v10, a1);
  v8 = sub_2131E0((int)v10, a1, a2, a3, a4, 0);
  if ( v10 )
    ((void (*)(void))loc_1625A8)();
  return v8;
}
