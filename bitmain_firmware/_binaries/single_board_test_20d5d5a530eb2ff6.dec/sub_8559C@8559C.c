char *__fastcall sub_8559C(int a1, _DWORD *a2)
{
  int v3; // r0
  int v4; // r3
  int v6; // [sp+4h] [bp-4h] BYREF

  v3 = sub_DA19C();
  if ( !v3 || !sub_85538(v3, &v6) )
    return 0;
  v4 = v6;
  if ( a2 )
    *a2 = v6;
  return (char *)&unk_1A8FA4 + 8 * v4;
}
