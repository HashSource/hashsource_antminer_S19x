int __fastcall sub_31E134(const char *a1, int a2, int a3, int a4)
{
  const char *v4; // r3
  int v5; // r4
  _DWORD *v6; // r5
  size_t v7; // r0
  const char *v8; // t1
  _DWORD varg_r0[4]; // [sp+18h] [bp+Ch] BYREF

  varg_r0[0] = a1;
  varg_r0[1] = a2;
  varg_r0[2] = a3;
  varg_r0[3] = a4;
  v4 = a1;
  if ( !a1 )
    return 0;
  v6 = varg_r0;
  v5 = 0;
  do
  {
    v7 = strlen(v4);
    v8 = (const char *)v6[1];
    ++v6;
    v4 = v8;
    v5 += v7;
  }
  while ( v8 );
  return v5;
}
