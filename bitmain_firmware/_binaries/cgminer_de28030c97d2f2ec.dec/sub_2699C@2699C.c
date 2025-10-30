int __fastcall sub_2699C(_DWORD *a1, _DWORD *a2)
{
  int v3; // r0
  char v6[8]; // [sp+14h] [bp-808h] BYREF
  const char *v7; // [sp+814h] [bp-8h]

  if ( !a2 || *a2 != 1 )
    return 0;
  v3 = sub_66B80(a2, 0);
  v7 = (const char *)sub_677D0(v3);
  if ( !v7 )
    return 0;
  if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
  {
    snprintf(v6, 0x800u, "Pool %d message: %s", *a1, v7);
    sub_1E4EC(5, v6, 0);
  }
  return 1;
}
