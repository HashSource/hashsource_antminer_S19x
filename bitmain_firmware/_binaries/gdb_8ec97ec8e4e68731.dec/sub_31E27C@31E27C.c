_BYTE *__fastcall sub_31E27C(const char *a1, int a2, int a3, int a4)
{
  const char *v4; // r4
  const char *v5; // r3
  _DWORD *v6; // r6
  int v7; // r5
  size_t v8; // r0
  const char *v9; // t1
  _DWORD *v10; // r7
  _BYTE *v11; // r9
  _BYTE *v12; // r5
  size_t v13; // r6
  const char *v14; // t1
  _DWORD varg_r0[4]; // [sp+28h] [bp+1Ch] BYREF

  varg_r0[0] = a1;
  varg_r0[1] = a2;
  varg_r0[2] = a3;
  varg_r0[3] = a4;
  v4 = a1;
  if ( a1 )
  {
    v5 = a1;
    v6 = varg_r0;
    v7 = 0;
    do
    {
      v8 = strlen(v5);
      v9 = (const char *)v6[1];
      ++v6;
      v5 = v9;
      v7 += v8;
    }
    while ( v9 );
    v10 = varg_r0;
    v11 = sub_93028(v7 + 1);
    v12 = v11;
    do
    {
      v13 = strlen(v4);
      memcpy(v12, v4, v13);
      v14 = (const char *)v10[1];
      ++v10;
      v4 = v14;
      v12 += v13;
    }
    while ( v14 );
  }
  else
  {
    v12 = sub_93028(1u);
    v11 = v12;
  }
  *v12 = 0;
  return v11;
}
