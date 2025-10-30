char *__fastcall sub_1F0E4(const char *a1, int a2, int a3)
{
  size_t v5; // r0
  int v6; // r2
  bool v7; // zf
  int v8; // r1
  _DWORD v10[6]; // [sp+4h] [bp-1Ch] BYREF

  v10[0] = a1;
  v5 = strlen(a1);
  v6 = a3;
  if ( a3 )
    v6 = 1;
  if ( !a2 )
    v6 = 0;
  v7 = v6 == 0;
  v10[1] = v5;
  if ( v6 )
    v6 = 0;
  v10[3] = 1;
  if ( v7 )
    v8 = 2;
  else
    v8 = 3;
  v10[2] = "=";
  if ( !v7 )
  {
    v10[4] = a2;
    v10[5] = a3;
  }
  return sub_1EEC8((char *)v10, v8, v6);
}
