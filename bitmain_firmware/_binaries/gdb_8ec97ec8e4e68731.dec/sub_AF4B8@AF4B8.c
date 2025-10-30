void __fastcall sub_AF4B8(const char *a1)
{
  int v2; // r8
  const char **v3; // r4
  const char **v4; // r6
  const char *v5; // r5
  const char *v6; // r0
  const char **v7; // [sp+4h] [bp-Ch] BYREF
  const char **v8; // [sp+8h] [bp-8h]

  v2 = sub_B894C(a1);
  sub_AF454((int)&v7, (int)a1);
  if ( a1 )
    sub_259F10("All Ada exceptions matching regular expression \"%s\":\n", a1);
  else
    sub_259F10("All defined Ada exceptions:\n");
  v3 = v7;
  v4 = v8;
  if ( v7 != v8 )
  {
    do
    {
      v5 = *v3;
      v6 = (const char *)sub_25AC8C(v2, v3[1]);
      sub_259F10("%s: %s\n", v5, v6);
      v3 += 2;
    }
    while ( v4 != v3 );
    v4 = v7;
  }
  if ( v4 )
    sub_339E64(v4);
}
