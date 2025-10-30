void __fastcall sub_18F04(unsigned int *a1, int a2, const char *a3, int a4)
{
  const char *v4; // r4
  FILE *v7; // r0
  FILE *v8; // r6
  char *v9; // r6
  char *v10; // r8
  _BYTE v11[4096]; // [sp+8h] [bp-1000h] BYREF

  v4 = a3;
  if ( !a3 || !*a3 )
  {
    v4 = v11;
    sub_2D7F4(v11);
  }
  v7 = (FILE *)fopen64(v4, "w");
  v8 = v7;
  if ( v7 )
  {
    sub_2D174(v7);
    fclose(v8);
    v9 = (char *)sub_15C2C(v4, a4);
    sub_18AD4(a1, 44, 0, (int)v9, a4);
    if ( v4 != v9 )
      free(v9);
  }
  else
  {
    v10 = (char *)sub_15C2C(v4, a4);
    sub_18AD4(a1, 43, 0, (int)v10, a4);
    if ( v4 != v10 )
      free(v10);
  }
}
