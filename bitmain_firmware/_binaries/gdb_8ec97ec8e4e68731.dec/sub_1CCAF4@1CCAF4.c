int __fastcall sub_1CCAF4(const char *a1, char *a2, char *a3)
{
  unsigned __int8 *v6; // r0
  const char *v7; // r0
  int v8; // r0
  int v10; // r4
  char v11; // [sp+Ch] [bp-10h] BYREF
  char v12; // [sp+10h] [bp-Ch] BYREF
  int v13; // [sp+14h] [bp-8h] BYREF

  if ( !a1 || strncmp(a1, "Intel(R)", 8u) )
    return 0;
  if ( !a2 )
    a2 = &v11;
  if ( !a3 )
    a3 = &v12;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)a2 = 0;
  v6 = (unsigned __int8 *)sub_338BD4(a1, "Version");
  if ( v6 )
  {
    v7 = sub_93610(v6);
    v13 = 0;
    v8 = sscanf(v7, "%d.%d.%d.%*d", a2, &v13, a3);
    if ( v8 == 3 )
      return 1;
    if ( v8 == 2 )
    {
      *(_DWORD *)a3 = v13;
      return 1;
    }
  }
  v10 = (unsigned __int8)byte_487D1C;
  if ( byte_487D1C )
    return 0;
  sub_946B0("Could not recognize version of Intel Compiler in: \"%s\"", a1);
  byte_487D1C = 1;
  return v10;
}
