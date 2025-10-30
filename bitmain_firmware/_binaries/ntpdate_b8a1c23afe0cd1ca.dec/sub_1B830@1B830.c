int __fastcall sub_1B830(int a1, FILE **a2)
{
  int v4; // r0
  int v5; // r5
  int v6; // r1
  int v7; // r0
  int v8; // r7
  FILE *v9; // r0
  int *v10; // r0
  int *v12; // r0
  _WORD v13[54]; // [sp+0h] [bp-74h] BYREF

  if ( !a1 )
    sub_1073C();
  if ( !a2 || *a2 )
    sub_1073C();
  v4 = sub_1A6F0(a1, (int)v13);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 != 38 )
      return v5;
    v6 = 193;
  }
  else
  {
    if ( (v13[8] & 0x8000) == 0 )
      return 30;
    v6 = 513;
  }
  v7 = open64(a1, v6, 384);
  v8 = v7;
  if ( v7 == -1 )
  {
    v12 = _errno_location();
    return sub_1A3F8(*v12, "./../lib/isc/unix/file.c", 497);
  }
  else
  {
    v9 = fdopen(v7, "w");
    if ( v9 )
    {
      *a2 = v9;
      return 0;
    }
    else
    {
      v10 = _errno_location();
      v5 = sub_1A3F8(*v10, "./../lib/isc/unix/file.c", 501);
      close(v8);
    }
  }
  return v5;
}
