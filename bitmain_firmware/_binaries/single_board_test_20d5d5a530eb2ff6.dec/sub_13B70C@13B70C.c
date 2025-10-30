bool __fastcall sub_13B70C(const char *a1)
{
  int v2; // [sp+4h] [bp-Ch] BYREF
  char *v3; // [sp+8h] [bp-8h]
  int v4; // [sp+Ch] [bp-4h]

  v3 = 0;
  v2 = 0;
  v4 = 0;
  if ( a1 )
    v3 = _strdup(a1);
  v4 = 50;
  return sub_DE05C(64, 0, (int)&v2);
}
