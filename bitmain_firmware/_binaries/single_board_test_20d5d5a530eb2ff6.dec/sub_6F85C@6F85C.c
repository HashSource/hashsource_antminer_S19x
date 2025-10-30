int sub_6F85C()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  if ( !dword_65E300 )
  {
    v0 = sub_6F608();
    sub_6E364(v0);
    v1 = sub_6F608();
    sub_6E594(v1, 1);
    v2 = sub_6F620(2u);
    sub_6E364(v2);
    v3 = sub_6F620(2u);
    sub_6E594(v3, 1);
    v4 = sub_6F620(0x100u);
    sub_6E364(v4);
    v5 = sub_6F620(0x100u);
    sub_6E594(v5, 0);
    v6 = sub_6F620(0x101u);
    sub_6E364(v6);
    v7 = sub_6F620(0x101u);
    sub_6E594(v7, 0);
    dword_65E300 = 1;
  }
  return 0;
}
