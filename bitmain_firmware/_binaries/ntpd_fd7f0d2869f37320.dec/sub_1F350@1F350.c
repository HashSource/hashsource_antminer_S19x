char *__fastcall sub_1F350(const char *a1, int a2, int a3)
{
  size_t v5; // r0
  bool v6; // zf
  int v7; // r2
  int v8; // r1
  _DWORD v10[6]; // [sp+4h] [bp-1Ch] BYREF

  v10[0] = a1;
  v5 = strlen(a1);
  v6 = a2 == 0;
  if ( a2 )
    v6 = a3 == 0;
  v10[3] = 1;
  v7 = !v6;
  if ( v6 )
  {
    v8 = 2;
  }
  else
  {
    v7 = 0;
    v8 = 3;
  }
  if ( !v6 )
    v10[4] = a2;
  v10[2] = "=";
  if ( !v6 )
    v10[5] = a3;
  v10[1] = v5;
  return sub_1F104((char *)v10, v8, v7);
}
