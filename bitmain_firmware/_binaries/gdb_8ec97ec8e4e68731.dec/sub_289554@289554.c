int __fastcall sub_289554(char *a1, char *s, int a3)
{
  size_t v6; // r0
  int (*v7)(); // r4
  int v8; // r5
  int v10; // [sp+4h] [bp-8h] BYREF

  v6 = strlen(s);
  v7 = (int (*)())sub_93028(2 * v6 + 1);
  v8 = sub_288D40(s, v7, &v10);
  if ( v8 )
  {
    v8 = -1;
    sub_297758(v7);
  }
  else
  {
    sub_2892F8(2, a1, v7, a3);
  }
  return v8;
}
