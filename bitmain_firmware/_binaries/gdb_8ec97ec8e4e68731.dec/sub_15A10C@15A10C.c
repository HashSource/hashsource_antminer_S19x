char *__fastcall sub_15A10C(int a1)
{
  char *v1; // r4
  int v3; // r0
  int v4; // r0
  char *v5; // r3
  char *v6; // r4

  v1 = off_46D4A4;
  if ( off_46D4A4 != "auto" )
    return off_46D4A4;
  v3 = sub_16F654(a1);
  v4 = ((int (__fastcall *)(int))loc_16DD90)(v3);
  v5 = v1 - 8;
  v6 = v1 - 20;
  if ( !v4 )
    return v5;
  return v6;
}
