int __fastcall sub_F4C8C(int a1, int a2)
{
  int v4; // r6

  (*(void (__fastcall **)(int, const char *))(a2 + 16))(a2, "--More--");
  (*(void (__fastcall **)(int))(a2 + 20))(a2);
  v4 = sub_F4BBC(1, a2);
  (*(void (__fastcall **)(int))(a2 + 24))(a2);
  if ( !v4 )
    return -1;
  if ( v4 == 2 )
    return a1 - 1;
  return 0;
}
