void __fastcall sub_497D0(int a1)
{
  char v1[4]; // [sp+8h] [bp-904h] BYREF
  char v2[256]; // [sp+808h] [bp-104h] BYREF

  sub_314CC(v2, 0xFFu, a1);
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v1, 0x800u, "%s", v2);
    sub_1DB6C(4, v1, 0);
  }
}
