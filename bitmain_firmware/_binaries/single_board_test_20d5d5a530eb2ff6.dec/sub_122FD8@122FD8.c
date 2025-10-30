int __fastcall sub_122FD8(char *s)
{
  int v1; // r0
  size_t v2; // r6
  int v3; // r0
  int v4; // r4
  int v5; // r5
  int result; // r0
  _DWORD v7[4]; // [sp+0h] [bp-10h] BYREF

  v1 = sub_122ED4(v7, s);
  if ( !v1 )
    return 0;
  v2 = v1;
  v3 = sub_B2068();
  v4 = v3;
  if ( !v3 )
    return 0;
  v5 = sub_1280A4(v3, (char *)v7, v2);
  result = v4;
  if ( !v5 )
  {
    j_ASN1_STRING_free(v4);
    return 0;
  }
  return result;
}
