char *__fastcall sub_34838(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  int v6; // [sp+4h] [bp-Ch] BYREF
  int v7; // [sp+8h] [bp-8h]
  int v8; // [sp+Ch] [bp-4h]

  v6 = a2;
  v7 = a3;
  v8 = a4;
  if ( !sub_98F68(&v6) )
    return (char *)sub_231A94(v6, v7, v8);
  v5 = sub_98F68(&v6);
  snprintf(s, 0x50u, "LWP %ld", v5);
  return s;
}
