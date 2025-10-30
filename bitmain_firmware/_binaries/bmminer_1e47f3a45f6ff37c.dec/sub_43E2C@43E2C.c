char *sub_43E2C()
{
  int v0; // r4
  char *v1; // r5
  int v2; // r0
  char *v3; // r1
  bool v4; // zf
  int v5; // r0
  const char *v6; // r0

  v0 = 0;
  v1 = &byte_534B8C;
  do
  {
    v2 = sub_26C0C(v0);
    v3 = v1;
    v1 += 64;
    v4 = v2 == 0;
    v5 = v0++;
    if ( !v4 )
      v5 = sub_1A2A8(v5, v3, 0x40u);
  }
  while ( v0 != 4 );
  v6 = (const char *)sub_6665C(v5, v3);
  return strncpy(&byte_534C8C, v6, 0x40u);
}
