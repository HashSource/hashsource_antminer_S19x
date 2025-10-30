void **__fastcall sub_19B9EC(void **a1, const char *a2, unsigned int a3)
{
  const char *v6; // [sp+Ch] [bp-38h] BYREF
  int v7; // [sp+14h] [bp-30h] BYREF
  _BYTE v8[4]; // [sp+18h] [bp-2Ch] BYREF
  int v9; // [sp+1Ch] [bp-28h]
  int v10; // [sp+28h] [bp-1Ch]

  v6 = a2;
  if ( !a2 )
    sub_946E0("Empty line specification.");
  sub_203210(v8);
  sub_19DBE0(&v7, &v6, off_46D5A4[0], 0);
  sub_19B938(a1, v7, a3, 0, v9, v10);
  if ( *v6 )
    sub_946E0("Junk at end of line specification: %s", v6);
  if ( v7 )
    ((void (__fastcall *)(int *))loc_19D154)(&v7);
  return a1;
}
