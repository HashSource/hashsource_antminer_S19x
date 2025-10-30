const char *__fastcall sub_21258C(int a1)
{
  char *v2; // r6
  const char *v3; // r0
  char *v4; // r5
  int v5; // r2
  char *v6; // r5
  const char *v7; // r8
  int v9; // r0
  int v10; // r0
  const char *v11; // r0
  char *v12; // r9
  int v13; // [sp+Ch] [bp-88h] BYREF
  void *ptr[2]; // [sp+10h] [bp-84h] BYREF
  _BYTE v15[16]; // [sp+18h] [bp-7Ch] BYREF
  _BYTE v16[16]; // [sp+28h] [bp-6Ch] BYREF
  int v17; // [sp+38h] [bp-5Ch]

  v2 = (char *)sub_2AD234(*(_DWORD *)(a1 + 36), &v13);
  if ( !v2 )
    return 0;
  v3 = (const char *)sub_1B87A8(a1);
  v4 = (char *)v3;
  ptr[0] = v15;
  if ( v3 )
    v5 = (int)&v3[strlen(v3)];
  else
    v5 = -1;
  sub_211AC4(ptr, v4, v5);
  sub_210F08((const char *)ptr[0]);
  v6 = (char *)sub_3245D0(ptr[0]);
  v7 = sub_21110C((char *)ptr[0], v6, v2, v13, a1);
  if ( !v7 )
  {
    v9 = sub_1B87A8(a1);
    if ( !_lxstat64(3, v9, v16) && (v17 & 0xF000) == 0xA000 )
    {
      v10 = sub_1B87A8(a1);
      v11 = (const char *)sub_3245D0(v10);
      v12 = (char *)v11;
      if ( v11 )
      {
        sub_210F08(v11);
        if ( sub_33CAA0((int)ptr, v12) )
          v7 = sub_21110C(v12, v12, v2, v13, a1);
        free(v12);
      }
    }
  }
  if ( v6 )
    free(v6);
  if ( ptr[0] != v15 )
    sub_339E64(ptr[0]);
  free(v2);
  return v7;
}
