int __fastcall sub_16DFB8(int a1, unsigned int *a2)
{
  int v4; // r0
  int v5; // r5
  int result; // r0
  const char *v7; // r0
  char v8; // r0
  const char *v9; // r0
  const char *v10; // r0
  char v11; // r0
  FILE *v12; // r7
  const char *v13; // r0
  char v14; // r0
  const char *v15; // r6
  const char *v16; // r0

  v4 = sub_16DA0C((int)a2);
  if ( v4 != 2 )
  {
    v5 = v4;
    if ( v4 == 3 )
    {
      v9 = (const char *)sub_16DA14((int)a2);
      fputs(v9, (FILE *)dword_6E1D48);
      v10 = (const char *)sub_16DA18(a2);
      fputs(v10, (FILE *)dword_6E1D48);
      fflush((FILE *)dword_6E1D48);
      v11 = sub_16DA10((int)a2);
      return sub_16DD88(a1, a2, v11 & 1, 0);
    }
    if ( v4 == 1 )
    {
      v7 = (const char *)sub_16DA14((int)a2);
      fputs(v7, (FILE *)dword_6E1D48);
      fflush((FILE *)dword_6E1D48);
      v8 = sub_16DA10((int)a2);
      return sub_16DD88(a1, a2, v8 & 1, v5);
    }
    return 1;
  }
  v12 = (FILE *)dword_6E1D48;
  v13 = (const char *)sub_16DA14((int)a2);
  fprintf(v12, "Verifying - %s", v13);
  fflush((FILE *)dword_6E1D48);
  v14 = sub_16DA10((int)a2);
  result = sub_16DD88(a1, a2, v14 & 1, 1);
  if ( result > 0 )
  {
    v15 = (const char *)sub_16DA24(a2);
    v16 = (const char *)sub_16DB04(a2);
    if ( strcmp(v15, v16) )
    {
      fwrite("Verify failure\n", 1u, 0xFu, (FILE *)dword_6E1D48);
      fflush((FILE *)dword_6E1D48);
      return 0;
    }
    return 1;
  }
  return result;
}
