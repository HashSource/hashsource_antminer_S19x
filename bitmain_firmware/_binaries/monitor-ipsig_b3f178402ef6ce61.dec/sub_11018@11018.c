int sub_11018()
{
  int v0; // r0
  int v1; // r4
  int result; // r0
  int v3; // [sp+Ch] [bp-8h] BYREF

  v0 = socket(2, 2, 0);
  v1 = v0;
  dword_219E0 = v0;
  if ( v0 == -1 )
  {
    printf("socket error");
    return v1;
  }
  v3 = 1;
  v1 = setsockopt(v0, 1, 6, &v3, 4u);
  if ( v1 == -1 )
  {
    printf("set socket error...");
    return v1;
  }
  v1 = 0;
  word_21A22 = -25801;
  dword_21A24 = -1;
  dword_21A28 = 0;
  dword_21A18 = 0;
  dword_21A2C = 0;
  dword_21A1C = 0;
  word_21A12 = -25545;
  dword_21A14 = 0;
  word_21A20 = 2;
  word_21A10 = 2;
  result = bind(dword_219E0, (const struct sockaddr *)&word_21A10, 0x10u);
  if ( result == -1 )
  {
    printf("bind error...");
    return v1;
  }
  return result;
}
