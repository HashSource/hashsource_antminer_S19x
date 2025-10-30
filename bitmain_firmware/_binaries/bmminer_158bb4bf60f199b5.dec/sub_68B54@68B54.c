int sub_68B54()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  if ( !dword_1B11F4 )
  {
    v0 = sub_68828();
    sub_66C5C(v0);
    v1 = sub_68828();
    sub_66FA0(v1, 1);
    v2 = sub_68848(2u);
    sub_66C5C(v2);
    v3 = sub_68848(2u);
    sub_66FA0(v3, 1);
    v4 = sub_68848(0x100u);
    sub_66C5C(v4);
    v5 = sub_68848(0x100u);
    sub_66FA0(v5, 0);
    v6 = sub_68848(0x101u);
    sub_66C5C(v6);
    v7 = sub_68848(0x101u);
    sub_66FA0(v7, 0);
    dword_1B11F4 = 1;
  }
  return 0;
}
