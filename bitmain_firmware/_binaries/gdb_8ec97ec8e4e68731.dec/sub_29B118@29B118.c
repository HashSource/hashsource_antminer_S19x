void __fastcall sub_29B118(int a1, int a2)
{
  char *v4; // r5
  char *v5; // r5

  v4 = (char *)sub_93028(0xCu);
  sprintf(v4, "%d", a1);
  setenv("LINES", v4, 1);
  sub_297758(v4);
  v5 = (char *)sub_93028(0xCu);
  sprintf(v5, "%d", a2);
  setenv("COLUMNS", v5, 1);
  sub_297758(v5);
}
