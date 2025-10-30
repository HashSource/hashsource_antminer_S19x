int __fastcall sub_1F66A8(const char *a1)
{
  int v1; // r0
  int v2; // r4
  __int64 v4; // r0
  const char *v5; // [sp+Ch] [bp-14h] BYREF
  __int64 v6; // [sp+10h] [bp-10h] BYREF
  __int64 v7; // [sp+18h] [bp-8h] BYREF

  v5 = a1;
  if ( sub_1F5F94(&v5, &v7) )
    return sub_1F61A4(-1, 5);
  v1 = sub_1F63C0(v7);
  v2 = v1;
  if ( v1 == -1 )
    return sub_1F61A4(-1, 9);
  if ( (unsigned int)(v1 + 3) <= 1 )
    return sub_1F61A4(-1, 29);
  if ( sub_1F5F94(&v5, &v6) || sub_1F5F94(&v5, &v7) )
    return sub_1F61A4(-1, 5);
  if ( (_DWORD)v7 != 1 && (_DWORD)v7 != 2 && (_DWORD)v7 )
    return sub_1F61A4(-1, 22);
  LODWORD(v4) = lseek64(v2);
  if ( v4 == -1 )
    return sub_1F6474();
  else
    return sub_1F61A4(v4, 0);
}
