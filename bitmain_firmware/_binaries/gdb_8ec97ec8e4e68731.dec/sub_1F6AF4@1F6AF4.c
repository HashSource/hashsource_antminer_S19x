int __fastcall sub_1F6AF4(const char *a1)
{
  int v1; // r5
  int v2; // r0
  const char *v4; // [sp+4h] [bp-10h] BYREF
  __int64 v5; // [sp+8h] [bp-Ch] BYREF

  v4 = a1;
  if ( sub_1F5F94(&v4, &v5) )
    return sub_1F61A4(-1, 5);
  v1 = v5;
  v2 = sub_1F63C0(v5);
  if ( v2 == -1 )
    return sub_1F61A4(-1, 9);
  if ( (unsigned int)(v2 + 3) > 1 && close(v2) )
    sub_1F6474();
  if ( !dword_48934C )
    sub_1F6370();
  if ( v1 >= 0 && v1 < dword_489350 )
    *(_DWORD *)(dword_48934C + 4 * v1) = -1;
  return sub_1F61A4(0, 0);
}
