int __fastcall sub_59A4C(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  bool v4; // zf
  _DWORD *v5; // r5
  int v8; // r4
  char v10[2048]; // [sp+0h] [bp-800h] BYREF

  v5 = a4;
  v4 = a4 == 0;
  if ( a4 )
    a4 = 0;
  if ( !v4 )
    *v5 = a4;
  a2[19] = a3;
  sub_51DD0((int)a2);
  if ( a2[55] )
  {
    sub_593C8(a1);
    return 0;
  }
  else
  {
    sub_59820((int *)(a1 + 36), (int)a2);
    v8 = sub_49D78(a2 + 48, a2 + 40);
    if ( !v8 )
    {
      if ( v5 )
        *v5 = 1;
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
      {
        strcpy(v10, "Share above target");
        sub_47AB4(6, v10, 0);
      }
      else
      {
        return (unsigned __int8)byte_1AECC4;
      }
    }
    return v8;
  }
}
