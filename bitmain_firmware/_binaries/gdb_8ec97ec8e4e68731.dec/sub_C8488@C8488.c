int __fastcall sub_C8488(int a1, int a2, int a3, int a4)
{
  const char *v7; // r0
  int v8; // r3
  const char *v9; // r0
  int v11; // [sp+0h] [bp-80h] BYREF
  int v12; // [sp+4h] [bp-7Ch]
  char dest[64]; // [sp+40h] [bp-40h] BYREF

  v7 = (const char *)sub_98B60(a1, 0, 8, a4, v11, v12);
  strcpy((char *)&v11, v7);
  v9 = (const char *)sub_98B60(a2, 0, 8, v8, v11, v12);
  strcpy(dest, v9);
  if ( a4 )
    return sub_946B0("Breakpoint %d address previously adjusted from %s to %s.", a3, (const char *)&v11, dest);
  else
    return sub_946B0("Breakpoint address adjusted from %s to %s.", (const char *)&v11, dest);
}
