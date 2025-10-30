int __fastcall sub_1F6418(const char *a1)
{
  int v1; // r0
  const char *v3; // [sp+4h] [bp-Ch] BYREF
  __int64 v4; // [sp+8h] [bp-8h] BYREF

  v3 = a1;
  if ( sub_1F5F94(&v3, &v4) )
    return sub_1F61A4(-1, 5);
  v1 = sub_1F63C0(v4);
  return sub_1F61A4((unsigned int)(v1 + 3) <= 1, 0);
}
