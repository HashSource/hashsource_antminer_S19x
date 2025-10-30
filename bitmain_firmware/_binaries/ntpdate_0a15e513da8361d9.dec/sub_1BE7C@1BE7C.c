int __fastcall sub_1BE7C(int a1, FILE **a2)
{
  int result; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r6
  FILE *v8; // r0
  int *v9; // r0
  int v10; // r4
  int *v11; // r0
  _WORD v12[54]; // [sp+0h] [bp-70h] BYREF

  if ( !a1 )
    sub_10C38();
  if ( !a2 || *a2 )
    sub_10C38();
  result = sub_1AD08(a1, (int)v12);
  if ( result )
  {
    if ( result != 38 )
      return result;
    v5 = 193;
  }
  else
  {
    if ( (v12[8] & 0x8000) == 0 )
      return 30;
    v5 = 513;
  }
  v6 = open64(a1, v5, 384);
  v7 = v6;
  if ( v6 == -1 )
  {
    v11 = _errno_location();
    return sub_1AA10(*v11, "./../lib/isc/unix/file.c", 497);
  }
  else
  {
    v8 = fdopen(v6, "w");
    if ( v8 )
    {
      *a2 = v8;
      return 0;
    }
    else
    {
      v9 = _errno_location();
      v10 = sub_1AA10(*v9, "./../lib/isc/unix/file.c", 501);
      close(v7);
      return v10;
    }
  }
}
