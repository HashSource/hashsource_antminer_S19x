int __fastcall sub_31E204(const char *a1, int a2, int a3, int a4)
{
  const char *v4; // r4
  _BYTE *v5; // r5
  _DWORD *v6; // r7
  size_t v7; // r6
  const char *v8; // t1
  _DWORD varg_r0[4]; // [sp+20h] [bp+18h] BYREF

  varg_r0[0] = a1;
  varg_r0[1] = a2;
  varg_r0[2] = a3;
  varg_r0[3] = a4;
  v4 = a1;
  v5 = (_BYTE *)dword_490170;
  if ( a1 )
  {
    v6 = varg_r0;
    do
    {
      v7 = strlen(v4);
      memcpy(v5, v4, v7);
      v8 = (const char *)v6[1];
      ++v6;
      v4 = v8;
      v5 += v7;
    }
    while ( v8 );
  }
  *v5 = 0;
  return dword_490170;
}
