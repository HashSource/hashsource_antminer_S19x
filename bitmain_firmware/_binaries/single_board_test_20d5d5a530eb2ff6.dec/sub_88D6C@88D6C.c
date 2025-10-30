int __fastcall sub_88D6C(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  int v4; // [sp+Ch] [bp-8h] BYREF

  if ( a3 < 0 )
  {
    sub_D0048(20, 208, 271, "ssl/ssl_lib.c", 1986);
    return -1;
  }
  else
  {
    result = sub_88BE4(a1, a2, a3, &v4);
    if ( result > 0 )
      return v4;
  }
  return result;
}
